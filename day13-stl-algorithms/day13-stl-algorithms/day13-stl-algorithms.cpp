#include <iostream>
#include <algorithm>
#include <vector>

class Player
{
private:
	std::string name;
	int hp;
public:
	Player(std::string name, int hp) : name(name), hp(hp)
	{ }
	std::string getName() const { return name; }
	int getHp() const { return hp; }

};

int main()
{
	std::vector<Player> players;
	players.emplace_back("leo", 80);
	players.emplace_back("Li", 120);
	players.emplace_back("Alice", 40);
	players.emplace_back("Bob", 100);
	players.emplace_back("Eve", 20);
	int count = std::count_if(players.begin(), players.end(), 
		[](const Player& player) { return player.getHp() >= 80; });
	std::sort(players.begin(), players.end(), 
		[](const auto& player1, const auto& player2) 
		{ return player1.getHp() > player2.getHp(); });
	players.erase(std::remove_if(players.begin(), players.end(),
		[](const auto& player) { return player.getHp() < 50; }), players.end());
	std::cout << count << std::endl;
	for (const auto& player : players)
	{
		std::cout << player.getName() << ": " << player.getHp() << std::endl;
	}
	return 0;
}
