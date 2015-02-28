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
#ifndef FullTime_HEADER
#define FullTime_HEADER



class Fulltime : public Student
{
public:
	void print();
	Fulltime(string n = "", string f = "");
private:
	string full;
};
void Fulltime::print()
{
    Student::print();
	cout << "The person is a " << full << endl;
}
Fulltime::Fulltime(string n, string f):Student(n)
{
	
	full = f;
}
#endif