#pragma once
#include <vector>
#include "Character.h"

class FPlayer : public FCharacter	// ���
{
	// ��� ������ �θ��� ��� ���� ���� �޴´�. �Ʒ� �ڵ�� ���� ����
public:
	FPlayer();				// ������
	~FPlayer();			// �Ҹ���

	void Move();			// �̵�
#pragma region ��ӽ� ��������
	//std::vector<int> Items;	// ������

	//void Move();			// �̵�

	//// ������
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
	//// ĸ��ȭ : �ܺο��� ������ �� ���� ����� ��
	//// ���� ����� ����ϴ� �Լ�
	//private:
	//	int HP;

#pragma endregion

};
// Player is a Character
// Goblin is a Character
// Character is a Player


//// ������
//int GetHP() { return HP; }
//void SetHP (int NewHP)
//{
//	if (HP >= 0)
//	{
//		HP = NewHP;
//	}
//}

	//// ������ forceline : �Լ��� ������ �ζ���ȭ ��Ű�� ��
	//__forceinline int GetHP() { return HP; }
	//__forceinline void SetHP(int NewHP)
	//{
	//	if (HP >= 0)
	//	{
	//		HP = NewHP;
	//	}
	//}