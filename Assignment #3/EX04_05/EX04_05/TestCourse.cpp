//////////////
//
//CS172--Assignment #4
//EX04_05
//Exercise 11.13: The_Course_Class
//
//////////////

#include <iostream>
#include "Course.h"

using namespace std;

int main()
{
	Course course1("Data Structures", 10);
	Course course2("Database Systems", 15);

	course1.addStudent("Peter Jones");
	course1.addStudent("Brian Smith");
	course1.addStudent("Anne kennedy");

	course2.addStudent("Peter Jones");
	course2.addStudent("Steve Smith");

	cout << "Number of students in course1: " << course1.getNumberOfStudents() << "/n";
	const string* students = course1.getStudents();
	for (int i = 0; i < course1.getNumberOfStudents(); i++)
		cout << students[i] << ", ";

	cout << "\nNumber of students in course2: " << course2.getNumberOfStudents() << "\n";
	students = course2.getStudents();
	for (int i = 0; i < course2.getNumberOfStudents(); i++)
		cout << students[i] << ", ";
	
	course1.dropStudent("Peter Jones");
	cout << " Students remaining in course1: " << course1.getNumberOfStudents() << endl;

	return 0;
}