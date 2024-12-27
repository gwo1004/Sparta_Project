#pragma once

#include <iostream>
#include "Animal.h"

class Cow : public Animal
{
public:
	Cow();
	void makeSound() override;
	~Cow();
};

