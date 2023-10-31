// This program find the absolute value of an number.
#include <iostream>

using namespace std;

int main()

{


    int number;

    cout << "Please enter a integer number ";
    cin >> number;


    if (number < 0)
        cout << "the absolute value of the number is :" << number * -1 << "and"<< number << endl;

    else
         cout << "the absolute value of the number is :"<< number << endl;

    return 0;
}
