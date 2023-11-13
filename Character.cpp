#include "Character.h"
#include <iostream>

FCharacter::FCharacter()
{
		HP = 100;

	std::cout << "생성" << std::endl;
}

FCharacter::~FCharacter()
{
	std::cout << "파괴됨" << std::endl;
}

void FCharacter::Move()
{
	std::cout << "움직인다" << std::endl;
}

void FCharacter::Attack()
{
	std::cout << "공격한다" << std::endl;
}
