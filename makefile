pet_manager:	driver.cpp	DogManager.o DogTablePrinter.o Dog.o
	g++ -o pet_manager	driver.cpp	Dog.o DogManager.o DogTablePrinter.o 

Dog.o: Dog.cpp Dog.h
	g++ -c Dog.cpp

DogManager.o: DogManager.cpp	DogManager.h 
	g++ -c DogManager.cpp

DogTablePrinter.o: DogTablePrinter.cpp DogTablePrinter.h
	g++ -c DogTablePrinter.cpp

clean:
	rm pet_manager *.o
