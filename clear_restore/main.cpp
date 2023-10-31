#include <iostream>

using namespace std;

int main()
{

    int a = 33;
    int b = 37;

    cout << "Please digit two numbers " << endl;
    cin  >> a >> b;
    cout << "your first number is :" << a << endl;
    cout << "your second number  is: " << b << endl;

    cin.clear ();
    cin.ignore (200, '\n');

    cout << "You have entered a character, PLease digit two numbers " << endl;

    cin >> a >> b ;
    cout << "your first number is :" << a << endl;
    cout << " your second number is : " << b << endl;


    return 0;
}
