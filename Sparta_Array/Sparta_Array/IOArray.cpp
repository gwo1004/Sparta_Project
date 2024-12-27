#include "IOArray.h"
#include "MacroDefine.h"

IOArray::IOArray()
{
	arrProject = new ArrayProject;
	isDone = false;
	arraySize = 0;
}

void IOArray::Init()
{	
	inputArraySize();
	inputArray();
}

void IOArray::Update()
{
	int chooseNum = 0;
	while (!isDone)
	{
		std::cout << "1: CLEAR / 2: SUM / 3: AVERAGE / 4: SORT / Else : Done" << std::endl;
		std::cin >> chooseNum;
		switch (chooseNum)
		{
		case CLEAR:
			Init();
			break;
		case SUM:
			sum();
			break;
		case AVERAGE:
			average();
			break;
		case SORT:
			sort();
			break;
		default:
			isDone = true;
			break;
		}
	}
}

void IOArray::inputArraySize()
{
	std::cout << "Input Array Size : ";
	std::cin >> arraySize;

	if (arraySize < 1)
	{
		std::cout << "Error! Invalid Size" << std::endl;
	}
	arrProject->inputArraySize(arraySize);
}

void IOArray::inputArray()
{
	int num = 0;

	for (int i = 0; i < arraySize; i++)
	{
		std::cout << "Input Num : ";
		std::cin >> num;
		arrProject->inputArray(i, num);
	}
}

void IOArray::sum()
{
	int sum = arrProject->sumArray();

	std::cout << "Sum : " << sum << std::endl;
}

void IOArray::average()
{
	double average = arrProject->averageArray();

	std::cout << "Average : " << average << std::endl;
}

void IOArray::sort()
{
	int ascNum = 0;

	std::cout << "Asc : 1 / Desc : 2 - ";
	std::cin >> ascNum;

	int* iArr = arrProject->sort(ascNum);

	for (int i = 0; i < arraySize; i++)
	{
		std::cout << iArr[i] << " ";
	}
	std::cout << std::endl;
}

IOArray::~IOArray()
{
	if (arrProject != NULL)
		delete arrProject;
}