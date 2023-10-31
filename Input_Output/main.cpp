#include <iostream>
#include <string>

// Imput and output/

using namespace std;

int main()
{

    cout << "Enter 4 characters" << endl;

    char ch;

    cin.get(ch); // Calling the firts time a function
    cout << "The first character is :" <<ch<< endl;

    cin.get(ch); // Callling second time a function
    cout << " The second character is :" <<ch<< endl;

    cin.putback(ch); //calling putback or do not change the character
    cin.get(ch); // calling third time a function
    cout << " The third character is :" <<ch<< endl;

    ch = cin.peek (); // peek means quickly eye. Stored the next character without removing it.
    cout << " The forth character is :" <<ch<< endl;

    cin.get(ch); // Callling third time a function
    cout << " The fith character is :" <<ch<< endl;

    return 0;
}
