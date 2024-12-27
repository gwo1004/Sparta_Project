#include "AnimalFactory.h"
#include "Dog.h"
#include "Cat.h"
#include "Cow.h"
#include <exception>

Animal* AnimalFactory::createAnimal(const AnimalType& type)
{
	switch (type)
	{
	case DOG:
		return new Dog;
		break;
	case CAT:
		return new Cat;
		break;
	case COW:
		return new Cow;
		break;
	default:
		throw std::invalid_argument("AnimalType Eroor");
		break;
	}
}
