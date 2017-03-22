#include <iostream>
#include "Course.h"

using namespace std;

Course::Course(const string& courseName, int capacity)
{
	numberOfStudents = 0;
	this->courseName = courseName;
	this->capacity = capacity;
	students = new string[capacity];
}

Course::~Course()
{
	delete[] students;
}

const string Course::getCourseName()
{
	return courseName;
}

void Course::addStudent(const string& name)
{
	students[numberOfStudents] = name;
	numberOfStudents++;
}

void Course::dropStudent(const string& name)
{
	for (int i = 0; i < numberOfStudents; i++)
	{
		if (students[i] == name)
			for (int j = i; j < numberOfStudents; j++)
			{
				students[i] = students[j + 1];
			}
		numberOfStudents--;
	}
}

const string* Course::getStudents()
{
	return students;
}

const int Course::getNumberOfStudents()
{
	return numberOfStudents;
}

void Course::clear(Course& courseName)
{
	courseName.students = 0;
	courseName.numberOfStudents = 0;
}

Course::Course(const Course& c)
{
	courseName = c.courseName;
	numberOfStudents = c.numberOfStudents;
	capacity = c.capacity;

	students = new string[capacity];
	for (int i = 0; i < numberOfStudents; i++)
	{
		students[i] = c.students[i];
	}
}

//copies everything from reference class to the class being constructed
void  Course::reallocateStudentArray() //deep copy...copies all the parts of the students list from the old to new class
{
	int expand = capacity > 10;
	capacity / 2;
	capacity;

	string* newStudents = new string[capacity + expand];
	for (int i = 0; i < numberOfStudents; i++)
	{
		newStudents[i] = students[i];
	}
	capacity += expand;
	delete[] students;
	students = newStudents;
}