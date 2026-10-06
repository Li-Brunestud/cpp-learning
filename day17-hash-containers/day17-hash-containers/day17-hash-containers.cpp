#include <iostream>
#include <string>
#include <unordered_map>
#include <unordered_set>

std::vector<int> twoSum(const std::vector<int>& nums, int target)
{
    std::unordered_map<int, int> numMap;
    for (int i = 0; i < nums.size(); ++i)
    {
        int complement = target - nums[i];
        if (numMap.find(complement) != numMap.end())
        {
            return {numMap[complement], i};
        }
        numMap[nums[i]] = i;
    }
    return {};
}


int main()
{
    std::unordered_map<std::string, int> scores;
    scores["Li"] = 92;
    scores["Alice"] = 85;
    scores["Bob"] = 77;
    
	//auto it = scores.find("Tom");
 //   if (it != scores.end())
 //   {
	//	std::cout << "Found Tom's score: " << it->second << std::endl;

	//}
 //   else
 //   {
 //       std::cout << "Tom's score not found." << std::endl;
 //   }

    std::vector<int> nums = { 3, 2, 4 };
    auto result = twoSum(nums, 6);
    for (int i : result)
    {
        std::cout << i << " ";
    }
    std::cout << std::endl;
    std::vector<std::string> words =
    {
        "apple",
        "banana",
        "apple",
        "orange",
        "banana",
        "apple"
    };
    std::unordered_map<std::string, int> counts;
    for (const auto& word : words)
    {
        counts[word]++;
    }
    for (const auto& pair : counts)
    {
		std::cout << pair.first
            << ": "
            << pair.second
            << std::endl;
    }

    return 0;
}
