#include <iostream>
//指针自己也是变量，他也有自己的地址和大小
void doubleValue(int* ptr)
{
    if (ptr == nullptr)
    {
        return;
    }
    else
    {
        *ptr *= 2;
    }
}   
void setFirstToZero(int* arr)
{
	if (arr == nullptr) {
		return;
	}
	arr[0] = 0;
}
void doubleAll(int* arr, int size)
{
    if (arr == nullptr)
    {
        return;
    }
    for (int i = 0; i < size; i++)
    {
        *(arr + i) *= 2;
    }
}
int findMax(const int* arr, int size)
{
    if (arr == nullptr)
    {
        return 0;
    }
    int max = *arr;
    for (int i = 1; i < size; i++)
    {
        if (*(arr + i) > max)
        {
            max = *(arr + i);
        }
    }
    return max;
}
void swapValues(int* a, int* b)
{
	if (a == nullptr || b == nullptr)
	{
		return;
	}
	int temp = *a;
	*a = *b;
	*b = temp;
}
int countGreaterThan(const int* arr, int size, int target)
{
    if (arr == nullptr)
    {
        return 0;
    }
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (*(arr + i) > target)
        {
            count++;
        }
    }
    return count;
}
int main()
{
    int numbers[6] = { 3, 8, 1, 10, 6, 12 };
    std::cout << countGreaterThan(numbers, 6, 5);
    return 0;
}
