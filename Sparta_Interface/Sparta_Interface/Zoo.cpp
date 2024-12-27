#include "Zoo.h"
#include <stdexcept>

Zoo::Zoo()
{
	animalCount = 0;
	for (int i = 0; i < 10; i++)
	{
		animals[i] = nullptr;
	}
}

void Zoo::addAnImal(Animal* animal)
{
	if (animalCount >= 10)
	{
		throw std::overflow_error("AnimalCount 10 Over!");
	}
	animals[animalCount] = animal;
	animalCount++;
}

void Zoo::performActions()
{
	for (int i = 0; i < animalCount; i++)
	{
		animals[i]->makeSound();
	}
}

Zoo::~Zoo()
{
	for (int i = 0; i < animalCount; i++)
	{
		delete animals[i];
	}
}
