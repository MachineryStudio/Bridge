# include <string>
# include <ctime>
# include <cstdlib>
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


//this programs works fine, but has three limitations:
//)solved. I player can easily cheat the game when repeating the same word for all the questions.
//The system of points is not working properly.

//a. You could cheat the system if you already known the list of the words.
//b user could type the same word as the questioned

//this program iterates through while the user classify the type of the words as: noun, adjective, verb and adverb.

using namespace std;


void start()

   {

    cout<<"***********************************************************************\n";
    cout<<"*******************ENGLISH MEMORY RANDOM SPAN**************************\n";
    cout<<"**************POLYMORPHIC STUDIO CANADA By Andre Ramiers 2018@**************" <<endl;
    cout<<"*******************CONTACT: andreramiers@gmail.com***********************\n"<<endl;
    cout<<"***********************Please, digit your Name********************"<<endl;
    cout<<"***********************Please, digit your Email********************"<<endl;
    vector<string> user_name(0);
    string name, email;
    getline(cin, name);
    getline(cin, email);
    user_name.push_back(name);
    user_name.push_back(email);
    auto iteratorName = user_name.begin();
    auto iteratorName1 = user_name.begin();
    advance(iteratorName1, 1);

    cout<<"***********************WELCOME TO THE MEMORY SPAN DEAR:"<<" "<<*iteratorName<<endl;
    cout<<"***********************THANK TO GAVE US YOUR EMAIL, WHICH IS:"<<" "<<*iteratorName1<<endl;

    cout<<"************************************************************************"<<endl;
    cout<<"************************************************************************"<<endl;

   }

int main()

{

    start();
    //random int
    int random_family_words;
    int random_family_word1;
    int random_family_list;
    //User's vectors
    vector<string> type_user_input(0);
    vector<string> user_input(0);

    string enter, type;

    vector<string> main_words { "relent", "accomplish", "potential", "suspect", "expect", "strong", "monotonousness", "fasten", "stumble", "delight",
                                "achievable", "distinctive", "hygienic", "miscellaneous", "stubborn","tenacious", "monotonous", "fasten", "miserly", "delighted",
                                "verb1", "verb2", "verb3", "verb4", "verb5","verb6", "verb7", "verb8", "verb9", "verb10",
                                "adverb1", "adverb2", "adverb3", "adverb4", "adverb5","adverb6", "adverb7", "adverb8", "adverb9", "adverb10",

                              };
    auto iteratorMain_Words = main_words.begin();


     for (;iteratorMain_Words != main_words.end(); ++iteratorMain_Words)

    {
        srand(time(NULL));
        //the number 40 means between the 40 elements.
        random_family_words = rand() % 40;

     //for (;iteratorPosition != position.end(); ++index1)
    cout<<"***********What king of word is:"<<" "<<main_words[random_family_words]<<""<<endl;

                    getline(cin, type);
                    type_user_input.push_back(type);
                    //auto iteratorTypeUser = type_user_input.begin();

    auto result_it = find(begin(main_words), end(main_words), main_words[random_family_words]);

      if (result_it != main_words.end())
        {
                //if (result_it == expected variable)

               // cout<<*result_it<<endl;

                //get an index to see the position of the element
                //auto index = distance(family_word_memory.begin(), expected);
                auto index = distance(main_words.begin(), result_it);
                cout<<"the position of the element is: "<<" "<<index<<endl;


                //range for nouns, adjectives, verb and adverb.
                if (index >= 0 & index <= 10)
                {
                    cout<<"the word:"<<" "<<main_words[random_family_words]<<" "<<"is a noun:"<<endl;

                    if (type == "noun")

                    {

                        cout<<"you are awesome. The element:"<<" "<<main_words[random_family_words]<<"is a noun"<<endl;

                    }

                    else
                        {

                        cout<<"***************************YOU CANNOT DEFEAT ME!" "\n"<<endl;
                        cout<<"***************************YOU CANNOT CHEAT ME!\n"<<endl;
                        cout<<"***************************YOU ARE A CHEATER!*********\n"<<endl;
                        cout<<"***************************YOU LOSE*********"<<endl;
                        return 0;


                        }

                }

                if (index > 10 & index <= 20)
                {

                    cout<<"the word:"<<" "<<main_words[random_family_words]<<" "<<"is an adjective:"<<endl;

                     if (type == "adjective")

                    {


                    cout<<"you are awesome. The element:"<<" "<<main_words[random_family_words]<<"is an adjective"<<endl;

                    }

                    else
                        {

                        cout<<"***************************YOU CANNOT DEFEAT ME!" "\n"<<endl;
                        cout<<"***************************YOU CANNOT CHEAT ME!\n"<<endl;
                        cout<<"***************************YOU ARE A CHEATER!*********\n"<<endl;
                        cout<<"***************************YOU LOSE*********"<<endl;
                        return 0;


                        }


                }


                if (index > 20 & index <= 30)
                {

                    cout<<"the word:"<<" "<<main_words[random_family_words]<<" "<<"is a verb:"<<endl;

                     if (type == "verb")

                    {


                        cout<<"you are awesome. The element:"<<" "<<main_words[random_family_words]<<"is a verb"<<endl;

                    }

                    else
                        {

                        cout<<"***************************YOU CANNOT DEFEAT ME!" "\n"<<endl;
                        cout<<"***************************YOU CANNOT CHEAT ME!\n"<<endl;
                        cout<<"***************************YOU ARE A CHEATER!*********\n"<<endl;
                        cout<<"***************************YOU LOSE*********"<<endl;
                        return 0;


                        }


                }

               if (index > 30 & index <= 40)


               {
                   cout<<"the word:"<<" "<<main_words[random_family_words]<<" "<<"is an adverb:"<<endl;

                    if (type == "adverb")

                    {


                        cout<<"you are awesome. The element:"<<" "<<main_words[random_family_words]<<"is a adverb"<<endl;

                    }

                    else
                        {

                        cout<<"***************************YOU CANNOT DEFEAT ME!" "\n"<<endl;
                        cout<<"***************************YOU CANNOT CHEAT ME!\n"<<endl;
                        cout<<"***************************YOU ARE A CHEATER!*********\n"<<endl;
                        cout<<"***************************YOU LOSE*********"<<endl;
                        return 0;


                        }

               }



                main_words.erase(main_words.begin() + index);
                type_user_input.clear();


                }

        }



}
