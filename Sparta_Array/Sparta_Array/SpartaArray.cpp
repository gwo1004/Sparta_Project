#include <iostream>
#include "ArrayProject.h"
#include "IOArray.h"

int main()
{
	IOArray* ioArr = new IOArray;
	ioArr->Init();
	ioArr->Update();

	return 0;
}
