//////////////
//
//CS172--Assignment #4
//EX04_03
//Exercise 11.5: Find_the_Smallest_Element
//
//////////////

#include <iostream>
#include <string>

using namespace std;

int smallestNumber(int *array, int size);

int main()
{
	const int size = 8;
	int array[size];
	for (int i = 0; i < size; i++)
	{
		cout << "Please enter a number: ";
		cin >> array[i];
	}

	cout << "The minimum value is: " << smallestNumber(array, size) << endl;
}

int smallestNumber(int *array, int size)
{
	int* minPtr = array;
	for (int i = 0; i < size; i++)
	{
		if (*(array + i) < *minPtr)
			minPtr = array + i;
	}

	return *minPtr;
}
