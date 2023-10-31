// ConsoleDataBasecpp.cpp : Defines the entry point for the console application.


#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>
#include <cstdio>


using namespace std;

void input();
void search();
void edit();
void displayAll();
void fired();
int main()
{
	system("cls");
	cout << ("***************WELCOME TO POLYMORPHIC STUDIOS 2018 CONSOLE DATABASE******") << endl;
	system("color 0f");
	cout << "PLEASE ENTER A CHOISE" << endl;
	cout << endl;
	cout << "1.IF YOU WANT TO INSERT THE INFORMATION FROM A NEW EMPLOYEE" << endl;
	cout << endl;
	cout << "2.SEARCH AND EMPLOYEE BY LOOKING ON HIS OR HER ID" << endl;
	cout << endl;
	cout << "3.EDIT AN EXISTING EMPLOYEE'S INFORMATION" << endl;
	cout << endl;
	cout << "4.DISPLAY ALL THE COMPANY POLYMORPHIC'S EMPLOYEES" << endl;
	cout << endl;
	cout << "5.DELETE FROM THE DATA BASE AN EMPLOYEE" << endl;
	cout << endl;
	cout << "6.EXIT" << endl;

	int choice;
	cin >> choice;

	switch (choice) {
	case 1:
		input();
		break;
	case 2:
		search();
		break;
	case 3:
		edit();
		break;
	case 4:
		displayAll();
		break;
	case 5:
		fired();
		break;
	}
}
void fired()
{
	system("cls");
	system("cls");
	string fname;
	string mname;
	string lname;
	string fileName;
	string decision;
	double salary;
	int empId;
	int age;
	int thrw;


	cout << "Enter Employee ID Number:";
	cin >> empId;
	string empId2 = to_string(empId);
	empId2.append(".txt");
	ifstream employee(empId2);
	while (employee >> fname >> mname >> lname >> thrw >> salary >> age) {
		int mnameLength = mname.size();
		int lnameLength = lname.size();
		int fnameLength = fname.size();
		int lengthTotal = fnameLength + lnameLength + mnameLength;

		string answer;
		cout << "Is this the correct employee?[y/n]" << endl;
		cout << fname << ' ' << mname << ' ' << lname << endl;
		cin >> answer;

		if (answer == "y") {
			system("cls");
			cout << "Name";
			for (int y = 1; y < lengthTotal; y++) {
				cout << " ";
			}
			cout << "Age";
			for (int z = 1; z < 2; z++) {
				cout << " ";
			}
			cout << "Salary";
			cout << "ID#" << endl;
			for (int x = 1; x < lengthTotal + 20; x++) {
				cout << "-";
			}
			cout << ' ' << endl;
			cout << fname << ' ' << mname << ' ' << lname << ' ' << age << ' ' << "$" << salary << ' ' << empId << endl;
			cout << "Do you wish to delete this employee from the database?" << endl;
			cin >> decision;

			if (decision == "y") {
				string empId3 = empId2.replace(empId2.begin(), empId2.end(), " ");
				employee.close();
			}
		}

		system("pause");
		main();
	}
}

//creating a database for an employee
void input()
{
	system("cls");
	string fname;
	string mname;
	string lname;
	string fileName;
	double salary;
	int empId;
	int age;

	cout << "Input first name:"<<endl;
	cin >> fname;
	cout << "Input middle name:"<<endl;
	cin >> mname;
	cout << "Input last name:"<<endl;
	cin >> lname;
	cout << "Input employee age:"<<endl;
	cin >> age;
	cout << "Input employee salary:"<<endl;
	cin >> salary;
	cout << "Input Id number:"<<endl;
	cin >> empId;

	//creating a file
	string empId2 = to_string(empId);
	empId2.append(".txt");

	ofstream newemployee(empId2);
	newemployee << fname << ' ' << mname << ' ' << lname << ' ' << empId << ' ' << salary << ' ' << age << endl;
	newemployee.close();
	ofstream dir("directory.txt", ios::app);
	dir << fname << ' ' << mname << ' ' << lname << ' ' << empId << ' ' << salary << ' ' << age << endl;
	dir.close();
	main();
}
void search()
{
	system("cls");
	string fname;
	string mname;
	string lname;
	string fileName;
	double salary;
	int empId;
	int thrw;
	int age;
	cout << "Enter emplyee ID number:";
	cin >> empId;
	string empId2 = to_string(empId);
	empId2.append(".txt");

	ifstream employee(empId2);
	while (employee >> fname >> mname >> lname >> thrw >> salary >> age) {
		int mnameLength = mname.size();
		int lnameLength = lname.size();
		int fnameLength = fname.size();
		int lengthTotal = fnameLength + lnameLength + mnameLength;

		string answer;
		cout << "Is this the correct employee?[y/n]" << endl;
		cout << fname << ' ' << mname << ' ' << lname << endl;
		cin >> answer;

		if (answer == "y") {
			system("cls");
			cout << "Name";
			for (int y = 1; y<lengthTotal; y++) {
				cout << " ";
			}
			cout << "Age";
			for (int z = 1; z<2; z++) {
				cout << " ";
			}
			cout << "Salary";
			cout << "ID#" << endl;
			for (int x = 1; x<lengthTotal + 20; x++) {
				cout << "-";
			}
			cout << ' ' << endl;
			cout << fname << ' ' << mname << ' ' << lname << ' ' << age << ' ' << "$" << salary << ' ' << empId << endl;
		}

	}
	system("pause");
	main();
}

void edit()
{
	system("cls");
	string fname;
	string mname;
	string lname;
	string newfname;
	string newmname;
	string newlname;
	string decision;
	int empId;
	int age;
	int newage;
	int thrw;
	double salary;
	double newsalary;
	cout << "Enter the Employee Id of the Employee whose data you wish to edit:";
	cin >> empId;
	string empId2 = to_string(empId);
	empId2.append(".txt");
	ifstream employee(empId2);
	while (employee >> fname >> mname >> lname >> thrw >> salary >> age) {
		cout << "Is this the Employee that you wish to edit?[y/n]" << endl;
		cout << fname << ' ' << mname << ' ' << lname << endl;
		cin >> decision;
		if (decision == "y") {
			system("cls");
			cout << "Current information:" << endl;

			int mnameLength = mname.size();
			int fnameLength = fname.size();
			int lnameLength = lname.size();
			int lengthTotal = lnameLength + fnameLength + mnameLength;
			cout << "Name";
			for (int y = 1; y<lengthTotal; y++) {
				cout << " ";
			}
			cout << "Age";
			for (int z = 1; z<2; z++) {
				cout << " ";
			}
			cout << "Salary";
			cout << "ID#" << endl;
			for (int x = 1; x<lengthTotal + 17; x++) {
				cout << "-";
			}
			cout << ' ' << endl;


			cout << fname << ' ' << mname << ' ' << lname << ' ' << age << ' ' << salary << ' ' << empId << endl;
			cout << "Enter new first name:";
			cin >> newfname;
			cout << "Enter new middle name:";
			cin >> newmname;
			cout << "Enter new last name:";
			cin >> newlname;
			cout << "Enter new age:";
			cin >> newage;
			cout << "Enter new salary";
			cin >> newsalary;
		}
		if (decision == "n") {
			main();
		}
		employee.close();
		ofstream employee2(empId2);
		employee2 << newfname << ' ' << newmname << ' ' << newlname << ' ' << empId << ' ' << newsalary << ' ' << newage << endl;
		employee2.close();
	}

	main();
}
void displayAll()
{
	system("cls");
	string fname;
	string mname;
	string lname;
	int age;
	double salary;
	int empId;

	cout << "Entire Employee database" << endl;
	cout << "------------------------" << endl;
	ifstream dir("directory.txt");
	while (dir >> fname >> mname >> lname >> age >> empId >> salary) {
		cout << fname << ' ' << mname << ' ' << lname << ' ' << age << ' ' << salary << empId << endl;
	}
	system("pause");
	main();
}