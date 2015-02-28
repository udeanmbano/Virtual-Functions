/*
Student Name - Nadine
Student Surname - Kaja
Student Number- MGI2011-1221
Question 1
Purpose:A base class (parent
class) named Student that contains the identification string “Student” along with a
virtual printOutput() function that displays the string. The derived classes (child
class) Fulltime and PartTime each contain a string identifying the type of Student.
The function printOutput() overrides printOutput() in the base class. It outputs
the string “This person is a” and calls the base class function printOutput().
Date:06/03/2015
*/
#include "Student.h"
#ifndef PartTime_HEADER
#define PartTime_HEADER


class PartTime : public Student
{
public:
	void print();
	PartTime(string n = "", string p = "");
private:
	string part;
};
void PartTime::print()
{
	Student::print();
	cout << "The person is a " << part << endl;
}
PartTime::PartTime(string n, string p) :Student(n)
{
	Student::Student(n);
	part = p;
}
#endif