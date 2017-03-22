//////////////
//
//CS172--Assignment #4
//EX04_02
//Exercise 11.3: Increase_Array_Size
//
//////////////

#include <iostream>

using namespace std;

int* doubleCapacity(const int * list, int size);

int main()
{
	int size, *list, *newList;
	cout << "Enter the size of the array: ";
	cin >> size;

	list = new int[size];
	int nums;
	cout << "Please enter values into the array: ";
	for (int i = 0; i < size; i++)
	{
		cin >> nums;
		*(list + i) = nums;
	}

	int increaseArray = size * 2;
	newList = doubleCapacity(list, increaseArray);
	cout << "Please enter new values into the array: ";
	for (int i = 0; i < size; i++)
	{
		cin >> nums;
		*(list + i) = nums;
	}
}

int* doubleCapacity(const int * list, int size)
{
	int *p = new int[size * 2];
	for (int i = 0; i < size; i++)
	{
		p[i] = list[i];
	}
	return p;
}