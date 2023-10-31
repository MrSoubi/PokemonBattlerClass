#include "Player.h"

Player::Player() {
	this->_name = "Hero";
	this->_healthPoints = 50;
	this->_attackPoints = 3;
}

void Player::Attack(Monster* target) {
	target->TakeDamage(this->_attackPoints);
}

void Player::TakeDamage(int damage) {
	this->_healthPoints -= damage;
}

bool Player::IsAlive() {
	return this->_healthPoints > 0;
}

void Player::PrintStatus() {
	cout << this->_name << " has " << _healthPoints << " hp left." << endl;
}