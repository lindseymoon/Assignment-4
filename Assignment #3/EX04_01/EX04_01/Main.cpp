//////////////
//
//CS172--Assignment #4
//EX04_01
//Exercise 11.1: Analyze_Input
//
//////////////

#include <iostream>
using namespace std;
int main()
{
	int ArraySize = 0;
	cout << "Please enter how large you want the array to be: ";
	cin >> ArraySize;
	int * numbers = new int[ArraySize];
	cout << "Enter " << ArraySize << " numbers: " << endl;
	for (int i = 0; i < ArraySize; i++)
	{
		cin >> numbers[i];
	}
	double avg;
	double sum = 0;
	for (int i = 0; i < ArraySize; i++)
	{
		sum += numbers[i];
	}
	avg = sum / ArraySize;
	double aboveAvg = 0;
	for (int i = 0; i < ArraySize; i++)
	{
		if (numbers[i] > avg)
		{
			aboveAvg++;
		}
	}

	cout << "The average is " << avg << endl;
	cout << "There are " << aboveAvg << " numbers above the aveage." << endl;
}