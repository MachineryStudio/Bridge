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


    forward_list<string> main_words { "family_word1", "family_word2", "family_word3", "family_word4", "family_word5" };
    auto iteratorMain_Words = main_words.begin();
    //interaction with the user, asking for 4 strings

    forward_list<string> family_word1 {"noun1","adjective1", "verb1", "adverb1" };
    auto iterator1 = family_word1.begin();
    cout<<*iterator1<<endl;


    forward_list<string> family_word2 {"noun2","adjective2", "verb2", "adverb2"};
    auto iterator2 = family_word2.begin();


    forward_list<string> family_word3 {"noun3","adjective3", "verb3", "adverb3" };
    auto iterator3 = family_word3.begin();

    forward_list<string> family_word4 {"noun4","adjective4", "verb4", "adverb4" };
    auto iterator4 = family_word4.begin();


    //Vector of the vectors
    vector <forward_list <string> > family_words {family_word1,family_word2,family_word3,family_word4};
    auto iterator5 = family_words.begin();


   // cout<<family_words[0, 2]<<endl;
   // cout<<family_words[0, 1]<<endl;
    //  cout<<*++iterator5<<endl;
      //  cout<<*++iterator5<<endl;
       //   cout<<*++iterator5<<endl;




/*  vector <string> word1(4);
    vector <string> word2(4);
    vector <string> word3(4);
    vector <string> word4(4);


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


    for (int i = 0; i < 16; ++i)

    // while (inputfile >> word1[5] >> word2[5] >>word3[5] >> word4[5], ' ')

    {
        //store words in vector
         list_vector.push_back(word1[0]);
         list_vector.push_back(word1[1]);
         list_vector.push_back(word1[2]);
         list_vector.push_back(word1[3]);

         list_vector.push_back(word2[0]);
         list_vector.push_back(word2[1]);
         list_vector.push_back(word2[2]);
         list_vector.push_back(word2[3]);

         list_vector.push_back(word3[0]);
         list_vector.push_back(word3[1]);
         list_vector.push_back(word3[2]);
         list_vector.push_back(word3[3]);

         list_vector.push_back(word4[0]);
         list_vector.push_back(word4[1]);
         list_vector.push_back(word4[2]);
         list_vector.push_back(word4[3]);

       // cout<<"\n array_content:\n";
//iteration through all the vector vertically
        //cout<<list_vector<<endl;
        //cout<<main_words<<endl;


//iteration through all the vector horizontally
//copy(begin(word1), end(word1), ostream_iterator<string>(cout, " "));
//cout<<endl;

//another way to iterate through the vector
//cout<<*iterator1<<endl;
//cout<<*++iterator1<<endl;
//cout<<*++iterator1<<endl;
//cout<<*++iterator1<<endl;
//cout<<*++iterator1<<endl;


*/
    cout<<"*******************WELCOME TO THE ENGLISH MEMORY CARD******\n"<<endl;
    cout<<"*******************YOU ARE ABOUT TO MEMORIZE OVER 1000 WORDS*\n"<<endl;
    cout<<"*******************EACH WELL SPELLED WORD MEANS 1 POINT******\n"<<endl;
    cout<<"*******************COULD YOU BEAT THE SYSTEM MACHINE**********\n"<<endl;
    cout<<"*******************CREATED BY ANDRE RAMIERS********************\n"<<endl;


    //Iterations

    for (;iteratorMain_Words != main_words.end(); ++iteratorMain_Words)

    {

        cout<<*iterator1<<endl;


    for (;iterator5!=  family_words.end(); ++iterator5)

    {
        cout<<*iterator5<<endl;


    cout<<"********Digit the noun for the WORD:\n"<<*iteratorMain_Words<<endl;
    cout<<"********after that, please push ENTER"<<endl;
    getline(cin, noun);
    user_input.push_back(noun);
    auto iteratorUser = user_input.begin();
    cout<<*iterator5<<endl;
                cout<<endl;
                cout<<endl;
                cout<<endl;


     if (*iteratorUser = *iterator5)

                {

    cout<<"***********Did you digit the word:***\n"<<*iteratorUser<<endl;
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


    }

   // }

    }

*/
