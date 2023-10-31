#pragma once
#include "GlobalHeader.h"

class Pokemon
{
public:
	Pokemon(string name, int healthPoints, int attackPoints);

private:
	string name;
	int healthPoints;
	int attackPoints;

public:
	void TakeDamage(int damage);
	void Attack(Pokemon* target);
	bool IsAlive();
	void PrintState();
};

