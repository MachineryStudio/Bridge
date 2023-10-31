//Program to start the game of family words
#include <iostream>
#include <string.h>
#include <fstream>
#include <sstream>
#include <vector>
#include <conio.h>
#include <Windows.h>
#include <mmsystem.h>



//This program gives a random word from a list and you must digit all the family words from that word and continues until you win or lose the game.
// It gives a random word string from a list
// The user must digits All the family correctly
//it gives you points with a counter.

using namespace std;

int main()

{
   // PlaySound(("theme.mp3"), NULL, SND_SYNC);

    string noun1, adjective1, verb1, adverb1;
    string noun2, adjective2, verb2, adverb2;
    string noun3, adjective3, verb3, adverb3;
    string noun4, adjective4, verb4, adverb4;

   // ifstream inputfile;
   // inputfile.open("list2.txt");
    vector <string> list_vector(1);

    vector <string> word1(4);
    vector <string> word2(4);
    vector <string> word3(4);
    vector <string> word4(4);

    string noun, adjective, verb, adverb;

    word1[0] = "consistency";
    word1[1] = "consistent";
    word1[2] = "consist";
    word1[3] = "consistently";

    word2[0] = "monotonousness";
    word2[1] = "monotonous";
    word2[2] = "do not have";
    word2[3] = "monotonously";

    word3[0] = "noun3";
    word3[1] = "adjective3";
    word3[2] = "verb3";
    word3[3] = "adverb3";

    word4[0] = "noun4";
    word4[1] = "adjective4";
    word4[2] = "verb4";
    word4[3] = "adverb4";


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

    //interaction with the user, asking for 4 strings

    cout<<"*******************WELCOME TO THE ENGLISH MEMORY CARD******\n"<<endl;
    cout<<"*******************YOU ARE ABOUT TO MEMORIZE OVER 1000 WORDS*\n"<<endl;
    cout<<"*******************EACH WELL SPELLED WORD MEANS 1 POINT******\n"<<endl;
    cout<<"*******************COULD YOU BEAT THE SYSTEM MACHINE**********\n"<<endl;
    cout<<"*******************CREATED BY ANDRE RAMIERS****************\n"<<endl;

    cout<<"********Digit the noun for the WORD:\n"<<word1[0]<<endl;
    cout<<"********after that, please push ENTER"<<endl;
    getline(cin, noun);
    cout<<"********Did you type the word?: \n"<<noun<<endl;

    cout<<"********\n Digit the adjective for the WORD:\n"<<word1[0]<<endl;
    cout<<"********after that, please push ENTER"<<endl;
    getline(cin, adjective);
    cout<<"********Did you type the word?: \n"<<adjective<<endl;

    cout<<"*********\n Digit the verb for the WORD:\n"<<word1[0]<<endl;
    cout<<"********after that, please push ENTER"<<endl;
    getline(cin, verb);
    cout<<"*********Did you type the word?: \n"<<verb<<endl;

    cout<<"*********\nDigit the adverb for the WORD:\n"<<word1[0]<<endl;
    cout<<"*********after that, please push ENTER"<<endl;
    getline(cin, adverb);
    cout<<"*********Did you type the word?: \n"<<adverb<<endl;

    if (noun == word1[0] && adjective == word1[1] && verb == word1[2] && adverb == word1[3] )
    {

    int points = 0;

    for (int points = 0; points < 1; points++)
    points = points++;

    cout<<"**********You are cunning, the words belongs to the family word of the word:\n"<<word1[0]<<endl;
    cout<<"**********the words are:\n"<<word1[0]<<"\n"<<"you got :\n"<<++points<<endl;
    cout<<word1[1]<<"\n"<<"you got 1 point:\n"<<points++ <<endl;
    cout<<word1[2]<<"\n"<<"you got 1 point:\n"<<points++<<endl;
    cout<<word1[3]<<"\n"<<"you got 1 point:\n"<<points++<<endl;

    cout<<"***********your total points are:\n"<<points++<<endl;

    //return 0;

    }

    else

    {
        cout<<"***********YOU CANNOT DEFEAT ME!" "\n"<<endl;
        cout<<"******************YOU LOSE*********"<<endl;



    return (0);


}
    cout<<"\n"<<endl;
    cout<<"\n"<<endl;

    cout<<"Digit the noun for the verb:\n"<<word2[0]<<endl;
    cout<<"after that, please push ENTER"<<endl;
    getline(cin, noun);
    cout<<"Did you type the word?: \n"<<word2[0]<<endl;

    cout<<"\n Digit the adjective for the verb:\n"<<word2[0]<<endl;
    cout<<"after that, please push ENTER"<<endl;
    getline(cin, adjective);
    cout<<"Did you type the word?: \n"<<word2[1]<<endl;

    cout<<"\n Digit the verb for the verb:\n"<<word2[0]<<endl;
    cout<<"If the word does not have a verb conjugation type: do not have \n"<<endl;
    cout<<"after that, please push ENTER"<<endl;
    getline(cin, verb);
    cout<<"Did you type the word?: \n"<<word2[2]<<endl;

    cout<<"\nDigit the adverb for the verb:\n"<<word1[0]<<endl;
    cout<<"after that, please push ENTER"<<endl;
    getline(cin, adverb);
    cout<<"Did you type the word?: \n"<<word2[3]<<endl;

    if (noun == word2[0] && adjective == word2[1] && verb == word2[2] && adverb == word2[3] )
    {

    int points = 0;

    for (int points = 0; points < 1; points++)
    points = points++;

    cout<<"You are cunning, the words belongs to the family word of the word:\n"<<word1[0]<<endl;
    cout<<"the words are:\n"<<word2[0]<<"\n"<<"you got :\n"<<++points<<endl;
    cout<<word2[1]<<"\n"<<"you got 1 point:\n"<<points++ <<endl;
    cout<<word2[2]<<"\n"<<"you got 1 point:\n"<<points++<<endl;
    cout<<word2[3]<<"\n"<<"you got 1 point:\n"<<points++<<endl;

    cout<<"your total points are:\n"<<(points++ + 4)<<endl;

    return 0;

    }

    else

    {
        cout<<"You lose"<<endl;

}
     return(0);
}



