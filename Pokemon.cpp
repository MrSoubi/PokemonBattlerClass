#include "Pokemon.h"

Pokemon::Pokemon(string name, int healthPoints, int attackPoints) {
	this->name = name;
	this->healthPoints = healthPoints;
	this->attackPoints = attackPoints;
}

void Pokemon::TakeDamage(int damage) {
	this->healthPoints -= damage;
}

void Pokemon::Attack(Pokemon* target) {
	target->TakeDamage(attackPoints);
}

bool Pokemon::IsAlive() {
	return this->healthPoints > 0;
}

void Pokemon::PrintState() {
	std::cout << this->name << endl;
	std::cout << "HP : " << this->healthPoints << endl;
}