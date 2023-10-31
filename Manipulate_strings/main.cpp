#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()

{
    string lastword;
    string firstword;
    ifstream inputfile;
    string lista;
    int counter =0;
    string E;
    string H;
    string level;

    inputfile.open("list1.txt");


    cout<<"Enter the level of difficulty:\n"<<"Push E for easy level or H for hard level:\n"<<endl;
    cin>>E;
    cin>>H;

    switch (level)
    case 'E'
    while (inputfile >>lista)
    {
        if (counter==0)
           {
            firstword =lista;
            lastword =lista;
            counter++;
           }
        else
        { if (lista< firstword)
        firstword = lista;
        cout<<"The first word is:\n"<<firstword<<endl;
        }
    break;

    case 'H'
    while (inputfile >>lista)
    {
        if (counter==0)
           {
            firstword =lista;
            lastword =lista;
            counter++;
           }
        else
         else if (lista>lastword)
        lastword=lista;
        cout<<"First word by alphabet is:\n"<<lastword<<endl;
        }
    break;
    }

    inputfile.close();

    return 0;
}
