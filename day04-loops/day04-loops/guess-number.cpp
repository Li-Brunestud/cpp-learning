#include <iostream>
using namespace std;
int main()
{
	//int secretNumber = 7, num;
	//cout << "Guess the number: ";
	//cin >> num;
	//while (true)
	//{
	//	if (num == secretNumber)
	//	{
	//		cout << "Correct!";
	//		break;
	//	}
	//	else if (num > secretNumber)
	//	{
	//		cout << "Too high. Try again: ";
	//	}
	//	else
	//	{
	//		cout << "Too low. Try again: ";
	//	}
	//	cin >> num;
	//}
	//for (int row = 1; row <= 5; row++)
	//{
	//	for (int col = 1; col <= row; col++)
	//	{
	//		int mul = row * col;
	//		cout << col << "*" << row << "=" << mul << " ";
	//	}
	//	cout << endl;
	//}
	for (int num = 1; num <= 100; num++)
	{
		if (num % 3 != 0 || num % 5 != 0)
		{
			continue;
		}
		cout << num << " ";
	}
}