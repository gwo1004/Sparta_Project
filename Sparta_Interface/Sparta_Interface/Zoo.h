#pragma once

#include "Animal.h"

class Zoo
{
public:
	Zoo();
	void addAnImal(Animal* animal);
	void performActions();			
	~Zoo();							

private:
	Animal* animals[10];
	int animalCount;
};

