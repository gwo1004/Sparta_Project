#pragma once

#include <iostream>

class ArrayProject
{
public :
	void inputArraySize(int arraySize);
	void inputArray(int index, int num);

	int sumArray();
	double averageArray();

	int* sort(int sortType);
	void quickSort(int array[], int low, int high, int sortType);
	int partition(int array[], int low, int high, int sortType);

	~ArrayProject();
private:
	int arraySize;
	int* iArray;
};