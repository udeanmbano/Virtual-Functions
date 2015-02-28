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
#include "Student.h"
#include "FullTime.h"
#include "PartTime.h"

using namespace std;
void printOutput(Student *z);
int main()
{
	char option=' ';
	string option2 ="";
	string name= " ";

	cout << "Enter the student full name \n";
	getline(cin, name);
	cout << "Enter type of student : f or p \n";
	cin >> option;
	
	do
	{


		Student stud(name); //Line 3
		Fulltime full(name, "Fulltime"); //Line 3
		PartTime  part(name, "PartTime"); //Line 3
		Student *studentTypeList[3] = { &stud, &full, &part };

		if (option == 'f' || option == 'F')
		{
			cout << endl; //Line 8
			printOutput(studentTypeList[1]);
			cout << endl;
		}
		else if (option == 'p' ||option == 'P')
		{
			cout << endl; //Line 8
			printOutput(studentTypeList[2]);
			cout << endl; //Line 8
		}
		cout << "Do you wish to continue y or n" << endl;
		cin >> option2;
		if (option2 == "n")
		{
			cout << endl;
			cout << "***********Exiting the program***************"<<endl;
			system("pause");
		}
		else if(option2 == "y")

		{
			cin.ignore();
			cout << "Enter the student full name \n";
			getline(cin, name);
			cout << "Enter type of student : f or p \n";
			cin >> option;
		}
		

	} while (option2!="n" );

	
	return 0;

}
void printOutput(Student *z)
{
	z->print();
}