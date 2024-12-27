#include "Dog.h"

Dog::Dog()
{
	std::cout << "Log : Generate Dog" << std::endl;
}

void Dog::makeSound()
{
	std::cout << "Bow" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Log : Delete Dog" << std::endl;
}
