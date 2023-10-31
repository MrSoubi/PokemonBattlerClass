#pragma once
#include "GlobalHeader.h"
#include "Player.h"

class Monster
{
protected:
	string _name;
	int _healthPoints;
	int _attackPoints;

public:
	void Attack(Player* player);
	void TakeDamage(int damage);
	bool IsAlive();
	void PrintStatus();
};