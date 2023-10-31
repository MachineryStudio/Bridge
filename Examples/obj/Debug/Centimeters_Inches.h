/*
Program to convert feet or inches in centimeters.
*/
#includes <iostream>
#includes <stream>

using namespace std;

// Named constants

const double CENT_INCH = 2.54;
const int INCH_FOOT = 12;

int main ()

[
// Declare variables

int feet, inches;
int Total_inches;
double Centimeter;


cout <<"ENTER A INTEGER FOR FEET "<<;

cin >> feet;

cout << " ENTER A INTEGER FOR INCHES" <<;

cin >> inches;


cout << " the numbers that you entered are " << feet << " for feet : and " << inches << " for inches:" << endl;


Total_inches= INCH_FOOT*12*feet;

cout << "THE TOTAL OF NUMBER OF INCHES= << Total_inches<<;

Centimeter =  CENT_INCH*inches;

cout << " THE TOTAL OF CENTIMETERS ARE: "<< Centimeter<<;endl;

return 0;


