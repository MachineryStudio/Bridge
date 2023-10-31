/*
Program to save your valuable information.
*/
#include <iostream>
#include <string>

using namespace std;

// Named constants

const double TRM = 0.78;

int main ()

{

// Declare variables

int age ;
double American_Dollar_money, Canadian_Dollar_money;
string name;

cout <<"PLease introduce your age:" << endl;
cin >> age;
cout << " How much American Dollars do you own? " << endl;
cin >> American_Dollar_money;

Canadian_Dollar_money = American_Dollar_money/TRM

cout <<"What is your name:" << endl;
cin >> name;

cout << "your age is:" << age << " The amount of Canadian Money is : and " << Canadian_Dollar_money << " your name is:" << name << endl;

return 0;
}
