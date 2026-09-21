#include <iostream>
#include <string>
using namespace std;

int substract(int a, int b)
{
    return a - b;
}
double calculateArea(double a, double b)
{
    return a * b;
}
void printWelcome(string name)
{
    cout << "Welcome, " << name << " !" << endl;
}
bool isAdult(int age)
{
    return age >= 18;
}
string getGrade(int score)
{
    if (score > 100 || score < 0)
        return "Invalid";
    if (score >= 90)
        return "A";
    else if (score >= 80)
        return "B";
    else if (score >= 70)
        return "C";
    else if (score >= 60)
        return "D";
    else
        return "F";
}
bool isPassing(int score)
{
    return score >= 60 && score <= 100;
}
void printResult(int score);
void addTen(int& number)
{
    number += 10;
    cout << "Inside: " << number << endl;
}
void doubleValue(int& number)
{
    number *= 2;
}
void swapNumbers(int& a, int& b)
{
    int temp;
    temp = a, a = b, b = temp;
}
void adjustScore(int& score)
{
    if (score < 0)
        score = 0;
    else if (score > 100)
        score = 100;
    else
        return;
}
int multiply(int a, int b)
{
    return a * b;
}
double multiply(double a, double b)
{
    return a * b;
}
void printMessage(string message = "Hello")
{
    cout << message << endl;
}
int main()
{
    printMessage("Welcome");
    printMessage();
}
void printResult(int score)
{
    if (isPassing(score))
        cout << "Pass" << endl;
    else
        cout << "Fail" << endl;
}
