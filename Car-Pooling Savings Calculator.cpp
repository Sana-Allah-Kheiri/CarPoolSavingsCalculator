// Car-Pooling Savings Calculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#define LOG std::cout <<'\n'<<
#define GET std::cin>>

float dailyCost(float miles, float priceOfGasoline, float avgMile, float fee, float tolls) {

	return (tolls + fee + (miles * priceOfGasoline * float(1.00 / avgMile)));
}





int main()
{system("COLOR A1");
	float miles{}, priceOfGasoline{}, avgMile{}, fee{}, tolls{}, totalSave{};
	LOG " ========================================================================================";
	LOG " In this application, we help you find out how much money can be saved by using car pools";
	LOG " ========================================================================================";
	LOG " How many miles do you usually drive every day? ";
	GET miles;
	LOG " How much is the cost of each gallon of gasoline? ";
	GET priceOfGasoline;
	LOG " Enter Average miles per gallon: ";
	GET avgMile;
	LOG " How much is Parking fees per day? ";
	GET fee;
	LOG " How much is Tolls per day? ";
	GET tolls;
	totalSave = dailyCost(miles, priceOfGasoline, avgMile, fee, tolls);
	LOG " If you use car pools you save " <<totalSave<< " per day.";



}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
