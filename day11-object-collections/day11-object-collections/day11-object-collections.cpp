#include <iostream>
#include <vector>
class Player
{
private:
    std::string name;
	int hp;
public:
	Player(std::string name, int hp) : name(name), hp(hp) {}
	std::string getName() const 
    { 
        return name; 
    }
    int getHp() const
    {
        return hp;
    }
    void takeDamage(int damage)
    {
		hp -= damage;
    }
};
Player* findPlayer(std::vector<Player>& players, const std::string& targetName)
{
    for (Player& player : players)
    {
        if (player.getName() == targetName)
        {
            return &player;
        }
    }

    return nullptr;
}
int main()
{
    std::vector<Player> players;
    players.emplace_back("Leo", 100);
    players.emplace_back("Li", 80);
    players.emplace_back("Alice", 120);
	std::string targetName = "Li";
    Player* foundPlayer = findPlayer(players, targetName);
    if (foundPlayer != nullptr)
    {
        foundPlayer->takeDamage(10);
    }
    return 0;
}
