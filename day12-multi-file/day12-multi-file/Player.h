#pragma once //此头文件在编译过程只处理一次
#include <string>

class Player
{
private:
	std::string name;
	int hp;
public:
	Player(std::string, int hp); //声明在源文件里
	std::string getName() const;
	int getHp() const;
	void takeDamage(int damage);
};
