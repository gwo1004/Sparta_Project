#include "Cow.h"

Cow::Cow()
{
	std::cout << "Log : Generate Cow" << std::endl;
}

void Cow::makeSound()
{
	std::cout << "Moo" << std::endl;
}

Cow::~Cow()
{
	std::cout << "Log : Delete Cow" << std::endl;
}
