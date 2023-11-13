#pragma once
class FCharacter
{
public:
	FCharacter();
	virtual ~FCharacter();

	virtual void Move();
	virtual void Attack();

	// Á¢±ÙÀÚ
	inline	int GetHP() const
	{
		return HP;
	}

	void SetHP(int NewHP)
	{
		if (NewHP >= 0)
		{
			HP = NewHP;
		}
	}

protected:
	int HP;
};

