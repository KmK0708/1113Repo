#include <iostream>
#include <vector>
#include <list>
#include "Character.h"
#include "Goblin.h"
#include "Slime.h"
#include "Player.h"

using namespace std;

// override : �θ� Ŭ������ �Լ��� �ڽ� Ŭ�������� ������
// virtual : �����Լ�, �����Լ��� ����ϸ� ������ ���·ε� ��� ����
// virtual void Move() = 0; : ���� �����Լ�, �ڽ� Ŭ�������� �ݵ�� ������ �ؾ���
// virtual void Move() = default; : ����Ʈ �����Լ�, �ڽ� Ŭ�������� ������ ���� �ʾƵ� ��

int main()
{
#pragma region ��ӹ����ɷ� �����Լ�
	vector <FCharacter*> Characters;
	Characters.push_back(new FPlayer());
	Characters.push_back(new FSlime());
	Characters.push_back(new FGoblin());

	for (auto Character : Characters)
	{
		Character->Move();
	}

	// find �� delete
	for (auto Character : Characters)
	{
		delete Character;
	}
#pragma endregion



	return 0;
}

#pragma region ���ͷ�����
	//// STL, Container
	//// vector, list, map, set, queue, stack, deque
	//vector<int> IntArray;

	//IntArray.push_back(1);
	////for (int i = 0; i < IntArray.size(); ++i)
	//for (auto it = IntArray.begin(); it != IntArray.end(); ++it)
	//{
	//	*it;
	//}

	//list<int> IntList;
	//for (auto it = IntList.begin(); it != IntList.end(); ++it)
	//{
	//	*it;
	//}
	//for (auto value : IntList)
	//{
	//	value;
	//}

#pragma endregion