#include <iostream>
#include <string>
#include <stack>
#include <queue>

int main()
{
    std::queue<char> taskQueue;
	std::stack<char> taskStack;
	taskQueue.push('A');
	taskQueue.push('B');
	taskQueue.push('C');
	std::cout << "Process step: ";
	while (!taskQueue.empty())
	{
		char temp = taskQueue.front();
		std::cout << taskQueue.front();
		taskQueue.pop();
		taskStack.push(temp);
	}
	std::cout << std::endl << "Reverse history: ";
	while (!taskStack.empty())
	{
		std::cout << taskStack.top();
		taskStack.pop();
	}
	return 0;
}