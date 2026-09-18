#include <iostream>
#include <string>
using namespace std;
int main()
{
	//string password;
	//cout << "Enter password: ";
	//cin >> password;
	//while (password != "123456")
	//{
	//	cout << "Wrong password. Try again: ";
	//	cin >> password;
	//}
	//cout << "Access granted.";
	for (int num = 1; num <= 20; num++)
	{
		if (num % 3 == 0)
		{
			continue;
		}
		cout << num << " ";
	}
}