#include "Monster.h"

void Monster::Attack(Player* player) {
	player->TakeDamage(this->_attackPoints);
}

void Monster::TakeDamage(int damage) {
	this->_healthPoints -= damage;
}

bool Monster::IsAlive() {
	return this->_healthPoints > 0;
}

void Monster::PrintStatus() {
	cout << this->_name << " has " << _healthPoints << " hp left." << endl;
}