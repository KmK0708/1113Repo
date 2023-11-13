#include "Slime.h"
#include "Character.h"
#include <iostream>

FSlime::FSlime()
{
	std::cout << "슬라임 생성" << std::endl;
}

FSlime::~FSlime()
{
	std::cout << "슬라임 파괴됨" << std::endl;
}

void FSlime::Move()
{
	std::cout << "슬라임이 플레이어를 향해 움직인다" << std::endl;
}
