//Created by: Aaron Bartee
//CS 202
//Date: 10-3-2021

#ifndef DOG_H
#define DOG_H
#include <iostream>

class Dog {

    std::string name;
    std::string breed;
    int age;
    
public:

    Dog(std::string name, std::string breed, int age);
    
	int getAge() const;
    std::string getName() const;
    std::string getBreed() const;
    
};

#endif
