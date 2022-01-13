#include <iostream>
#include "Dog.h"
#include "DogManager.h"

bool INVALID_FILE_FORMAT = false;
const int NUM_ARGS = 2;

bool checkFile(std::string name);

int main(int argc, char const *argv[]) {
    if (argc < NUM_ARGS) {
        std::cout << "Correct usage:" << std::endl;
        std::cout << argv[0] << " filename" << std::endl;
        return 0;
    }
    std::string file = argv[1];
    
	if (checkFile(file)) {
        try {
            DogManager dogManager(file);
            dogManager.printDogs();
            Dog oldest = dogManager.oldestDog();
            std::cout << "The oldest dog is " << oldest.getAge() << " years old." << std::endl;
            std::cout << "Its name is " << oldest.getName() << "\n" << std::endl;
        }
        // TODO: Change this to the most appropriate exception type
        catch (std::invalid_argument &e)
        {
            INVALID_FILE_FORMAT = true;
        }
    }
    if (INVALID_FILE_FORMAT) {
        std::cout << "File not correctly formatted.." << std::endl;
    }

}

bool checkFile (std::string name) 
{
    std::ifstream filename;
    filename.open(name);

    if (!filename)
    {
        std::cout << "File " << name << " couldn't be opened..." << std::endl;
        filename.close();
        return false;
    }
    else
    {
        return true;
    }

}
