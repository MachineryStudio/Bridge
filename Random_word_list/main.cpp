#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()

{
    string lista;
    int offset;
    string firstword;
    ifstream inputfile;
    char letter;

    inputfile.open("list1.txt");

    cout<<"Enter a consonant or a vowel:\n"<<endl;
    cin>>letter;

    if (inputfile.is_open())
    {
    while (!inputfile.eof())
    {
    getline(inputfile,lista);

    if ((offset = lista.find(letter, 0)) !=string::npos)
    {
        cout <<"The first word to start the game is:\n"<<lista<<endl;
    }
    }
    inputfile.close();
    }
        else
        cout <<"We could not open the file"<<endl;
    return 0;
}

