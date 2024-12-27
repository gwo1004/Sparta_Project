#pragma once

#include "ArrayProject.h"

class IOArray
{

public:
	IOArray();
	void Init();
	void Update();

private:
	void inputArraySize();
	void inputArray();
	void sum();
	void average();
	void sort();

	ArrayProject* arrProject;
	
	bool isDone = false;
	int arraySize = 0;

public:
	~IOArray();
};

