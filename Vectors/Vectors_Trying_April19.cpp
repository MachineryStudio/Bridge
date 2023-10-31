//Program to start the game of family words
#include <iostream>
#include <string.h>
#include <fstream>
#include <sstream>
#include <vector>
#include <conio.h>
#include <Windows.h>
#include <mmsystem.h>
#include<set>
#include<algorithm>
#include<iterator>
#include<array>
#include<list>
#include<forward_list>


//By Andre Ramiers @2018
//This program gives a random word from a list and you must digit all the family words from that word and continues until you win or lose the game.
// It gives a random word string from a list
// The user must digits All the family correctly
//it gives you points with a counter.


template<typename T>
std::ostream& operator<<(std::ostream& s, const std::forward_list<T>& v)
 {
    s.put('[');
    char comma[3] = {'\0', ' ', '\0'};
    for (const auto& e : v) {
        s << comma << e;
        comma[0] = ',';
    }
    return s << ']';
}

using namespace std;

int main()

{
   //PlaySound(("theme.mp3"), NULL, SND_SYNC);

    //User's input
    vector<string> user_input(0);
    string noun, adjective, verb, adverb;


    forward_list<string> main_words { "family_word1", "family_word2", "family_word3", "family_word4", "family_word5",
    "family_word6", "family_word7", "family_word8", "family_word9", "family_word10"};
    auto iteratorMain_Words = main_words.begin();
    //interaction with the user, asking for 4 strings

    forward_list<string> family_word1 {"noun1","adjective1", "verb1", "adverb1", "noun2","adjective2", "verb2", "adverb2",
    "noun3","adjective3", "verb3", "adverb3","noun4","adjective4", "verb4", "adverb4","noun5","adjective5", "verb5", "adverb5",
    "noun6","adjective6", "verb6", "adverb6", "noun7","adjective7", "verb7", "adverb7",
    "noun8","adjective8", "verb8", "adverb8","noun9","adjective9", "verb9", "adverb10","noun10","adjective10", "verb10", "adverb10"};
    auto iterator1 = family_word1.begin();
    //cout<<*iterator1<<endl;

    //Vector of the vectors

    cout<<"*******************WELCOME TO THE ENGLISH MEMORY CARD******\n"<<endl;
    cout<<"*******************YOU ARE ABOUT TO MEMORIZE OVER 1000 WORDS*\n"<<endl;
    cout<<"*******************EACH WELL SPELLED WORD MEANS 1 POINT******\n"<<endl;
    cout<<"*******************COULD YOU BEAT THE SYSTEM MACHINE**********\n"<<endl;
    cout<<"*******************CREATED BY ANDRE RAMIERS********************\n"<<endl;


    //Iterations

    for (;iteratorMain_Words != main_words.end(); ++iteratorMain_Words)

    {

  //  for (;iterator1 !=  family_word1.end(); ++iterator1)

  //  {

    cout<<"********Digit the noun for the WORD:\n"<<*iteratorMain_Words<<endl;
    cout<<"********after that, please push ENTER"<<endl;
    getline(cin, noun);
    user_input.push_back(noun);
    auto iteratorUser = user_input.begin();
    cout<<"you have on your list the word:"<<*iterator1<<endl;
                cout<<endl;
                cout<<endl;
                cout<<endl;
    cout<<"***********Did you digit the word:***\n"<<*iteratorUser<<endl;


     if (*iteratorUser == *iterator1)

                {


                cout<<endl;
                cout<<endl;
                cout<<endl;

                int points = 0;

                for (int points = 0; points < 1; points++)
                points = points++;
                cout<<"**********You are cunning, the words belong to the family word of the word:\n"<<*iteratorMain_Words<<endl;
                cout<<"***********your total points are:\n"<<++points<<endl;


                }

            else
                {

                cout<<endl;
                cout<<endl;
                cout<<endl;
                cout<<endl;
                cout<<"***********YOU CANNOT DEFEAT ME!" "\n"<<endl;
                cout<<"******************YOU LOSE*********"<<endl;
                return 0;
                }


    cout<<"********\n Digit the adjective for the WORD:\n"<<*iteratorMain_Words<<endl;
    cout<<"********after that, please push ENTER"<<endl;
    getline(cin, adjective);

    user_input.push_back(adjective);
    auto iteratorUser1 = user_input.begin();
    advance(iteratorUser1, 1);

    //cout<<"you have on your list the word:"<<*++iterator1<<endl;

    cout<<"***********Did you digit the word:***\n"<<*iteratorUser1<<endl;


    if (*iteratorUser1 == *++iterator1)

                {

                cout<<endl;
                cout<<endl;
                cout<<endl;
                cout<<endl;

                int points = 0;

                for (int points = 0; points < 1; points++)
                points = points++;
                cout<<"**********You are cunning, the words belong to the family word of the word:\n"<<*iteratorMain_Words<<endl;
                cout<<"***********your total points are:\n"<<++points<<endl;

                }

            else
                {

                cout<<endl;
                cout<<endl;
                cout<<endl;
                cout<<endl;
                cout<<"***********YOU CANNOT DEFEAT ME!" "\n"<<endl;
                cout<<"******************YOU LOSE*********"<<endl;
                return 0;
                }

    cout<<"*********\n Digit the verb for the WORD:\n"<<*iteratorMain_Words<<endl;
    cout<<"********after that, please push ENTER"<<endl;
    getline(cin, verb);
    user_input.push_back(verb);
    auto iteratorUser2 = user_input.begin();
    advance(iteratorUser2, 2);

    //cout<<"you have on your list the word:"<<*++iterator1<<endl;

    cout<<"***********Did you digit the word:***\n"<<*iteratorUser2<<endl;


    if (*iteratorUser2  == *++iterator1)

                {

                cout<<endl;
                cout<<endl;
                cout<<endl;
                cout<<endl;

                int points = 0;

                for (int points = 0; points < 1; points++)
                points = points++;
                cout<<"**********You are cunning, the words belong to the family word of the word:\n"<<*iteratorMain_Words <<endl;
                cout<<"***********your total points are:\n"<<++points<<endl;

                }

            else
                {

                cout<<endl;
                cout<<endl;
                cout<<endl;
                cout<<endl;
                cout<<"***********YOU CANNOT DEFEAT ME!" "\n"<<endl;
                cout<<"******************YOU LOSE*********"<<endl;
                return 0;
                }

    cout<<"*********\nDigit the adverb for the WORD:\n"<<*iteratorMain_Words<<endl;
    cout<<"*********after that, please push ENTER"<<endl;
    getline(cin, adverb);
    auto iteratorUser3 = user_input.begin();
    advance(iteratorUser3,3);


    user_input.push_back(adverb);


    //cout<<"you have on your list the word:"<<*++iterator1<<endl;

    cout<<"***********Did you digit the word:***\n"<<*iteratorUser3<<endl;

   if (*iteratorUser3 == *++iterator1)

                {

                cout<<endl;
                cout<<endl;
                cout<<endl;
                cout<<endl;

                int points = 0;

                for (int points = 0; points < 1; points++)
                points = points++;
                cout<<"**********You are cunning, the words belong to the family word of the word:\n"<<*iteratorMain_Words<<endl;
                cout<<"***********your total points are:\n"<<++points + 3<<endl;

                }

            else
                {

                cout<<endl;
                cout<<endl;
                cout<<endl;
                cout<<endl;
                cout<<"***********YOU CANNOT DEFEAT ME!" "\n"<<endl;
                cout<<"******************YOU LOSE*********"<<endl;
                return 0;

                }

    //final family_word1 and points:

    cout<<"**********You are cunning, the words belongs to the family word of the word:\n"<<*iteratorMain_Words <<endl;
    cout<<"**********the words are:\n"<<family_word1<<endl;

    cout<<"you have on your list the word:"<<*++iterator1<<endl;
    user_input.clear();


    }

}



