//Program to start the game of family words
#include <iostream>
#include <string.h>
#include <fstream>
#include <sstream>
#include <vector>
#include <conio.h>


//This program gives a random word from a list and you must digit all the family words from that word and continues until you win or lose the game.


// It gives a random word string from a list
// The user must digits All the family correctly
//it gives you points with a counter.

using namespace std;

int main()

{

    string noun1, adjective1, verb1, adverb1;

    ifstream inputfile;
    inputfile.open("list2.txt");
    vector <string> list_vector(1);

    vector <string> word1(4);
    vector <string> word2(4);
    vector <string> word3(4);
    vector <string> word4(4);


    //store words in array while outputting, skipping blank lines

    //getline(inputfile, lista, ' ');
    //allow me to access to each component of the list2.txt
    while (inputfile >> lista >> lista >> lista >> lista, ' ' )

    for (int i = 0; i < 5; ++i)

    // while (inputfile >> word1[5] >> word2[5] >>word3[5] >> word4[5], ' ')

    {
        //store words in vector
         list_vector.push_back(word1[3]);
         list_vector.push_back(word2[3]);
         list_vector.push_back(word3[3]);
         list_vector.push_back(word4[3]);

       // cout<<"\n array_content:\n";

        cout<<list_vector[i]<<endl;

    }

    return (0);

}


    //you could output the whole array list
/*
    cout<<"Digit the noun for the verb:\n"<<list_vector[0]<<endl;
    cout<<"after that, please push ENTER"<<endl;
    getline(cin, noun);
    cout<<"Did you type the word?: \n"<<noun<<endl;

    cout<<"\n Digit the adjective for the verb:\n"<<list_vector[0]<<endl;
    cout<<"after that, please push ENTER"<<endl;
    getline(cin, adjective);
    cout<<"Did you type the word?: \n"<<adjective<<endl;

    cout<<"\n Digit the verb for the verb:\n"<<list_vector[0]<<endl;
    cout<<"after that, please push ENTER"<<endl;
    getline(cin, verb);
    cout<<"Did you type the word?: \n"<<verb<<endl;

    cout<<"\nDigit the adverb for the verb:\n"<<list_vector[0]<<endl;
    cout<<"after that, please push ENTER"<<endl;
    getline(cin, adverb);
    cout<<"Did you type the word?: \n"<<adverb<<endl;

    //string list2[] = {blender, to blend

    string words2[]= { noun, adjective, verb, adverb};
    string founded;
    int offset;

    if (inputfile.is_open())
    {
    while (!inputfile.eof())
    {
    getline(inputfile,founded);

    if (((offset = founded.find(noun, 0))!= string::npos) && ((offset = founded.find(adjective, 0))!= string::npos)
        && ((offset = founded.find(verb, 0))!= string::npos) && ((offset = founded.find(adverb, 0))!= string::npos))

    {

    int points = 0;

    for (int points = 0; points < 1; points++)
    points = points++;

    cout<<"You are cunning, the words belongs to the family word of the word:\n"<<"1.relent"<<endl;
    cout<<"the words are:\n"<<words2[0]<<"\n"<<"you got :\n"<<++points<<endl;
    cout<<words2[1]<<"\n"<<"you got 1 point:\n"<<points++ <<endl;
    cout<<words2[2]<<"\n"<<"you got 1 point:\n"<<points++<<endl;
    cout<<words2[3]<<"\n"<<"you got 1 point:\n"<<points++<<endl;

    cout<<"your total points are:\n"<<points++<<endl;

    return 0;

    }

    else

    {
        cout<<"You lose"<<endl;

     return(0);

   // inputfile.close();
    }
    }
    }
    }

        }
*/
