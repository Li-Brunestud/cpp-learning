//#include <string>
#include <iostream>

int main()
{
	//double price = 19.9;
	//int quanty = 3;
	//double value = price * quanty;
	//const double rate = 0.13;
	//double rate_value = value * rate;
	//double total = rate_value + value;
	//std::cout << "Price: " << price << "\n";
	//std::cout << "Quantity: " << quanty << "\n";
	//std::cout << "Total: " << value << "\n";
	//std::cout << "Tax:" << rate_value << "\n";
	//std::cout << "Final Price" << total << "\n";
	//int cpp, math, english;
	//std::cout << "C++: ";
	//std::cin >> cpp;
	//std::cout << "\nMath: ";
	//std::cin >> math;
	//std::cout << "\nEnglish: ";
	//std::cin >> english;
	//int totalScore = cpp + math + english;
	//const int subjectCount = 3;
	//double average = static_cast<double>(totalScore) / subjectCount;
	//std::cout << "\n\nTotal: " << totalScore << "\n";
	//std::cout << "Average: " << average;
	//double distance, fuelConsumption, fuelPrice;
	//int peopleNumber;
	//std::cout << "Please enter travel distance(km): ";
	//std::cin >> distance;
	//std::cout << "Please enter fuel consumption(L/100km): ";
	//std::cin >> fuelConsumption;
	//std::cout << "Please enter price(yuan/L): ";
	//std::cin >> fuelPrice;
	//std::cout << "Please enter number of people: ";
	//std::cin >> peopleNumber;
	//double fuelUsed = distance / 100 * fuelConsumption;
	//double totalCost = fuelUsed * fuelPrice;
	//double costPerPerson = totalCost / peopleNumber;
	//std::cout << "Fuel used: " << fuelUsed << " L";
	//std::cout << "\nTotal cost: " << totalCost << " yuan";
	//std::cout << "\nCost per person: " << costPerPerson << " yuan";
	//double temperature;
	//std::cout << "Please enter temperature: ";
	//std::cin >> temperature;
	//bool isHot = temperature >= 30;
	//if (isHot)
	//{
	//	std::cout << "It's hot.";
	//}
	//else
	//{
	//	std::cout << "It's not hot.";
	//}
	//double score;
	//std::cout << "Please enter your score: ";
	//std::cin >> score;
	//if (score >= 90)
	//{
	//	std::cout << "A";
	//}
	//else if (score >= 80)
	//{
	//	std::cout << "B";
	//}
	//else if (score >= 70)
	//{
	//	std::cout << "C";
	//}
	//else if (score >= 60)
	//{
	//	std::cout << "D";
	//}
	//else
	//{
	//	std::cout << "F";
	//}
	//std::cout << "Please enter your age:";
	//int age;
	//std::cin >> age;
	//std::cout << "Do you have a student ID?(1 = yes, 0 = no) ";
	//bool hasStudentId;
	//std::cin >> hasStudentId;
	//if (age >= 18 && age <= 25 && hasStudentId)
	//{
	//	std::cout << "Eligible";
	//}
	//else
	//{
	//	std::cout << "Not eligible";
	//}
	//std::cout << "Please enter your age: ";
	//int age;
	//std::cin >> age;
	//std::cout << "Are you a member?(1=yes, 0=no) ";
	//bool isMember;
	//std::cin >> isMember;
	//if (age <= 12 || age >= 65 || isMember)
	//{
	//	std::cout << "Discount";
	//}
	//else
	//{
	//	std::cout << "Regular price";
	//}
	//if (!isMember)
	//{
	//	std::cout << "\nYou can join our membership";
	//}
	//std::cout << "Please enter battery percentage";
	//double battery;
	//bool isCharging;
	//std::cin >> battery;
	//std::cout << "Please enter charging situation(1=yes, 0=no) ";
	//std::cin >> isCharging;
	//if (battery < 20 && isCharging)
	//{
	//	std::cout << "Low battery, charging";
	//}
	//else if (battery < 20 && !isCharging)
	//{
	//	std::cout << "Warning: low battery";
	//}
	//else
	//{
	//	std::cout << "Battery OK";
	//}
	//if (battery < 20)
	//{
	//	if (isCharging)
	//	{
	//		std::cout << "Low battery, charging";
	//	}
	//	else
	//	{
	//		std::cout << "Warning: low battery";
	//	}
	//}
	//else
	//{
	//	std::cout << "Battery OK";
	//}
	double battery;
	bool emergencyStop, obstacleDected;
	std::cout << "emergencyStop: ";
	std::cin >> emergencyStop;
	std::cout << "battery: ";
	std::cin >> battery;
	std::cout << "obstacleDected: ";
	std::cin >> obstacleDected;
	if (emergencyStop)
	{
		std::cout << "EMERGENCY STOP";
	}
	else if (battery < 20)
	{
		std::cout << "Low battery";
	}
	else if (obstacleDected)
	{
		std::cout << "Obstacle detected";
	}
	else
	{
		std::cout << "Robot can move";
	}
}

