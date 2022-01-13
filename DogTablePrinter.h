#ifndef DOG_TABLE_PRINTER_H
#define DOG_TABLE_PRINTER_H

#include <iostream>
#include <vector>
#include "Dog.h"

class DogTablePrinter{

	void printHeader();
	void dogPrinter(const Dog &dog);
	std::string makeSpace(int space);

public:

	void printDogTable(const std::vector<Dog> &dogs);

};

#endif
