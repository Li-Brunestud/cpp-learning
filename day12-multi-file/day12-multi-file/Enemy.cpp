#include "Enemy.h"

Enemy::Enemy(std::string type, int hp) : type(type), hp(hp)
{
}
std::string Enemy::getType() const
{
	return type;
}
int Enemy::getHp() const
{
	return hp;
}
void Enemy::takeDamage(int damage)
{
	hp -= damage;
}