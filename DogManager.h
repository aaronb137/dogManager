//Created by: Aaron Bartee
//CS 202
//Date: 10-3-2021

#ifndef CODE_DOGMANAGER_H
#define CODE_DOGMANAGER_H

#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include "Dog.h"
#include "DogTablePrinter.h"

class DogManager {

	std::vector<Dog> dogs;

public:

    DogManager();
    DogManager(const std::string &filename);

    void loadDogs(const std::string &filename);
    const Dog& oldestDog();
    void printDogs();
    bool checkDog(std::string name, int age, std::string breed);

};

#endif
