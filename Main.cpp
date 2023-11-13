#include <iostream>
#include <vector>
#include <list>
#include "Character.h"
#include "Goblin.h"
#include "Slime.h"
#include "Player.h"

using namespace std;

// override : 부모 클래스의 함수를 자식 클래스에서 재정의
// virtual : 가상함수, 가상함수를 사용하면 포인터 형태로도 사용 가능
// virtual void Move() = 0; : 순수 가상함수, 자식 클래스에서 반드시 재정의 해야함
// virtual void Move() = default; : 디폴트 가상함수, 자식 클래스에서 재정의 하지 않아도 됨

int main()
{
#pragma region 상속받은걸로 메인함수
	vector <FCharacter*> Characters;
	Characters.push_back(new FPlayer());
	Characters.push_back(new FSlime());
	Characters.push_back(new FGoblin());

	for (auto Character : Characters)
	{
		Character->Move();
	}

	// find 후 delete
	for (auto Character : Characters)
	{
		delete Character;
	}
#pragma endregion



	return 0;
}

#pragma region 이터레이터
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