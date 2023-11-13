#include "Player.h"
#include <iostream>

FPlayer::FPlayer()
{
		HP = 100;

		std::cout << "플레이어 생성" << std::endl;
}

FPlayer::~FPlayer()
{
	std::cout << "플레이어 파괴됨" << std::endl;
}

void FPlayer::Move()
{
	std::cout << "플레이어가 움직인다" << std::endl;
}