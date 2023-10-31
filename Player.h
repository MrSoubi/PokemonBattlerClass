#pragma once
#include "GlobalHeader.h"
#include "Monster.h"

class Player
{
public:
	Player();

private:
	string _name;
	int _healthPoints;
	int _attackPoints;

public:
	void Attack(Monster* target);
	void TakeDamage(int damage);
	bool IsAlive();
	void PrintStatus();
};

