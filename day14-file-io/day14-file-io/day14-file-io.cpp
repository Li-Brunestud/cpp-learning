#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
class Player
{
private:
	std::string name;
	int hp;
public:
	Player(std::string name, int hp) : name(name), hp(hp) {}
	std::string getName() const { return name; }
	int getHp() const { return hp; }
};
std::vector<Player> loadPlayers(const std::string& filename)
{
	std::vector<Player> players;
	std::ifstream inFile(filename);
	if (!inFile.is_open())
	{
		return {};
	}
	std::string name;
	int hp;
	while (inFile >> name >> hp)
	{
		players.emplace_back(name, hp);
	}
	inFile.close();
	return players;
}
void savePlayers(const std::string& filename,
	const std::vector<Player>& players)
{
	std::ofstream outFile(filename);
	if (!outFile)
	{
		std::cout << "Fail to open output file." << std::endl;
		return;
	}
	for (const Player& player : players)
	{
		outFile << player.getName()
			<< " "
			<< player.getHp()
			<< std::endl;
	}
	outFile.close();

}
int main()
{
	std::vector<Player> players = loadPlayers("test.txt");
	std::sort(players.begin(), players.end(), 
		[](const Player& a, const Player& b) { return a.getHp() > b.getHp(); });
	for (const auto& player : players)
	{
		std::cout << player.getName() << " has " << player.getHp() << " HP." << std::endl;
	}
	savePlayers("sorted_players.txt", players);

    return 0;
}
