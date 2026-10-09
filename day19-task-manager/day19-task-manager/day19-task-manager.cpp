#include <iostream>
#include <queue>
#include <unordered_map>
#include <string>

struct Task
{
    int id;
    std::string description;
};
void addTask(
    std::queue<Task>& taskQueue,
    std::unordered_map<int, std::string>& taskStatus,
    const Task& task
)
{
	taskQueue.push(task);
	taskStatus[task.id] = "等待中";
}
void processNextTask(
    std::queue<Task>& taskQueue,
    std::unordered_map<int, std::string>& taskStatus)
{
	if (taskQueue.empty())	
	{
		std::cout << "没有待处理任务" << std::endl;
		return;
	}
	Task currentTask = taskQueue.front();
	std::cout << "正在处理任务: " << currentTask.id << std::endl;
	taskQueue.pop();
	taskStatus[currentTask.id] = "处理中";
	std::cout << currentTask.description << std::endl;
}
void getTaskStatus(
	const std::unordered_map<int, std::string>& taskStatus,
	int taskId)
{
	auto it = taskStatus.find(taskId);
	if (it != taskStatus.end())
	{
		std::cout << "任务 " << taskId << " 的状态是: " << it->second << std::endl;
	}
	else
	{
		std::cout << "任务 " << taskId << " 不存在" << std::endl;
	}
}
int main()
{
    std::queue<Task> taskQueue;
    std::unordered_map<int, std::string> taskStatus;
	Task task1{ 1001, "Analyze report1.pdf" };
	Task task2{ 1002, "Analyze report2.pdf" };
	Task task3{ 1003, "Analyze report3.pdf" };
	addTask(taskQueue, taskStatus, task1);
	addTask(taskQueue, taskStatus, task2);
	addTask(taskQueue, taskStatus, task3);
	processNextTask(taskQueue, taskStatus);
	processNextTask(taskQueue, taskStatus);
	processNextTask(taskQueue, taskStatus);
	processNextTask(taskQueue, taskStatus);
	getTaskStatus(taskStatus, 1001);
	getTaskStatus(taskStatus, 1002);
	getTaskStatus(taskStatus, 9999);

    return 0;
}