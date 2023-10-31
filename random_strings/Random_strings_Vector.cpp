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
//I player can easily cheat the game when repeating the same word for all the questions.
//The system of points is not working properly.



using namespace std;


void start()

   {

    cout<<"***********************************************************************\n";
    cout<<"*******************ENGLISH MEMORY RANDOM SPAN**************************\n";
    cout<<"**************POLYMORPHIC STUDIO CANADA By Andre Ramiers 2018@**************" <<endl;
    cout<<"*******************CONTACT: andreramiers@gmail.com***********************\n"<<endl;
    cout<<"***********************Please, digit your Name********************"<<endl;
    vector<string> user_name(0);
    string name;
    getline(cin, name);
    user_name.push_back(name);
    auto iteratorName = user_name.begin();
    cout<<"***********************WELCOME TO THE MEMORY SPAN DEAR:"<<" "<<*iteratorName<<endl;


   }

int main()

{

    start();
    //random int
    int random_family_words;
    int random_family_word1;
    //User's vectors
    vector<string> user_input(0);

    string enter, no;


    vector<string> main_words { "relent", "accomplish", "potential", "suspect", "expect",
    "strong", "monotonous", "fasten", "stumble", "delight"};
    auto iteratorMain_Words = main_words.begin();
    //interaction with the user, asking for 4 strings

    vector<string> family_word1 {"noun","adjective", "verb", "adverb"};
   /* vector<string> family_word_memory {"noun1","adjective1", "verb1", "adverb1", "noun2","adjective2", "verb2", "adverb2",
    "noun2","adjective2", "verb2", "adverb2", "noun3","adjective3", "verb3", "adverb3",
    "noun4","adjective4", "verb4", "adverb4", "noun5","adjective5", "verb5", "adverb5",
    "noun6","adjective6", "verb6", "adverb6", "noun7","adjective7", "verb7", "adverb7",
    "noun8","adjective8", "verb8", "adverb8", "noun9","adjective9", "verb9", "adverb9",
    "noun10","adjective10", "verb10", "adverb10"};
    */
    // Find the position for the element no.

    vector<string> family_word_memory {"relentlessness","relentless", "relent", "relentlessly", "accomplishment","accomplishable", "accomplish", "no",
    "potential","potential", "potentiate", "potentially", "suspect","suspicious", "suspect", "suspiciously",
    "expectation","expected", "expect", "expectedly", "sharp","sharp", "sharpen", "sharply",
    "strength","strong", "strengthen", "strongly", "monotonousness","monotonous", "no", "monotonously",
    "fastener","fastened", "fasten", "no", "stumble","stumbling", "stumble", "no",
    "delight","delighted", "delight", "delightedly"};


    auto iterator1 = family_word_memory.begin();

    //cout all the elements horizontally from a vector
    //copy(begin(family_word_memory), end(family_word_memory), ostream_iterator<string>(cout, " "));

    //cout<<family_word_memory[i]<<endl;
    //Iterations
    for (;iteratorMain_Words != main_words.end(); ++iteratorMain_Words)

    {
        srand(time(NULL));
        random_family_words = rand() % 10;
        random_family_word1 = rand() % 4;

    //check the main search function:
    cout<<"\n\n";
    cout<<"\n\n";
    cout<<"***********************LETS START MEMORIZING WORDS SHALL WE********************"<<endl;

    cout<<"********Digit the:"<<" "<<family_word1[random_family_word1]<<"  "<<"for the word:"<<" "<<main_words[random_family_words]<<" "<<endl;
    cout<<"*if the word:"<<" "<<main_words[random_family_words]<<" "<<"does not have the element"<<" "<<family_word1[random_family_word1]<<" "<<endl;
    cout<<"********please digit the word: no"<<endl;
    cout<<"********after that, please push ENTER"<<endl;
    cout<<endl;
    getline(cin, enter);
    user_input.push_back(enter);

    auto iteratorUser = user_input.begin();

    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"***********Did you digit the word:***\n"<<*iteratorUser<<endl;

    auto result_it = find(begin(family_word_memory), end(family_word_memory), *iteratorUser );

      if (result_it != family_word_memory.end())
        {
                cout<<*result_it<<endl;

                int points = 0;

                for (int points = 0; points < family_word_memory.size(); points++)
                points = points++;
                cout<<"****You are cunning, that words is the:"<<family_word1[random_family_word1]<<"  "<<"for the:"<<main_words[random_family_words]<<" "<<endl;
                cout<<"****your total points are:\n"<<++points<<endl;
                cout<<endl;
                cout<<endl;
                cout<<endl;

        }
        else
        {
           cout<<endl;
                cout<<endl;
                cout<<endl;
                cout<<endl;
                cout<<"***************************YOU CANNOT DEFEAT ME!" "\n"<<endl;
                cout<<"***************************YOU LOSE*********"<<endl;
                return 0;


        }

        user_input.clear();

    }


    cout<<"**********You are cunning, the words belongs to the family word of the word:\n"<<*iteratorMain_Words<<endl;
    cout<<"***********YOU HAVE SURPASSED THE MACHINE******YOU WIN!**************************"<<endl;


}



