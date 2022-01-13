//Created by: Aaron Bartee
//CS 202
//Date: 10-3-2021

#include "Dog.h"

Dog::Dog(std::string name, std::string breed, int age): name(name), breed(breed), age(age){}

std::string Dog::getName() const {
	return name;
}

int Dog::getAge() const {
	return age;
}

std::string Dog::getBreed() const {
	return breed;
}
