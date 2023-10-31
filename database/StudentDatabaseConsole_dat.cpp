// Database_Studentcpp.cpp : Defines the entry point for the console application.
//


#include <iostream>
using namespace std;
#include<conio.h>
#include<stdio.h>

struct student
{
	char name[25];
	char adress[50];

	int rollno;
	char classs[20];
	int age;
	long double tel;
	int marks;
	char grade[4];
};
int main()
{


	char dow;
	int arr = 0;
	do {

		student stud[10];

		cout << "WELCOME TO POLYSTUDIOS 2018 DATA BASE OF WORDS" << endl;
		cout << " Press 1 Enter new family word \n";
		cout << " Press 2 Delet family word \n";
		cout << " Press 3 Update family word \n";
		cout << " Press 4 Search family word \n";
		cout << " Press 5 Display family words \n";
		cout << "\n \t Select Option::";


		int rolchek = 0;

		int sw;
		cin >> sw;


		switch (sw)
		{

		case 1:


			cout << "\n Enter the Data of the student no " << arr + 1 << " is :\n";

			cout << "\t Enter the Roll No = ";
			int rol2;
			int rol;


			cin >> rol;


			for (int j = 0; j <= arr; j++)
			{


				rol2 = rol;
				if (rol2 == stud[j].rollno)
				{
					rolchek = 1;
				}
			}
			if (rolchek != 1) {
				stud[arr].rollno = rol;


				cout << "\t Enter the Name =  ";
				cin >> stud[arr].name;

				cout << "\t Enter the Adress =  ";
				cin >> stud[arr].adress;

				cout << "\t Enter the Telephone no =  ";
				cin >> stud[arr].tel;

				cout << "\t Enter the Class = ";
				cin >> stud[arr].classs;

				cout << "\t Enter the Markes =  ";
				cin >> stud[arr].marks;

				cout << "\t Enter the Grade = ";
				cin >> stud[arr].grade;

				cout << "\t Enter the Age = ";
				cin >> stud[arr].age;
				arr = arr + 1;
			}
			else
			{
				cout << "This Record Already Entered \n";
			}


			break;

		case 2:

			cout << "\n Enter the Roll no of the student To Delete ::\n";



			cin >> rol;


			for (int j = 0; j <= arr; j++)
			{


				rol2 = rol;
				if (rol2 == stud[j].rollno)
				{


					stud[j].rollno = 'd';
					cout << "\t Record Deleted";
				}
			}

			break;

		case 3:
			cout << "\n Enter the Roll no of the student To Update ::\n";



			cin >> rol;


			for (int j = 0; j <= arr; j++)
			{


				rol2 = rol;
				if (rol2 == stud[j].rollno)
				{
					cout << "\t Rollno =  ";
					cout << stud[j].rollno;
					cout << "\t Name =  ";
					cout << stud[j].name;
					cout << "\t  Adress =  ";
					cout << stud[j].adress;
					cout << "\t  Telephone no =  ";
					cout << stud[j].tel;
					cout << "\t Class = ";
					cout << stud[j].classs;
					cout << "\t  Markes =  ";
					cout << stud[j].marks;
					cout << "\t Grade = ";
					cout << stud[j].grade;


					cout << "\n\t ReEnter Data  ";

					cout << "\n\t Enter the Name =  ";
					cin >> stud[j].name;

					cout << "\n\t Enter the Adress =  ";
					cin >> stud[j].adress;

					cout << "\n\t Enter the Telephone no =  ";
					cin >> stud[j].tel;

					cout << "\n\t Enter the Class = ";
					cin >> stud[j].classs;

					cout << "\n\t Enter the Markes =  ";
					cin >> stud[j].marks;

					cout << "\n\t Enter the Grade = ";
					cin >> stud[j].grade;

					cout << "\n\t Enter the Age = ";
					cin >> stud[j].age;

				}
			}

			break;

		case 4:


			cout << "\n Enter the Roll no of the student To Search ::";



			cin >> rol;


			for (int j = 0; j <= arr; j++)
			{


				rol2 = rol;
				if (rol2 == stud[j].rollno)
				{


					cout << "\n \t Rollno =  ";
					cout << stud[j].rollno;
					cout << "\n \t Name =  ";
					cout << stud[j].name;
					cout << "\n \t  Adress =  ";
					cout << stud[j].adress;
					cout << "\n \t  Telephone no =  ";
					cout << stud[j].tel;
					cout << "\n \t Class = ";
					cout << stud[j].classs;
					cout << "\n \t  Markes =  ";
					cout << stud[j].marks;
					cout << "\n \t Grade = ";
					cout << stud[j].grade;

				}
			}

			break;

		case 5:
			cout << "\n____________________________________________________________________________\n";
			for (int i = 0; i<1; i++)
			{

				cout << "NOUN1 ||";
				cout << " NOUN2  ||";
				cout << " ADJECTIVE1  || ";
				cout << "ADJECTIVE2 ||";
				cout << " VERB1||";
				cout << " VERB2 ||";
				cout << "  VERB3 ||";
				for (int k = 0; k<arr; k++)
				{
					if (stud[k].rollno != 'd')
					{


						cout << "\n";
						cout << " ";
						cout << stud[k].rollno;
						cout << "    || ";
						cout << stud[k].name;
						cout << " || ";
						cout << stud[k].adress;
						cout << "   ||   ";
						cout << stud[k].tel;
						cout << "   ||   ";
						cout << stud[k].classs;
						cout << "  ||   ";
						cout << stud[k].marks;
						cout << "    ||  ";
						cout << stud[k].grade;

					}




				}
			}
			cout << "\n____________________________________________________________________________";

			break;


		default:
			cout << "\t Worng option Selected ";
			break;

		}




		cout << "\n \n \t Do You want to Continue Again [Y/N]";
		cin >> dow;

	} while (dow == 'y');


	return 0;
	_getch();

}
