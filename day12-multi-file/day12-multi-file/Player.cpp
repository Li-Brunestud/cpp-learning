#include "Player.h"

Player::Player(std::string name, int hp) :name(name), hp(hp)
{
}
std::string Player::getName() const
{
	return name;
}
int Player::getHp() const
{
	return hp;
}
void Player::takeDamage(int damage)
{
	hp -= damage;
}