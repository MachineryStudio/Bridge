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


//a. You could cheat the system if you already known the list of the words.
//b user could type the same word as the questioned that destroy the program.
//c if a word is a noun and and the same time an adjective, please digit twice the word in the vector full list.
//when the word is both noun and adjective or 2 kinds the program makes a glitch because he finds the first location.

//this program iterates through while the user classify the type of the words as: noun, adjective, verb and adverb.


//IMPROVEMENTS:

//Record the information (name, points of the user in a file.txt)
//The user could see the complete list of words to learn.
//transform it to OOP
//print a PDF of the complete words

//Do a GUI and and using SQL or MySQl to administrate all the words data base.

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

    vector<string> user_input_noun(0);
    vector<string> user_input_adjective(0);
    vector<string> user_input_verb(0);
    vector<string> user_input_adverb(0);

    vector<string> system_memory_vector(0);

    string enter, type;

    //this vector is organized by files

    vector<string> main_words { "relentlessness", "accomplishment", "potential", "suspect", "expectation","sharp", "strength", "monotonousness", "fastener", "stumble",
                                "achievable", "distinctive", "hygienic", "miscellaneous", "stubborn","tenacious", "monotonous", "fasten", "miserly", "delighted", "potential",
                                "relent", "jiggle", "resemble", "brighten", "explicate","quicken", "purpose", "wander", "remorse", "snatch", "persuade","doubtful",
                                "relentlessly", "potentially", "expectedly", "delightedly", "purposely","purposelessly", "inexplicably", "monotonously", "distinctively", "strongly",

                              };


    auto iteratorMain_Words = main_words.begin();


     for (;iteratorMain_Words != main_words.end(); ++iteratorMain_Words)

    {
        srand(time(NULL));
        //the number 40 means between the 40 elements.
        random_family_words = rand() % 41;

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

                if (index > 10 & index <= 21)
                {

                    cout<<"the word:"<<" "<<main_words[random_family_words]<<" "<<"is an adjective:"<<endl;

                     if (type == "adjective")

                    {


                    cout<<"you are awesome. The element:"<<" "<<main_words[random_family_words]<<" "<<"is an adjective"<<endl;

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


                if (index > 21 & index <= 31)
                {

                    cout<<"the word:"<<" "<<main_words[random_family_words]<<" "<<"is a verb:"<<endl;

                     if (type == "verb")

                    {


                        cout<<"you are awesome. The element:"<<" "<<main_words[random_family_words]<<" "<<"is a verb"<<endl;

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

               if (index > 31 & index <= 41)


               {
                   cout<<"the word:"<<" "<<main_words[random_family_words]<<" "<<" "<<"is an adverb:"<<endl;

                    if (type == "adverb")

                    {


                        cout<<"you are awesome. The element:"<<" "<<main_words[random_family_words]<<" "<<"is an adverb"<<endl;

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

                //main_words.erase(main_words.begin() + index);
                type_user_input.clear();


            }


        //continue with the program here.

    //interactn with the user, asking for 4 strings

    vector<string> family_word1 {"noun","adjective", "verb", "adverb"};

    //it contains just one element per family word:


    //it contains all words;
    //it does not exits type:

    //this vector is organized by columns.
    //noun adjective verb adverb

    vector<string> family_word_memory {"relentlessness","relentless", "relent", "relentlessly",
                                        "accomplishment","accomplishable", "accomplish", "no adverb",
                                        "potential","potential", "potentiate", "potentially",
                                        "suspect","suspicious", "suspect", "suspiciously",
                                        "expectation","expected", "expect", "expectedly",
                                        "sharp","sharp", "sharpen", "sharply",
                                        "strength","strong", "strengthen", "strongly",
                                        "monotonousness","monotonous", "no verb", "monotonously",
                                        "fastener","fastened", "fasten", "no adverb",
                                        "stumble","stumbling", "stumble", "no adverb",
                                        "delight","
                                        ", "delight", "delightedly",
                                        "achievement", "achieve", "achievable", "no adverb",
                                        "distinctness", "distinct", "no verb", "distinctively",
                                        "jiggle", "jiggy", "jiggle", "no adverb",
                                        "resemblance", "resembling", "resemble","no adverb",
                                        "brightness", "bright","brighten","brightly",
                                        "explication", "explicable", "explicate","inexplicably",
                                        "no noun ", "quicken", "quick", "quickly",
                                        "purpose", "purpose", "purposeless", "purposeful", "purposely",
                                        "wander", "wandering", "wander", "wanderingly",
                                        "remorse", "remorseful" "remorseless", "remorse", "remorsefully" "remorselessly",
                                        "snatch", "snatchable", "snatch", "snatchingly",
                                        "tenacity", "tenacious","no verb", "tenaciously",
                                        "persuasiveness", "persuasive", "persuade" , "persuasively",
                                        "doubt", "doubt", "doubtful", "undoubtedly",
                                        "miscellany","no verb", "miscellaneous", "miscellaneously",
                                        "miser","misery","miserable", "miserly","miserably",
                                        "stubbornness", "stubborn", "no verb", "stubbornly",
                                        "no noun", "hygienic", "no verb", "hygienically",

                                        };

    auto iterator_family_words = family_word_memory.begin();
/*
    for (;iteratorMain_Words != main_words.end(); ++iteratorMain_Words)

    {
        srand(time(NULL));
       // random_family_words = rand() % 4;
       //there are just 4 elements in family_word1, so:
        random_family_word1 = rand() % 4;
*/
    for (;iterator_family_words != family_word_memory.end(); ++iterator_family_words)

    {   //it gives a random words from family_word_memory.
        srand(time(NULL));
        random_family_list = rand() % 10;


    //check the main search function:
    cout<<"\n\n";
    cout<<"***********************LETS MEMORIZE THE FAMILY WORDS*********************************"<<endl;

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
    cout<<"The position of the random word in the vector of main words is: "<<" "<<index3<<endl;


    //range for nouns, adjectives, verb and adverb.

                //noun given requires 4 loops

                if (index3 >= 0 & index3 <= 10)
                {
                cout<<"The word:"<<" "<<randonWord<<" "<<"is a noun:"<<endl;
                cout<<"The complete family word of the word:"<<family_word_memory[index2]<<" "<<"is:"<<endl;
                cout<<family_word_memory[index2]<<" , "<<family_word_memory[index2 + 1]<<" , "<<family_word_memory[index2 + 2]<<" , "<<family_word_memory[index2 + 3]<<endl;

                cout<<"\n\n";
                cout<<"***********************LETS START MEMORIZING WORDS SHALL WE********************"<<endl;

                ////noun given asked for a noun
                //this way is more methodical
                cout<<"********Digit the:"<<" "<<family_word1[0]<<"  "<<"for the word:"<<" "<<main_words[random_family_words]<<" "<<endl;
                cout<<"********if the word:"<<" "<<main_words[random_family_words]<<" "<<"does not have the element"<<" "<<family_word1[0]<<" "<<endl;
                cout<<"********please digit the word: "<<" "<<family_word1[0]<<" "<<endl;
                cout<<"********accompanied with the word no"<<" "<<"like this:"<<" "<<"no   " +  family_word1[0]<<" "<<endl;
                cout<<"********after that, please push ENTER"<<endl;

                cout<<endl;
                getline(cin, enter);
                user_input_noun.push_back(enter);

                auto iteratorUser = user_input_noun.begin();
                cout<<endl;
                cout<<"***********Did you digit the word:***\n"<<*iteratorUser<<endl;

                auto result_it = find(begin(user_input_noun), end(user_input_noun), *iteratorUser );

                if (result_it != user_input_noun.end())
                {
                //result it could be a noun, verb, adjective or adverb
                auto index = distance(user_input_noun.begin(), result_it);

                    if (user_input_noun[index] == family_word_memory[index2])

                {
                    cout<<*result_it<<endl;
                    cout<<"the position of the element in the user vector is: "<<" "<<index<<endl;
                    cout<<"****You are cunning, that words is the:"<<family_word1[0]<<"  "<<"for the word:"<<main_words[random_family_words]<<" "<<endl;

                    user_input_noun.clear();
                    system_memory_vector.clear();
                    family_word_memory.erase(family_word_memory.begin() + index2);

                     /*int points, counter = 0;

                        for (; points != 0; ++counter)

                        {
                            cin>>points;
                            cout<<"****your total points are:\n"<<counter<<endl;
                            cout<<endl;

                     */   }
                    //be sure that sharp is a noun and an adjective, so please do not remove all at once, just one by one.
                    //lets see if this removes just one time sharp
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
                //noun given asked for an adjective
                 //this way is more methodical
                cout<<"********Digit the:"<<" "<<family_word1[1]<<"  "<<"for the word:"<<" "<<main_words[random_family_words]<<" "<<endl;
                cout<<"********if the word:"<<" "<<main_words[random_family_words]<<" "<<"does not have the element"<<" "<<family_word1[1]<<" "<<endl;
                cout<<"********please digit the word: "<<family_word1[1]<<" "<<endl;
                cout<<"********accompanied with the word no"<<" "<<"like this:"<<" "<<"no    " + family_word1[1]<<" "<<endl;
                cout<<"********after that, please push ENTER"<<endl;

                cout<<endl;
                getline(cin, enter);
                user_input_adjective.push_back(enter);

                auto iteratorUser1 = user_input_adjective.begin();
                cout<<endl;
                cout<<"***********Did you digit the word:***\n"<<*iteratorUser1<<endl;

                auto result_it1 = find(begin(user_input_adjective), end( user_input_adjective), *iteratorUser1 );

                if (result_it1 !=  user_input_adjective.end())
                {
                //result it could be a noun, verb, adjective or adverb
                auto index = distance(user_input_adjective.begin(), result_it1);

                //adjective
                //The position of the randomWord in the main_words vector to find what kind of type it is

                    if (user_input_adjective[index] == family_word_memory[index2 + 1])

                    {


                        cout<<*result_it1<<endl;

                //get an index to see the position of the element
                //auto index = distance(family_word_memory.begin(), expected);

                    cout<<"the position of the element is: "<<" "<<index<<endl;



                    cout<<"****You are cunning, that words is the:"<<family_word1[1]<<"  "<<"for the:"<<main_words[random_family_words]<<" "<<endl;
                    //cout<<"****your total points are:\n"<<counter<<endl;
                    cout<<endl;
                    user_input_adjective.clear();
                    system_memory_vector.clear();
                    family_word_memory.erase(family_word_memory.begin() + index2 + 1);
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

                  ////noun given asked for a verb
                 //this way is more methodical
                cout<<"********Digit the:"<<" "<<family_word1[2]<<"  "<<"for the word:"<<" "<<main_words[random_family_words]<<" "<<endl;
                cout<<"********if the word:"<<" "<<main_words[random_family_words]<<" "<<"does not have the element"<<" "<<family_word1[0]<<" "<<endl;
                cout<<"********please digit the word: "<<family_word1[2]<<" "<<endl;
                cout<<"********accompanied with the word no"<<" "<<"like this:"<<" "<<"no    " + family_word1[0]<<" "<<endl;
                cout<<"********after that, please push ENTER"<<endl;

                cout<<endl;
                getline(cin, enter);
                user_input_verb.push_back(enter);

                auto iteratorUser2 = user_input_verb.begin();
                cout<<endl;
                cout<<"***********Did you digit the word:***\n"<<*iteratorUser2<<endl;

                auto result_verb = find(begin(user_input_verb), end(user_input_verb), *iteratorUser2 );

                if (result_verb != user_input_verb.end())
                {
                //result it could be a noun, verb, adjective or adverb
                auto index = distance(user_input_verb.begin(),result_verb);

                //verb
                //The position of the randomWord in the main_words vector to find what kind of type it is

                    if (user_input_verb[index] == family_word_memory[index2 + 2 ])

                    {


                    cout<<*result_verb<<endl;

                //get an index to see the position of the element
                //auto index = distance(family_word_memory.begin(), expected);

                    cout<<"the position of the element is: "<<" "<<index<<endl;

                    family_word_memory.erase(family_word_memory.begin() + index2 + 2);


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


                 ////noun given asked for an adverb
                //this way is more methodical
                cout<<"********Digit the:"<<" "<<family_word1[3]<<"  "<<"for the word:"<<" "<<main_words[random_family_words]<<" "<<endl;
                cout<<"********if the word:"<<" "<<main_words[random_family_words]<<" "<<"does not have the element"<<" "<<family_word1[0]<<" "<<endl;
                cout<<"********please digit the word: "<<family_word1[random_family_word1]<<" "<<endl;
                cout<<"********accompanied with the word no"<<" "<<"like this:"<<" "<<"no    " + family_word1[0]<<" "<<endl;
                cout<<"********after that, please push ENTER"<<endl;

                cout<<endl;
                getline(cin, enter);
                user_input_adverb.push_back(enter);

                auto iteratorUser3 = user_input_adverb.begin();
                cout<<endl;
                cout<<"***********Did you digit the word:***\n"<<*iteratorUser3<<endl;

                auto result_adverb = find(begin(user_input_adverb), end(user_input_adverb), *iteratorUser3 );

                if (result_adverb != user_input_adverb.end())
                {
                //result it could be a noun, verb, adjective or adverb
                auto index = distance(user_input_adverb.begin(), result_adverb);

                //noun
                //The position of the randomWord in the main_words vector to find what kind of type it is

                    if (user_input_adverb[index] == family_word_memory[index2 + 3])

                    {


                    cout<<*result_adverb<<endl;

                //get an index to see the position of the element
                //auto index = distance(family_word_memory.begin(), expected);

                    cout<<"the position of the element is: "<<" "<<index<<endl;

                    family_word_memory.erase(family_word_memory.begin() + index2 + 3);


                    int points, counter = 0;

                    for (; points !=0; ++counter)

                    {
                        cin>>points;



                    };

                    cout<<"****You are cunning, that words is the:"<<family_word1[random_family_word1]<<"  "<<"for the:"<<main_words[random_family_words]<<" "<<endl;
                    cout<<"****your total points are:\n"<<counter<<endl;
                    cout<<endl;
                    user_input_adverb.clear();
                    system_memory_vector.clear();
                    //remove(family_word_memory.begin(), family_word_memory.end(), *result_it3);


                    }
                //it removes "delightedly"
                //family_word_memory.erase( );

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


            //close the noun loop


                //adjective requires 4 loops

                if (index3 > 10 & index3 <= 21)
                {

                cout<<"the word:"<<" "<<randonWord<<" "<<"is an adjective:"<<endl;
                cout<<"The complete family words of the word:"<<family_word_memory[index2]<<" "<<"is:"<<endl;
                cout<<family_word_memory[index2-1]<<" , "<<family_word_memory[index2]<<", "<<family_word_memory[index2 + 1]<<", "<<family_word_memory[index2 + 2]<<endl;


                cout<<"\n\n";
                cout<<"***********************LETS START MEMORIZING WORDS SHALL WE********************"<<endl;

                ////adjective given asked for a noun
                //this way is more methodical
                cout<<"********Digit the:"<<" "<<family_word1[0]<<"  "<<"for the word:"<<" "<<main_words[random_family_words]<<" "<<endl;
                cout<<"********if the word:"<<" "<<main_words[random_family_words]<<" "<<"does not have the element"<<" "<<family_word1[0]<<" "<<endl;
                cout<<"********please digit the word: "<<family_word1[0]<<" "<<endl;
                cout<<"********accompanied with the word no"<<" "<<"like this:"<<" "<<"no    " + family_word1[0]<<" "<<endl;
                cout<<"********after that, please push ENTER"<<endl;

                cout<<endl;
                getline(cin, enter);
                user_input_noun.push_back(enter);

                auto iteratorUser = user_input_noun.begin();
                cout<<endl;
                cout<<"***********Did you digit the word:***\n"<<*iteratorUser<<endl;

                auto result_it = find(begin(user_input_noun), end(user_input_noun), *iteratorUser );

                if (result_it != user_input_noun.end())
                {
                //result it could be a noun, verb, adjective or adverb
                auto index = distance(user_input_noun.begin(), result_it);

                //noun
                //The position of the randomWord in the main_words vector to find what kind of type it is

                    if (user_input_noun[index] == family_word_memory[index2 - 1])

                    {

                    cout<<*result_it<<endl;

                //get an index to see the position of the element
                //auto index = distance(family_word_memory.begin(), expected);

                    cout<<"the position of the element is: "<<" "<<index<<endl;

                    family_word_memory.erase(family_word_memory.begin() + index2 - 1);


                    int points, counter = 0;

                    for (; points !=0; ++counter)

                        {
                            cin>>points;



                        }

                    cout<<"****You are cunning, that words is the:"<<family_word1[random_family_word1]<<"  "<<"for the:"<<main_words[random_family_words]<<" "<<endl;
                    cout<<"****your total points are:\n"<<counter<<endl;
                    cout<<endl;
                    user_input_noun.clear();
                    system_memory_vector.clear();
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
                //adjective given asked for an adjective
                 //this way is more methodical
                cout<<"********Digit the:"<<" "<<family_word1[1]<<"  "<<"for the word:"<<" "<<main_words[random_family_words]<<" "<<endl;
                cout<<"********if the word:"<<" "<<main_words[random_family_words]<<" "<<"does not have the element"<<" "<<family_word1[0]<<" "<<endl;
                cout<<"********please digit the word: "<<family_word1[random_family_word1]<<" "<<endl;
                cout<<"********accompanied with the word no"<<" "<<"like this:"<<" "<<"no    " + family_word1[0]<<" "<<endl;
                cout<<"********after that, please push ENTER"<<endl;

                cout<<endl;
                getline(cin, enter);
                user_input_adjective.push_back(enter);

                auto iteratorUser1 = user_input_adjective.begin();
                cout<<endl;
                cout<<"***********Did you digit the word:***\n"<<*iteratorUser1<<endl;

                auto result_it1 = find(begin(user_input_adjective), end(user_input_adjective), *iteratorUser1 );

                if (result_it1 != family_word_memory.end())
                {
                //result it could be a noun, verb, adjective or adverb
                auto index = distance(user_input_adjective.begin(), result_it1);

                //adjective
                //The position of the randomWord in the main_words vector to find what kind of type it is

                    if (user_input_adjective[index] == family_word_memory[index2])

                    {


                        cout<<*result_it1<<endl;

                //get an index to see the position of the element
                //auto index = distance(family_word_memory.begin(), expected);

                    cout<<"the position of the element is: "<<" "<<index<<endl;

                    family_word_memory.erase(family_word_memory.begin() + index2);


                    int points, counter = 0;

                    for (; points !=0; ++counter)

                    {
                        cin>>points;



                    }

                    cout<<"****You are cunning, that words is the:"<<family_word1[random_family_word1]<<"  "<<"for the:"<<main_words[random_family_words]<<" "<<endl;
                    cout<<"****your total points are:\n"<<counter<<endl;
                    cout<<endl;
                    user_input_adjective.clear();
                    system_memory_vector.clear();
                    //remove(family_word_memory.begin(), family_word_memory.end(), *result_it1);

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

                  ////adjective given asked for a verb
                 //this way is more methodical
                cout<<"********Digit the:"<<" "<<family_word1[2]<<"  "<<"for the word:"<<" "<<main_words[random_family_words]<<" "<<endl;
                cout<<"********if the word:"<<" "<<main_words[random_family_words]<<" "<<"does not have the element"<<" "<<family_word1[0]<<" "<<endl;
                cout<<"********please digit the word: "<<family_word1[random_family_word1]<<" "<<endl;
                cout<<"********accompanied with the word no"<<" "<<"like this:"<<" "<<"no    " + family_word1[0]<<" "<<endl;
                cout<<"********after that, please push ENTER"<<endl;

                cout<<endl;
                getline(cin, enter);
                user_input_verb.push_back(enter);

                auto iteratorUser2 = user_input_verb.begin();
                cout<<endl;
                cout<<"***********Did you digit the word:***\n"<<*iteratorUser2<<endl;

                auto result_it2 = find(begin(user_input_verb), end(user_input_verb), *iteratorUser2 );

                if (result_it2 != user_input_verb.end())
                {
                //result it could be a noun, verb, adjective or adverb
                auto index = distance(user_input_verb.begin(), result_it2);

                //verb
                //The position of the randomWord in the main_words vector to find what kind of type it is

                    if (user_input_verb[index] == family_word_memory[index2 + 1])

                    {


                    cout<<*result_it2<<endl;

                //get an index to see the position of the element
                //auto index = distance(family_word_memory.begin(), expected);

                    cout<<"the position of the element is: "<<" "<<index<<endl;

                    family_word_memory.erase(family_word_memory.begin() + index2 + 1);


                    int points, counter = 0;

                    for (; points !=0; ++counter)

                    {
                        cin>>points;



                    }

                    cout<<"****You are cunning, that words is the:"<<family_word1[random_family_word1]<<"  "<<"for the:"<<main_words[random_family_words]<<" "<<endl;
                    cout<<"****your total points are:\n"<<counter<<endl;
                    cout<<endl;
                    user_input_verb.clear();
                    system_memory_vector.clear();
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


                 ////adjective given asked for an adverb
                //this way is more methodical
                cout<<"********Digit the:"<<" "<<family_word1[3]<<"  "<<"for the word:"<<" "<<main_words[random_family_words]<<" "<<endl;
                cout<<"********if the word:"<<" "<<main_words[random_family_words]<<" "<<"does not have the element"<<" "<<family_word1[0]<<" "<<endl;
                cout<<"********please digit the word: "<<family_word1[random_family_word1]<<" "<<endl;
                cout<<"********accompanied with the word no"<<" "<<"like this:"<<" "<<"no    " + family_word1[0]<<" "<<endl;
                cout<<"********after that, please push ENTER"<<endl;

                cout<<endl;
                getline(cin, enter);
                user_input_adverb.push_back(enter);

                auto iteratorUser3 = user_input_adverb.begin();
                cout<<endl;
                cout<<"***********Did you digit the word:***\n"<<*iteratorUser2<<endl;

                auto result_it3 = find(begin(user_input_adverb), end(user_input_adverb), *iteratorUser3 );

                if (result_it3 != family_word_memory.end())
                {
                //result it could be a noun, verb, adjective or adverb
                auto index = distance(user_input_adverb.begin(), result_it3);

                //noun
                //The position of the randomWord in the main_words vector to find what kind of type it is

                    if (user_input_adverb[index] == family_word_memory[index2 + 2])

                    {


                    cout<<*result_it3<<endl;

                //get an index to see the position of the element
                //auto index = distance(family_word_memory.begin(), expected);

                    cout<<"the position of the element is: "<<" "<<index<<endl;

                    family_word_memory.erase(family_word_memory.begin() + index2 + 2);


                    int points, counter = 0;

                    for (; points !=0; ++counter)

                    {
                        cin>>points;



                    };

                    cout<<"****You are cunning, that words is the:"<<family_word1[random_family_word1]<<"  "<<"for the:"<<main_words[random_family_words]<<" "<<endl;
                    cout<<"****your total points are:\n"<<counter<<endl;
                    cout<<endl;
                    user_input_adverb.clear();
                    system_memory_vector.clear();
                    //remove(family_word_memory.begin(), family_word_memory.end(), *result_it3);


                    }
                //it removes "delightedly"
                //family_word_memory.erase( );

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


            //close the adjective loop
        }


                //verbs requires 4 loops

                if (index3 > 21 & index3 <= 31)
                {


                cout<<"the word:"<<" "<<randonWord<<" "<<"is a verb:"<<endl;
                cout<<"The complete family words of the word:"<<family_word_memory[index2]<<" "<<"is:"<<endl;
                cout<<family_word_memory[index2 - 2]<<" , "<<family_word_memory[index2-1]<<" , "<<family_word_memory[index2]<<" ,"<<family_word_memory[index2 + 1]<<endl;


                cout<<"\n\n";
                cout<<"***********************LETS START MEMORIZING WORDS SHALL WE********************"<<endl;

                ////verb given asked for a noun
                //this way is more methodical
                cout<<"********Digit the:"<<" "<<family_word1[0]<<"  "<<"for the word:"<<" "<<main_words[random_family_words]<<" "<<endl;
                cout<<"********if the word:"<<" "<<main_words[random_family_words]<<" "<<"does not have the element"<<" "<<family_word1[0]<<" "<<endl;
                cout<<"********please digit the word: "<<family_word1[random_family_word1]<<" "<<endl;
                cout<<"********accompanied with the word no"<<" "<<"like this:"<<" "<<"no    " + family_word1[0]<<" "<<endl;
                cout<<"********after that, please push ENTER"<<endl;

                cout<<endl;
                getline(cin, enter);
                user_input_noun.push_back(enter);

                auto iteratorUser = user_input_noun.begin();
                cout<<endl;
                cout<<"***********Did you digit the word:***\n"<<*iteratorUser<<endl;

                auto result_it = find(begin(user_input_noun), end(user_input_noun), *iteratorUser );

                if (result_it != user_input_noun.end())
                {
                //result it could be a noun, verb, adjective or adverb
                auto index = distance(user_input_noun.begin(), result_it);

                //noun
                //The position of the randomWord in the main_words vector to find what kind of type it is

                    if (user_input_noun[index] == family_word_memory[index2 - 2])

                    {


                    cout<<*result_it<<endl;
                    cout<<"the position of the element is: "<<" "<<index<<endl;

                    family_word_memory.erase(family_word_memory.begin() + index2 - 2);


                    int points, counter = 0;

                    for (; points !=0; ++counter)

                    {
                        cin>>points;


                    }

                    cout<<"****You are cunning, that words is the:"<<family_word1[0]<<"  "<<"for the:"<<main_words[random_family_words]<<" "<<endl;
                    cout<<"****your total points are:\n"<<counter<<endl;
                    cout<<endl;
                    user_input_noun.clear();
                    system_memory_vector.clear();
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
                //verb given asked for an adjective
                 //this way is more methodical
                cout<<"********Digit the:"<<" "<<family_word1[1]<<"  "<<"for the word:"<<" "<<main_words[random_family_words]<<" "<<endl;
                cout<<"********if the word:"<<" "<<main_words[random_family_words]<<" "<<"does not have the element"<<" "<<family_word1[1]<<" "<<endl;
                cout<<"********please digit the word: "<<family_word1[1]<<" "<<endl;
                cout<<"********accompanied with the word no"<<" "<<"like this:"<<" "<<"no    " + family_word1[1]<<" "<<endl;
                cout<<"********after that, please push ENTER"<<endl;

                cout<<endl;
                getline(cin, enter);
                user_input_adjective.push_back(enter);

                auto iteratorUser1 = user_input_adjective.begin();
                cout<<endl;
                cout<<"***********Did you digit the word:***\n"<<*iteratorUser1<<endl;

                auto result_it1 = find(begin(user_input_adjective), end(user_input_adjective), *iteratorUser1 );

                if (result_it != user_input_adjective.end())
                {
                //result it could be a noun, verb, adjective or adverb
                auto index = distance(user_input_adjective.begin(), result_it1);

                //adjective
                //The position of the randomWord in the main_words vector to find what kind of type it is

                    if (user_input_adjective[index] == family_word_memory[index2 - 1])

                    {


                        cout<<*result_it1<<endl;

                //get an index to see the position of the element
                //auto index = distance(family_word_memory.begin(), expected);

                    cout<<"the position of the element is: "<<" "<<index<<endl;

                    family_word_memory.erase(family_word_memory.begin() + index2 - 1);


                    int points, counter = 0;

                    for (; points !=0; ++counter)

                    {
                        cin>>points;



                    }

                    cout<<"****You are cunning, that words is the:"<<family_word1[random_family_word1]<<"  "<<"for the:"<<main_words[random_family_words]<<" "<<endl;
                    cout<<"****your total points are:\n"<<counter<<endl;
                    cout<<endl;
                    user_input_adjective.clear();
                    system_memory_vector.clear();
                    //remove(family_word_memory.begin(), family_word_memory.end(), *result_it);

                    }
                //it removes "delightedly"
                //family_word_memory.erase( );

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

                  ////verb given asked for a verb
                 //this way is more methodical
                cout<<"********Digit the:"<<" "<<family_word1[2]<<"  "<<"for the word:"<<" "<<main_words[random_family_words]<<" "<<endl;
                cout<<"********if the word:"<<" "<<main_words[random_family_words]<<" "<<"does not have the element"<<" "<<family_word1[0]<<" "<<endl;
                cout<<"********please digit the word: "<<family_word1[random_family_word1]<<" "<<endl;
                cout<<"********accompanied with the word no"<<" "<<"like this:"<<" "<<"no    " + family_word1[0]<<" "<<endl;
                cout<<"********after that, please push ENTER"<<endl;

                cout<<endl;
                getline(cin, enter);
                user_input_verb.push_back(enter);

                auto iteratorUser2 = user_input_verb.begin();
                cout<<endl;
                cout<<"***********Did you digit the word:***\n"<<*iteratorUser2<<endl;

                auto result_it2 = find(begin(user_input_verb), end(user_input_verb), *iteratorUser2 );

                if (result_it2 != user_input_verb.end())
                {
                //result it could be a noun, verb, adjective or adverb
                auto index = distance(user_input_verb.begin(), result_it2);

                //verb
                //The position of the randomWord in the main_words vector to find what kind of type it is

                    if (user_input_verb[index] == family_word_memory[index2])

                    {


                    cout<<*result_it2<<endl;

                //get an index to see the position of the element
                //auto index = distance(family_word_memory.begin(), expected);

                    cout<<"the position of the element is: "<<" "<<index<<endl;

                    family_word_memory.erase(family_word_memory.begin() + index2);


                    int points, counter = 0;

                    for (; points !=0; ++counter)

                    {
                        cin>>points;



                    }

                    cout<<"****You are cunning, that words is the:"<<family_word1[random_family_word1]<<"  "<<"for the:"<<main_words[random_family_words]<<" "<<endl;
                    cout<<"****your total points are:\n"<<counter<<endl;
                    cout<<endl;
                    user_input_verb.clear();
                    system_memory_vector.clear();
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


                 ////verb given asked for an adverb
                //this way is more methodical
                cout<<"********Digit the:"<<" "<<family_word1[3]<<"  "<<"for the word:"<<" "<<main_words[random_family_words]<<" "<<endl;
                cout<<"********if the word:"<<" "<<main_words[random_family_words]<<" "<<"does not have the element"<<" "<<family_word1[0]<<" "<<endl;
                cout<<"********please digit the word: "<<family_word1[random_family_word1]<<" "<<endl;
                cout<<"********accompanied with the word no"<<" "<<"like this:"<<" "<<"no    " + family_word1[0]<<" "<<endl;
                cout<<"********after that, please push ENTER"<<endl;

                cout<<endl;
                getline(cin, enter);
                user_input_adverb.push_back(enter);

                auto iteratorUser3 = user_input_adverb.begin();
                cout<<endl;
                cout<<"***********Did you digit the word:***\n"<<*iteratorUser3<<endl;

                auto result_it3 = find(begin(user_input_adverb), end(user_input_adverb), *iteratorUser3 );

                if (result_it3 != family_word_memory.end())
                {
                //result it could be a noun, verb, adjective or adverb
                auto index = distance(user_input_adverb.begin(), result_it3);

                //noun
                //The position of the randomWord in the main_words vector to find what kind of type it is

                    if (user_input_adverb[index] == family_word_memory[index2 + 1])

                    {


                    cout<<*result_it3<<endl;

                //get an index to see the position of the element
                //auto index = distance(family_word_memory.begin(), expected);

                    cout<<"the position of the element is: "<<" "<<index<<endl;

                    family_word_memory.erase(family_word_memory.begin() + index2 + 1);


                    int points, counter = 0;

                    for (; points !=0; ++counter)

                    {
                        cin>>points;



                    }

                    cout<<"****You are cunning, that words is the:"<<family_word1[random_family_word1]<<"  "<<"for the:"<<main_words[random_family_words]<<" "<<endl;
                    cout<<"****your total points are:\n"<<counter<<endl;
                    cout<<endl;
                    user_input_adverb.clear();
                    system_memory_vector.clear();
                    //remove(family_word_memory.begin(), family_word_memory.end(), *result_it3);


                    }
                //it removes "delightedly"
                //family_word_memory.erase( );

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


            //close the verb loop
        }


            //adverbs requires 4 questions:

               if (index3 > 31 & index3 <= 41)


               {

                cout<<"the word:"<<" "<<randonWord<<" "<<"is an adverb:"<<endl;
                cout<<"The complete family words of the word:"<<family_word_memory[index2]<<" "<<"are:"<<endl;
                cout<<family_word_memory[index2 - 3]<<" ,"<<family_word_memory[index2 - 2]<<" ,"<<family_word_memory[index2 - 1]<<" ,"<<family_word_memory[index2]<<endl;


                cout<<"\n\n";
                cout<<"***********************LETS START MEMORIZING WORDS SHALL WE********************"<<endl;

                //this randomize everything

               /* cout<<"********Digit the:"<<" "<<family_word1[random_family_word1]<<"  "<<"for the word:"<<" "<<main_words[random_family_words]<<" "<<endl;
                cout<<"********if the word:"<<" "<<main_words[random_family_words]<<" "<<"does not have the element"<<" "<<family_word1[random_family_word1]<<" "<<endl;
                cout<<"********please digit the word: "<<family_word1[random_family_word1]<<" "<<endl;
                cout<<"********accompanied with the word no"<<" "<<"like this:"<<" "<<"no    " + family_word1[random_family_word1]<<" "<<endl;
                cout<<"********after that, please push ENTER"<<endl;
                */


                //given adverb asked for a noun
                //this way is more methodical
                cout<<"********Digit the:"<<" "<<family_word1[0]<<"  "<<"for the word:"<<" "<<main_words[random_family_words]<<" "<<endl;
                cout<<"********if the word:"<<" "<<main_words[random_family_words]<<" "<<"does not have the element"<<" "<<family_word1[0]<<" "<<endl;
                cout<<"********please digit the word: "<<family_word1[0]<<" "<<endl;
                cout<<"********accompanied with the word no"<<" "<<"like this:"<<" "<<"no    " + family_word1[0]<<" "<<endl;
                cout<<"********after that, please push ENTER"<<endl;

                cout<<endl;
                getline(cin, enter);
                user_input_noun.push_back(enter);

                auto iteratorUser = user_input_noun.begin();
                cout<<endl;
                cout<<"***********Did you digit the word:***\n"<<*iteratorUser<<endl;

                auto result_it = find(begin(user_input_noun), end(user_input_noun), *iteratorUser );

                if (result_it != user_input_noun.end())
                {
                //result it could be a noun, verb, adjective or adverb
                auto index = distance(user_input_noun.begin(), result_it);

                //noun
                //The position of the randomWord in the main_words vector to find what kind of type it is

                    if (user_input_noun[index] == family_word_memory[index2 - 3])

                    {


                    cout<<*result_it<<endl;

                //get an index to see the position of the element
                //auto index = distance(family_word_memory.begin(), expected);

                    cout<<"the position of the element is: "<<" "<<index<<endl;




                    int points, counter = 0;

                    for (; points !=0; ++counter)

                    {
                        cin>>points;

                    }

                    cout<<"****You are cunning, that words is the:"<<family_word1[0]<<"  "<<"for the:"<<main_words[random_family_words]<<" "<<endl;
                    cout<<"****your total points are:\n"<<counter<<endl;
                    cout<<endl;
                    user_input_noun.clear();
                    system_memory_vector.clear();
                    family_word_memory.erase(family_word_memory.begin() + index2 - 3);
                   // remove(family_word_memory.begin(), family_word_memory.end(), *result_it);


                    }
                //it removes "delightedly"
                //family_word_memory.erase( );

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
                //given an adverb asked for an adjective
                 //this way is more methodical
                cout<<"********Digit the:"<<" "<<family_word1[1]<<"  "<<"for the word:"<<" "<<main_words[random_family_words]<<" "<<endl;
                cout<<"********if the word:"<<" "<<main_words[random_family_words]<<" "<<"does not have the element"<<" "<<family_word1[0]<<" "<<endl;
                cout<<"********please digit the word: "<<family_word1[random_family_word1]<<" "<<endl;
                cout<<"********accompanied with the word no"<<" "<<"like this:"<<" "<<"no    " + family_word1[0]<<" "<<endl;
                cout<<"********after that, please push ENTER"<<endl;

                cout<<endl;
                getline(cin, enter);
                user_input_adjective.push_back(enter);

                auto iteratorUser1 = user_input_adjective.begin();
                cout<<endl;
                cout<<"***********Did you digit the word:***\n"<<*iteratorUser1<<endl;

                auto result_it1 = find(begin( user_input_adjective), end( user_input_adjective), *iteratorUser1 );

                if (result_it1 !=  user_input_adjective.end())
                {
                //result it could be a noun, verb, adjective or adverb
                auto index = distance( user_input_adjective.begin(), result_it1);

                //adjective
                //The position of the randomWord in the main_words vector to find what kind of type it is

                    if (user_input_adjective[index] == family_word_memory[index2 - 2])

                    {


                        cout<<*result_it1<<endl;

                //get an index to see the position of the element
                //auto index = distance(family_word_memory.begin(), expected);

                    cout<<"the position of the element is: "<<" "<<index<<endl;

                    family_word_memory.erase(family_word_memory.begin() + index2 - 2);


                    int points, counter = 0;

                    for (; points !=0; ++counter)

                    {
                        cin>>points;



                    };

                    cout<<"****You are cunning, that words is the:"<<family_word1[random_family_word1]<<"  "<<"for the:"<<main_words[random_family_words]<<" "<<endl;
                    cout<<"****your total points are:\n"<<counter<<endl;
                    cout<<endl;
                    user_input_adjective.clear();
                    system_memory_vector.clear();
                    //remove(family_word_memory.begin(), family_word_memory.end(), *result_it1);

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

                  //Given an adverb askerd for a verb
                 //this way is more methodical
                cout<<"********Digit the:"<<" "<<family_word1[2]<<"  "<<"for the word:"<<" "<<main_words[random_family_words]<<" "<<endl;
                cout<<"********if the word:"<<" "<<main_words[random_family_words]<<" "<<"does not have the element"<<" "<<family_word1[0]<<" "<<endl;
                cout<<"********please digit the word: "<<family_word1[random_family_word1]<<" "<<endl;
                cout<<"********accompanied with the word no"<<" "<<"like this:"<<" "<<"no    " + family_word1[0]<<" "<<endl;
                cout<<"********after that, please push ENTER"<<endl;

                cout<<endl;
                getline(cin, enter);
                user_input_verb.push_back(enter);

                auto iteratorUser2 = user_input_verb.begin();
                cout<<endl;
                cout<<"***********Did you digit the word:***\n"<<*iteratorUser2<<endl;

                auto result_it2 = find(begin( user_input_verb), end( user_input_verb), *iteratorUser2 );

                if (result_it2 !=  user_input_verb.end())
                {
                //result it could be a noun, verb, adjective or adverb
                auto index = distance( user_input_verb.begin(), result_it2);

                //verb
                //The position of the randomWord in the main_words vector to find what kind of type it is

                    if (user_input_verb[index] == family_word_memory[index2 - 1])

                    {


                    cout<<*result_it2<<endl;

                //get an index to see the position of the element
                //auto index = distance(family_word_memory.begin(), expected);

                    cout<<"the position of the element is: "<<" "<<index<<endl;

                    family_word_memory.erase(family_word_memory.begin() + index2 - 1);


                    int points, counter = 0;

                    for (; points !=0; ++counter)

                    {
                        cin>>points;



                    }

                    cout<<"****You are cunning, that words is the:"<<family_word1[random_family_word1]<<"  "<<"for the:"<<main_words[random_family_words]<<" "<<endl;
                    cout<<"****your total points are:\n"<<counter<<endl;
                    cout<<endl;
                    user_input_verb.clear();
                    system_memory_vector.clear();
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


                 //Given an adverb asked for a adverb
                //this way is more methodical
                cout<<"********Digit the:"<<" "<<family_word1[3]<<"  "<<"for the word:"<<" "<<main_words[random_family_words]<<" "<<endl;
                cout<<"********if the word:"<<" "<<main_words[random_family_words]<<" "<<"does not have the element"<<" "<<family_word1[0]<<" "<<endl;
                cout<<"********please digit the word: "<<family_word1[random_family_word1]<<" "<<endl;
                cout<<"********accompanied with the word no"<<" "<<"like this:"<<" "<<"no    " + family_word1[0]<<" "<<endl;
                cout<<"********after that, please push ENTER"<<endl;

                cout<<endl;
                getline(cin, enter);
                user_input_adverb.push_back(enter);

                auto iteratorUser3 = user_input_adverb.begin();
                cout<<endl;
                cout<<"***********Did you digit the word:***\n"<<*iteratorUser3<<endl;

                auto result_it3 = find(begin(user_input_adverb), end(user_input_adverb), *iteratorUser3 );

                if (result_it3 != user_input_adverb.end())
                {
                //result it could be a noun, verb, adjective or adverb
                auto index = distance(user_input_adverb.begin(), result_it3);

                //noun
                //The position of the randomWord in the main_words vector to find what kind of type it is

                    if (user_input_adverb[index] == family_word_memory[index2])

                    {


                    cout<<*result_it3<<endl;

                //get an index to see the position of the element
                //auto index = distance(family_word_memory.begin(), expected);

                    cout<<"the position of the element is: "<<" "<<index<<endl;

                    family_word_memory.erase(family_word_memory.begin() + index2);


                    int points, counter = 0;

                    for (; points !=0; ++counter)

                    {
                        cin>>points;



                    }

                    cout<<"****You are cunning, that words is the:"<<family_word1[random_family_word1]<<"  "<<"for the:"<<main_words[random_family_words]<<" "<<endl;
                    cout<<"****your total points are:\n"<<counter<<endl;
                    cout<<endl;
                    user_input_adverb.clear();
                    system_memory_vector.clear();
                   //remove(family_word_memory.begin(), family_word_memory.end(), *result_it3);


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


            //close the adverb loop
            }

    cout<<"**********You are cunning, the words belongs to the family word of the word:\n"<<*iteratorMain_Words<<endl;
    cout<<"***********YOU HAVE SURPASSED THE MACHINE******YOU WIN!**************************"<<endl;


    }

    }

    }







