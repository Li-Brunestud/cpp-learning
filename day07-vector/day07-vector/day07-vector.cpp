#include <iostream>
#include <vector>
#include <algorithm>
int findMax(const std::vector<int>& numbers)
{
    int max = numbers[0];
    for (const int& value : numbers)
    {
        if (value > max)
        {
            max = value;
        }
    }
    return max;
}
int findMin(const std::vector<int>& numbers)
{
    int min = numbers[0];
    for (const int& value : numbers)
    {
        if (value < min)
        {
            min = value;
        }
    }
    return min;
}
bool contains(const std::vector<int>& numbers, int target)
{
    for (const int& value : numbers)
    {
        if (value == target)
        {
            return true;
        }
    }
    return false;
}
void deleteBelow(std::vector<int>& numbers, int target)
{
    int i = 0;
    while (i < numbers.size())
    {
        if (numbers[i] < target)
        {
            numbers.erase(numbers.begin() + i);
        }
        else
        {
            i++;
        }
    }
}

int main()
{
    //std::vector<int> numbers = { 10, 20, 30, 40, 50 };
    //int target = 40;
    //auto it = std::find(numbers.begin(), numbers.end(), target);
    //if (it != numbers.end())
    //{
    //    std::cout << it - numbers.begin();
    //}
    //else
    //{
    //    std::cout << "Not found";
    //}
    std::vector<int> numbers = { 5, 2, 8, 5, 1, 5, 3 };
    std::cout << "Count of 5: ";
    std::cout << std::count(numbers.begin(), numbers.end(), 5) << std::endl;
    std::sort(numbers.begin(), numbers.end());
    for (const auto& value : numbers)
    {
        std::cout << value << " ";
    }
    std::cout << std::endl;
    std::reverse(numbers.begin(), numbers.end());
    for (const auto& value : numbers)
    {
        std::cout << value << " ";
    }

    return 0;
}
