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
#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
#ifndef Student_HEADER
#define Student_HEADER

class Student
{
public:
	virtual void print(); //virtual function
	Student(string i ="");
private:
	string identification;
};
void Student::print()
{
	cout << "Name   " << identification<< endl;
}
Student::Student(string n)
{
	identification = n;
}

#endif