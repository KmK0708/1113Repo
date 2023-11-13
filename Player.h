#pragma once
#include <vector>
#include "Character.h"

class FPlayer : public FCharacter	// 상속
{
	// 상속 받으면 부모의 모든 것을 물려 받는다. 아래 코드는 생략 가능
public:
	FPlayer();				// 생성자
	~FPlayer();			// 소멸자

	void Move();			// 이동
#pragma region 상속시 생략가능
	//std::vector<int> Items;	// 아이템

	//void Move();			// 이동

	//// 접근자
	//int GetHP() 
	//{ 
	//	return HP; 
	//}

	//void SetHP (int NewHP)
	//{
	//	if (NewHP >= 0)
	//	{
	//		HP = NewHP;
	//	}
	//}
	//// 캡슐화 : 외부에서 접근할 수 없게 만드는 것
	//// 만든 사람이 사용하는 함수
	//private:
	//	int HP;

#pragma endregion

};
// Player is a Character
// Goblin is a Character
// Character is a Player


//// 접근자
//int GetHP() { return HP; }
//void SetHP (int NewHP)
//{
//	if (HP >= 0)
//	{
//		HP = NewHP;
//	}
//}

	//// 접근자 forceline : 함수를 강제로 인라인화 시키는 것
	//__forceinline int GetHP() { return HP; }
	//__forceinline void SetHP(int NewHP)
	//{
	//	if (HP >= 0)
	//	{
	//		HP = NewHP;
	//	}
	//}