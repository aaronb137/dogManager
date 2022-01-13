//Created by: Aaron Bartee
//CS 202
//Date: 10-3-2021

#ifndef DOGTABLEPRINTER_H
#define DOGTABLEPRINTER_H

#include <vector>
#include "Dog.h"
#include "DogTablePrinter.h"

void DogTablePrinter::printHeader() {
    std::cout << "\nName   Age    Breed\n======================" << std::endl;
}

void DogTablePrinter::dogPrinter(const Dog &dog) {
    int nameSpace = 8 - dog.getName().length();
    int ageSpace = 8 - std::to_string(dog.getAge()).length();

    std::cout << dog.getName() << makeSpace(nameSpace) << dog.getAge() << makeSpace(ageSpace) << dog.getBreed() << std::endl;
}

void DogTablePrinter::printDogTable(const std::vector<Dog> &dogs) {
    
	printHeader();
    
	for (Dog doggie : dogs) {
        dogPrinter(doggie);
    }

}

std::string DogTablePrinter::makeSpace(int space) {
    std::string addSpace = "";

	for (int temp = 0; temp < space; temp++) {
        addSpace += " ";
    }
    
	return addSpace;
}

#endif
