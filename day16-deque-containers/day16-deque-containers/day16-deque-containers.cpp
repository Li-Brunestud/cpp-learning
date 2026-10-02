#include <iostream>
#include <deque>
#include <string>
#include <vector>
int binarySearch(const std::vector<int>& nums, int target)
{
	int left = 0;
	int right = nums.size() - 1;
	while (left <= right)
	{
		int mid = left + (right - left) / 2;
		if (nums[mid] == target)
		{
			return mid;
		}
		else if (nums[mid] < target)
		{
			left = mid + 1;
		}
		else
		{
			right = mid - 1;
		}
	}
	return -1;
}

int main()
{
	//std::deque<std::string> history;
	//history.push_back("Page 1");
	//history.push_back("Page 2");
	//history.push_front("Home");
	//std::cout << "Front: " << history.front() << std::endl;
	//std::cout << "Back: " << history.back() << std::endl;
	std::vector<int> nums = { 2, 5, 8, 12, 16, 23, 38, 56, 72, 91 };

	std::cout << binarySearch(nums, 56) << std::endl;
	std::cout << binarySearch(nums, 100) << std::endl;

    return 0;
}

