#include <iostream>

#include "Zoo.h"
#include "AnimalFactory.h"
#include "MacroDefine.h"
#include <random>
#include <stdexcept>

using namespace std;
// 랜덤으로 동물 객체를 반환하는 함수
// 0~2중 하나의 난수를 생성하여 객체중하나를 동적으로 생성
// 생성된 객체는 Animal 타입의 포인터로 리턴
// 입력 매개변수 X
// 리턴값 Animal*
/*
* rand()를 사용한 난수는 경우의 수 혹은 분산이 고르지 않은 함수로 학습하였습니다.
* -> 랜덤 엔진은 시드 설정에 따른 값 출력, 시드설정을 위한 srand(time(NULL)) 방식의 사용 시 멀티스레드 환경에서 동일한 난수 생성으로 인한 문제 발생 우려
* 
* random_device : 시드 관련 랜덤 테이블을 완전한 난수로 바꾸기, 난수 생성속도는 rand()보다 낮다.
* mt19937 : 메르센 트위스터 방법을 사용하는 랜덤 엔진
* uniform_int_distribution : 균일 분산을 담당하는 함수
*/

Animal* createRandomAnimal()
{
	std::random_device rd;
	std::mt19937 mt(rd());
	std::uniform_int_distribution<int> dist(0, (ANIMAL_MAX_COUNT - 1));
	int randNum = dist(mt);

	// 재사용성 고려 보다는 협업 시 명확한 의도를 전달하기 위해 열거형을 사용했습니다.
	switch (randNum)
	{
	case DOG:
		return AnimalFactory::createAnimal(AnimalType::DOG);
		break;
	case CAT:
		return AnimalFactory::createAnimal(AnimalType::CAT);
		break;
	case COW:
		return AnimalFactory::createAnimal(AnimalType::COW);
		break;
	default:
		break;
	}

	return 0;
}

int main()
{
	bool isDone = false;
	int inputNum = 0;
	Zoo* zoo = new Zoo;


	while (!isDone)
	{
		std::cout << "Input 1: Add RandAnimal / 2: Zoo Performence / Else : Done" << std::endl;
		std::cout << "Input Num : ";
		std::cin >> inputNum;
		try {
			if (inputNum == 1)
			{
				zoo->addAnImal(createRandomAnimal());
			}
			else if (inputNum == 2)
			{
				zoo->performActions();
			}
			else
			{
				delete zoo;
				isDone = true;
			}
		}
		catch (std::exception e)
		{
			std::cout << "Error" << std::endl;
			delete zoo;
			isDone = true;
		}
	}

	
	return 0;
}

