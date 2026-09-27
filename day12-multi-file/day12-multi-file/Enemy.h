#pragma once
#include <string>

class Enemy
{
private:
	std::string type;
	int hp;
public:
	Enemy(std::string type, int hp); //声明在源文件里
	std::string getType() const;
	int getHp() const;
	void takeDamage(int damage);
};