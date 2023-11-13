#include "Goblin.h"
#include "Character.h"
#include <iostream>

FGoblin::FGoblin()
{
	std::cout << "고블린 생성" << std::endl;
}

FGoblin::~FGoblin()
{
		std::cout << "고블린 파괴됨" << std::endl;
}

void FGoblin::Move()
{
	std::cout << "고블린이 플레이어를 향해 움직인다" << std::endl;
}
