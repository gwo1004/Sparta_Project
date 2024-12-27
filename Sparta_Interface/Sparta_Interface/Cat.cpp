#include "Cat.h"

Cat::Cat()
{
	std::cout << "Log : Generate Cat" << std::endl;
}

void Cat::makeSound()
{
	std::cout << "Meow" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Log : Delete Cat" << std::endl;
}
