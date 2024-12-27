#include "ArrayProject.h"
#include "MacroDefine.h"

void ArrayProject::inputArraySize(int arraySize)
{
	if (iArray != NULL)
	{
		delete[] iArray;
	}
	this->arraySize = arraySize;
	iArray = new int[arraySize];
}

void ArrayProject::inputArray(int index, int num)
{
	iArray[index] = num;
}

int ArrayProject::sumArray()
{
	int sumResult = 0;
	for (int i = 0; i <arraySize; i++)
	{
		sumResult += iArray[i];
	}

	return sumResult;
}

double ArrayProject::averageArray()
{
	double sumResult = 0;
	
	for (int i = 0; i < arraySize; i++)
	{
		sumResult += iArray[i];
	}
	
	return sumResult / arraySize;
}

int* ArrayProject::sort(int sortType)
{
	this->quickSort(iArray, 0, arraySize-1, sortType);

	return iArray;
}

void ArrayProject::quickSort(int array[], int low, int high, int sortType)
{
	if (low < high)
	{
		int pi = partition(array, low, high, sortType);
		quickSort(array, low, pi - 1, sortType);
		quickSort(array, pi + 1, high, sortType);
	}

}

int ArrayProject::partition(int array[], int low, int high, int sortType)
{
	int pivot = array[high];
	int i = low - 1;

	for (int j = low; j < high; j++) 
	{
		switch (sortType)
		{
		case ASC:
			if (array[j] <= pivot) {
				i++;
				std::swap(array[i], array[j]);
			}
			break;
		case DESC:
			if (array[j] >= pivot) {
				i++;
				std::swap(array[i], array[j]);
			}
			break;
		default:
			break;
		}
	}
	std::swap(array [i+1], array[high]);

	return i+1;
}



ArrayProject::~ArrayProject()
{
	if(iArray!=NULL)
		delete[] iArray;
}
