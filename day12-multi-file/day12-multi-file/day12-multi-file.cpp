#include <iostream>
#include "Player.h"
#include "Enemy.h"
int main()
{
    Player p1("li", 100);
    Enemy e1("goblin", 50);
	e1.takeDamage(20);
	p1.takeDamage(30);
    std::cout << e1.getType()
		      << " "
		      << e1.getHp()
		      << std::endl;
    return 0;
}
