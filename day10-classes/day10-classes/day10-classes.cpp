#include <iostream>

class Rectangle
{
private:
    double width;
    double height;
public:
	Rectangle(double width, double height) : width(width), height(height)
    {
    }
    double getArea()
    {
        return width * height;
    }
};
class Player
{
private:
    std::string name;
    int hp;
public:
    Player(std::string name, int hp) : name(name), hp(hp)
    {
    }
    void takeDamage(int damage)
    {
        hp -= damage;
        if (hp < 0)
            hp = 0;
    }
    int getHp() const
    {
        return hp;
    }

};
class BankAccount
{
private:
    std::string owner;
    double balance;
public:
    BankAccount(std::string owner, double balance) : owner(owner), balance(balance)
    {
    }
    void deposit(double amount)
    {
		if (amount > 0)
			balance += amount;
    }
    void withdraw(double amount)
    {
        if (amount > 0 && amount <= balance)
			balance -= amount;
    }
    double getBalance() const
    {
        return balance;
    }
    std::string getOwner() const
    {
		return owner;
    }
};
void printPlayerHp(const Player& player)
{
    std::cout << "Player's HP: " << player.getHp() << std::endl;
}
int main()
{
    BankAccount account("Li", 1000.0);
    account.deposit(500);
    account.withdraw(300);
	std::cout << account.getOwner() << ": $" << account.getBalance() << std::endl;
    return 0;
}