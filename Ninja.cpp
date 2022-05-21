#include "Ninja.h"

Ninja::Ninja(std::string name) {
	this->name = name;
	this->health = 100;
	this->hp = 8;
}

void Ninja::loseHealth(int hit) {
	this->health -= hit;
	if (this->health < 0)
	{
		this->health = 0;
	}
}
	int Ninja::Attack() {
		return this->hp;
	}

