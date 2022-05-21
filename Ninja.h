#pragma once 
#include <string>


class Ninja
{
public:
	Ninja(std::string name);
	void loseHealth(int hit);
	int Attack();

private:
	std::string name;
	int health;
protected:
	std::string st;
	int hp;

};
