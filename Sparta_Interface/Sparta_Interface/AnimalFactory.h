#pragma once

#include <iostream>
#include "Animal.h"
#include "MacroDefine.h"

class AnimalFactory
{
public:
	static Animal* createAnimal(const AnimalType& type);
};

