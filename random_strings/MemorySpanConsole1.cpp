

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
//b user could type the same word as the questioned that destroy the program.
//c if a word is a noun and and the same time an adjective, please digit twice the word in the vector.

//d check if the program eliminates all the repeated words at once.

//this program iterates through while the user classify the type of the words as: noun, adjective, verb and adverb.

using namespace std;


void start()

   {

//this little code helps to execute the file without opening the compiler.
  /*  char s1[256],s2[256];
    cout<<"ENGLISH MEMORY RANDOM SPAN: ";
    gets(s1);
    sprintf(s2,"START %s",s1);
    const char* prgm=s2;
    system(prgm);
    */


    cout<<"***********************************************************************\n";
    cout<<"*******************ENGLISH MEMORY RANDOM SPAN**************************\n";
    cout<<"**************BRIDGE DECODED SHELL By Andre Ramirez 2018@**************" <<endl;
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
    cout<<"******************THANK TO GAVE US YOUR EMAIL, WHICH IS:"<<" "<<*iteratorName1<<endl;

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
    vector<string> family_word1 {"noun","adjective", "verb", "adverb"};


    vector<string> user_input_noun(0);
    vector<string> user_input_adjective(0);
    vector<string> user_input_verb(0);
    vector<string> user_input_adverb(0);


    vector<string> system_memory_vector(0);

    string enter, type;


    //this vector is organized by files
    //line 0 means nouns
    //line 1 means verbs
    //line 2 means adjectives
    //line 3 means adverbs

    vector<string> main_words { "relentlessness", "accomplishment", "potential", "suspect", "expectation","sharp", "strength", "monotonousness", "fastener", "stumble", "potential",
                                "achievable", "distinctive", "hygienic", "miscellaneous", "stubborn","tenacious", "monotonous", "fastened", "miserly", "delighted", "potential",
                                "relent", "jiggle", "resemble", "brighten", "explicate","quicken", "purpose", "wander", "remorse", "snatch", "persuade","doubtful",
                                "relentlessly", "potentially", "expectedly", "delightedly", "purposely","purposelessly", "inexplicably", "monotonously", "distinctively", "strongly",

                              };



      vector<string> family_word_memory {"relentlessness","relent", "relentless", "relentlessly",
                                        "accomplishment","accomplishable", "accomplish", "no adverb",
                                        "potential","potential", "potentiate", "potentially",
                                        "suspect","suspicious", "suspect", "suspiciously",
                                        "expectation","expected", "expect", "expectedly",
                                        "sharp","sharp", "sharpen", "sharply",
                                        "strength","strong", "strengthen", "strongly",
                                        "monotonousness","monotonous", "no verb", "monotonously",
                                        "fastener","fastened", "fasten", "no adverb",
                                        "stumble","stumbling", "stumble", "no adverb",
                                        "delight","delighted", "delight", "delightedly",
                                        "achievement", "achieve", "achievable", "no adverb",
                                        "distinctness", "distinct", "no verb", "distinctively",
                                        "jiggle", "jiggy", "jiggle", "no adverb",
                                        "resemblance", "resembling", "resemble","no adverb",
                                        "brightness", "bright","brighten","brightly",
                                        "explication", "explicable", "explicate","inexplicably",
                                        "no noun ", "quicken", "quick", "quickly",
                                        "purpose", "purpose", "purposeless", "purposeful", "purposely", "purposelessly",
                                        "wander", "wandering", "wander", "wanderingly",
                                        "remorse", "remorseful" "remorseless", "remorse", "remorsefully" "remorselessly",
                                        "snatch", "snatch", "snatchable" "snatchingly",
                                        "tenacity", "tenacious","no verb", "tenaciously",
                                        "persuasiveness", "persuasive", "persuade" , "persuasively",
                                        "doubt", "doubt", "doubtful", "undoubtedly",
                                        "miscellany","no verb", "miscellaneous", "miscellaneously",
                                        "miser","misery","miserable", "miserly","miserably",
                                        "stubbornness", "stubborn", "no verb", "stubbornly",
                                        "no noun", "hygienic", "no verb", "hygienically",

                                        };


    auto iteratorMain_Words = main_words.begin();
    auto iterator_family_words = family_word_memory.begin();


    for (;iteratorMain_Words != main_words.end(); ++iteratorMain_Words)

    {
        srand(time(NULL));
       // random_family_words = rand() % 4;
       //there are just 4 elements in family_word1, so:

        random_family_word1 = rand() % 4;

            for (;iterator_family_words != family_word_memory.end(); ++iterator_family_words)

            {   //it gives a random words from family_word_memory.
            srand(time(NULL));
            random_family_list = rand() % 10;


            //check the main search function:
            cout<<"\n\n";
            cout<<"***********************LETS MEMORIZE THE FAMILY WORDS*********************************"<<endl;


            for (;iteratorMain_Words != main_words.end(); ++iteratorMain_Words)

            {
            srand(time(NULL));
            //the number 40 means between the 40 elements.
            random_family_words = rand() % 41;

        //for (;iteratorPosition != position.end(); ++index1)
            cout<<"***********What kind of word is:"<<" "<<main_words[random_family_words]<<""<<endl;

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
                auto index = distance(main_words.begin(), result_it); //distance inside main_words
                cout<<"the position of the element is: "<<" "<<index<<endl;


                 //take the randonWord and save in a vector or int a variable
    //It gives the position of the randonWord in the vector family_word_memory

    string randonWord;
    randonWord = main_words[random_family_words];
    system_memory_vector.push_back(randonWord);

    auto iteratorSytem = system_memory_vector.begin();

    cout<<"The random word is"<<" "<<randonWord<<endl;

    //The position of the randomWord in the family_word_memory
    auto result_it2 = find(begin(family_word_memory), end(family_word_memory), *iteratorSytem);
    auto index2 = distance(family_word_memory.begin(), result_it2);

    //The position of the randomWord in the main_words vector to find what kind of type it is
    auto result_it3 = find(begin(main_words), end(main_words), *iteratorSytem);
    auto index3 = distance(main_words.begin(), result_it3);


    cout<<"The position of the random word in the vector of the total words is: "<<" "<<index2<<endl;
    cout<<"The position of the random word in the vector that records of main words is: "<<" "<<index3<<endl;


                //range for nouns, adjectives, verb and adverb.
                if (index >= 0 & index <= 10)
                {
                    cout<<"the word:"<<" "<<main_words[random_family_words]<<" "<<"is a noun:"<<endl;



                    if (type == "noun")

                    {

                        cout<<"you are awesome. The element:"<<" "<<main_words[random_family_words]<<"is a noun"<<endl;

                        cout<<"\n\n";
                        cout<<"***********************LETS START MEMORIZING WORDS SHALL WE********************"<<endl;

                        cout<<"The complete family word of the"<<" "<<main_words[random_family_words]<<endl;
                        cout<<"is"<<" "<<family_word_memory[index2]<<" , "<<family_word_memory[index2 + 1]<<" , "<<family_word_memory[index2 + 2]<<" , "<<family_word_memory[index2 + 3]<<endl;


                        //if main_words[random_family_words] is a noun,

                cout<<"\n\n";
                cout<<"***********************LETS START THE GAME ************************************"<<endl;


                cout<<"********Digit the:"<<" "<<family_word1[1]<<"  "<<"for the word:"<<" "<<main_words[random_family_words]<<" "<<endl;
                cout<<"********if the word:"<<" "<<main_words[random_family_words]<<"  "<<"does not have the element"<<" "<<family_word1[1]<<" "<<endl;
                cout<<"********avoid enter"<<endl;
                cout<<"********after that, please push ENTER"<<endl;

                cout<<endl;
                getline(cin, enter);
                user_input_adjective.push_back(enter);

                auto iteratorUser = user_input_adjective.begin();
                cout<<endl;
                cout<<"***********Did you digit the word:***\n"<<*iteratorUser<<endl;

                auto result_it = find(begin(user_input_adjective), end(user_input_adjective), *iteratorUser );

                if (result_it != user_input_adjective.end())
                {
                //result it could be a noun, verb, adjective or adverb
                auto index = distance(user_input_adjective.begin(), result_it);

                    if (user_input_adjective[index] == family_word_memory[index2+1])

                {
                    cout<<*result_it<<endl;
                    cout<<"the position of the element in the user vector is: "<<" "<<index<<endl;
                    cout<<"****You are cunning, that words is the:"<<family_word1[1]<<"  "<<"for the word:"<<main_words[random_family_words]<<" "<<endl;

                    user_input_adjective.clear();
                    system_memory_vector.clear();
                    family_word_memory.erase(family_word_memory.begin() + (index2+1));

                }
                    else
                    {
                    cout<<endl;
                    cout<<endl;
                    cout<<endl;
                    cout<<endl;
                    cout<<"***************************YOU CANNOT DEFEAT ME!" "\n"<<endl;
                    cout<<"***************************YOU CANNOT CHEAT ME!\n"<<endl;
                    cout<<"***************************YOU ARE A CHEATER!*********\n"<<endl;
                    cout<<"***************************YOU LOSE*********"<<endl;
                    return 0;


                    }


                }

                 //now verbs
                 //this way is more methodical

                cout<<"********Digit the:"<<" "<<family_word1[2]<<"  "<<"for the word:"<<" "<<main_words[random_family_words]<<" "<<endl;
                cout<<"********if the word:"<<" "<<main_words[random_family_words]<<" "<<"does not have the element"<<" "<<family_word1[1]<<" "<<endl;
                cout<<"********please digit the word: "<<family_word1[2]<<" "<<endl;
                cout<<"********accompanied with the word no"<<" "<<"like this:"<<" "<<"no   " + family_word1[2]<<" "<<endl;
                cout<<"********after that, please push ENTER"<<endl;

                cout<<endl;
                getline(cin, enter);
                user_input_verb.push_back(enter);

                auto iteratorUser1 = user_input_adjective.begin();
                cout<<endl;
                cout<<"***********Did you digit the word:***\n"<<*iteratorUser1<<endl;

                auto result_it1 = find(begin(user_input_verb), end(user_input_verb), *iteratorUser1 );

                if (result_it1 !=  user_input_verb.end())
                {
                //result it could be a noun, verb, adjective or adverb
                auto index = distance(user_input_verb.begin(), result_it1);

                //adjective
                //The position of the randomWord in the main_words vector to find what kind of type it is
                cout<<"you expected" <<" "<<  family_word_memory[index2 + 2]<<endl;

                    if (user_input_verb[index] == family_word_memory[index2 + 2])


                    {

                        cout<<*result_it1<<endl;

                //get an index to see the position of the element
                //auto index = distance(family_word_memory.begin(), expected);

                    cout<<"the position of the element is: "<<" "<<index<<endl;

                    cout<<"****You are cunning, that words is the:"<<family_word1[2]<<"  "<<"for the:"<<main_words[random_family_words]<<" "<<endl;
                    //cout<<"****your total points are:\n"<<counter<<endl;
                    cout<<endl;
                    user_input_verb.clear();
                    system_memory_vector.clear();
                    family_word_memory.erase(family_word_memory.begin() + (index2 +2));
                   //remove(family_word_memory.begin(), family_word_memory.end(), *result_it);

                    }

                else
                    {
                    cout<<endl;
                    cout<<endl;
                    cout<<endl;
                    cout<<endl;
                    cout<<"***************************YOU CANNOT DEFEAT ME!" "\n"<<endl;
                    cout<<"***************************YOU CANNOT CHEAT ME!\n"<<endl;
                    cout<<"***************************YOU ARE A CHEATER!*********\n"<<endl;
                    cout<<"***************************YOU LOSE*********"<<endl;
                    return 0;


                    }


            }


                cout<<"\n\n";
                cout<<"***********************LETS START THE GAME ************************************"<<endl;


                cout<<"********Digit the:"<<" "<<family_word1[3]<<"  "<<"for the word:"<<" "<<main_words[random_family_words]<<" "<<endl;
                cout<<"********if the word:"<<" "<<main_words[random_family_words]<<" "<<"does not have the element"<<" "<<family_word1[3]<<" "<<endl;
                cout<<"********please digit the word: "<<family_word1[3]<<" "<<endl;
                cout<<"********accompanied with the word no"<<" "<<"like this:"<<" "<<"no   " + family_word1[2]<<" "<<endl;
                cout<<"********after that, please push ENTER"<<endl;

                cout<<endl;
                getline(cin, enter);
                user_input_adverb.push_back(enter);

                auto iteratorUser2 = user_input_adverb.begin();
                cout<<endl;
                cout<<"***********Did you digit the word:***\n"<<*iteratorUser2<<endl;
                cout<<"you expected" <<" "<< family_word_memory[index2 + 3]<<endl;

                auto result_verb = find(begin(user_input_adverb), end(user_input_adverb), *iteratorUser2 );

                if (result_verb != user_input_adverb.end())
                {
                //result it could be a noun, verb, adjective or adverb
                auto index = distance(user_input_adverb.begin(),result_verb);

                //verb
                //The position of the randomWord in the main_words vector to find what kind of type it is
                //verb
                //The position of the randomWord in the main_words vector to find what kind of type it is
                cout<<"you expected" <<" "<<  family_word_memory[index2 + 3]<<endl;

                    if (user_input_adverb[index] == family_word_memory[index2 + 3])

                    {


                    cout<<*result_verb<<endl;

                //get an index to see the position of the element
                //auto index = distance(family_word_memory.begin(), expected);

                    cout<<"the position of the element is: "<<" "<<index<<endl;


                    int points, counter = 0;

                    for (; points !=0; ++counter)

                    {
                        cin>>points;



                    }

                    cout<<"****You are cunning, that words is the:"<<family_word1[2]<<"  "<<"for the:"<<main_words[random_family_words]<<" "<<endl;
                    cout<<"****your total points are:\n"<<counter<<endl;
                    cout<<endl;
                    user_input_verb.clear();
                    system_memory_vector.clear();
                    family_word_memory.erase(family_word_memory.begin() + (index2 -1));
                   //remove(family_word_memory.begin(), family_word_memory.end(), *result_it2);


                    }

                    else
                    {
                    cout<<endl;
                    cout<<endl;
                    cout<<endl;
                    cout<<endl;
                    cout<<"***************************YOU CANNOT DEFEAT ME!" "\n"<<endl;
                    cout<<"***************************YOU CANNOT CHEAT ME!\n"<<endl;
                    cout<<"***************************YOU ARE A CHEATER!*********\n"<<endl;
                    cout<<"***************************YOU LOSE*********"<<endl;
                    return 0;


                    }
                }






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

                if (index > 10 & index <= 21)
                {

                    cout<<"the word:"<<" "<<main_words[random_family_words]<<" "<<"is an adjective:"<<endl;

                     if (type == "adjective")

                    {


                    cout<<"That was flawless. The element:"<<" "<<main_words[random_family_words]<<" "<<"is an adjective"<<endl;

                    cout<<"\n\n";
                    cout<<"***********************LETS START MEMORIZING WORDS SHALL WE********************"<<endl;

                    cout<<"The complete family word of the"<<" "<<main_words[random_family_words]<<endl;
                    cout<<"is"<<" "<<family_word_memory[index2 - 1]<<" , "<<family_word_memory[index2]<<" , "<<family_word_memory[index2 + 1]<<" , "<<family_word_memory[index2 + 2]<<endl;

                    }

                    else
                        {

                        cout<<"***************************YOU CANNOT DEFEAT ME!" "\n"<<endl;
                        cout<<"***************************YOU CANNOT CHEAT ME!\n"<<endl;
                        cout<<"***************************YOU ARE A CHEATER!*********\n"<<endl;
                        cout<<"***************************YOU ARE CHEEKY!*********\n"<<endl;
                        cout<<"***************************YOU LOSE*********"<<endl;
                        return 0;


                        }


                }


                if (index > 21 & index <= 31)
                {

                    cout<<"the word:"<<" "<<main_words[random_family_words]<<" "<<"is a verb:"<<endl;

                     if (type == "verb")

                    {


                        cout<<"you are amazingly great. The element:"<<" "<<main_words[random_family_words]<<" "<<"is a verb"<<endl;
                        cout<<"\n\n";
                        cout<<"***********************LETS START MEMORIZING WORDS SHALL WE********************"<<endl;

                        cout<<"The complete family word of the"<<" "<<main_words[random_family_words]<<endl;
                        cout<<"is"<<" "<<family_word_memory[index2 - 2]<<" , "<<family_word_memory[index2 - 1]<<" , "<<family_word_memory[index2]<<" , "<<family_word_memory[index2 + 1]<<endl;



                    }

                    else
                        {

                        cout<<"***************************YOU CANNOT DEFEAT ME!" "\n"<<endl;
                        cout<<"***************************YOU CANNOT CHEAT ME!\n"<<endl;
                        cout<<"***************************YOU ARE A CHEATER!*********\n"<<endl;
                        cout<<"***************************YOU ARE CHEEKY!*********\n"<<endl;
                        cout<<"***************************YOU LOSE*********"<<endl;
                        return 0;


                        }


                }

               if (index > 31 & index <= 41)


               {
                   cout<<"the word:"<<" "<<main_words[random_family_words]<<" "<<" "<<"is an adverb:"<<endl;

                    if (type == "adverb")

                    {


                        cout<<"you are superb. The element:"<<" "<<main_words[random_family_words]<<" "<<"is an adverb"<<endl;

                        cout<<"\n\n";
                        cout<<"***********************LETS START MEMORIZING WORDS SHALL WE********************"<<endl;

                        cout<<"The complete family word of the"<<" "<<main_words[random_family_words]<<endl;
                        cout<<"is"<<" "<<family_word_memory[index2 - 3]<<" , "<<family_word_memory[index2 - 2]<<" , "<<family_word_memory[index2 - 1]<<" , "<<family_word_memory[index2]<<endl;

                    }

    //family words inputs
                    else
                        {

                        cout<<"***************************YOU CANNOT DEFEAT ME!" "\n"<<endl;
                        cout<<"***************************YOU CANNOT CHEAT ME!\n"<<endl;
                        cout<<"***************************YOU ARE A CHEATER!*********\n"<<endl;
                        cout<<"***************************YOU ARE CHEEKY!*********\n"<<endl;
                        cout<<"***************************YOU LOSE*********"<<endl;
                        return 0;


                        }


                    }

                    //clear the type of words that is
                    //User's vectors
                    //vector<string> type_user_input(0);
                    type_user_input.clear();

        }



            }


        }



        }



        }










