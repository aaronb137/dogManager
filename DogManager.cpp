// Created by Aaron Bartee
//CS 202
//Date: 10-3-2021

#include "DogManager.h"

DogManager::DogManager(){}

DogManager::DogManager(const std::string &filename) {
    std::ifstream file (filename);
    
	if(file.is_open()) {
        loadDogs(filename);
    }
}

void DogManager::loadDogs(const std::string &filename) {
    
	std::ifstream file (filename);

    int temp = 0;
	char lineArray[200];

    std::string age;
    std::string name;
    std::string breed;
    
    if (file.is_open()) {
        while(!file.eof()) {
            
			file >> lineArray;
            name += lineArray;
            
			file >> lineArray;
            age += lineArray;

            file >> lineArray;
            breed += lineArray;

            if (checkDog(name, stoi(age), breed))
            {
                dogs.push_back(Dog(name, breed, stoi(age)));
            }
            
			name = "";
			age = "";
			breed = "";

        }

        file.close();
    }

}

const Dog& DogManager::oldestDog() {
    
	int oldestAge = -1;
    int indexOfOldest = -1;
    
	if(dogs.size() > 0) {
        for(int i = 0; i < int(dogs.size()); i++) {
            
			if(dogs.at(i).getAge() > oldestAge) {
                oldestAge = dogs.at(i).getAge();
                indexOfOldest = i;
            }

        }

    } 
   
	return dogs.at(indexOfOldest);
}

void DogManager::printDogs() {
    
	if (dogs.size() > 0) {
        DogTablePrinter printer = DogTablePrinter();
        printer.printDogTable(dogs);
    }

}

bool DogManager::checkDog(std::string name, int age, std::string breed) {
    
	if(name.length() > 0 && age > 0 && breed.length() > 0) {
        return true;
	}

    return false;

}
