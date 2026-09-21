#include <iostream>

int sumArray(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum;
}
int findMax(int arr[], int size)
{
    int maxScore = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > maxScore)
        {
            maxScore = arr[i];
        }
    }
    return maxScore;
}
int findMin(int arr[], int size)
{
    int minScore = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] < minScore)
        {
            minScore = arr[i];
        }
    }
    return minScore;
}
bool contains(int arr[], int size, int target)
{
    bool found = false;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            found = true;
            break;
        }
    }
    return found;
}
double averageArray(const int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    double average = static_cast<double>(sum) / size;
    return average;
}
int countAboveAverage(const int arr[], int size)
{
    double average = averageArray(arr, size);
    int count = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > average)
        {
            count++;
        }
    }

    return count;
}
int main()
{
    int scores[5] = { 90, 85, 76, 100, 88 };

    std::cout << countAboveAverage(scores, 5) << std::endl;
}
