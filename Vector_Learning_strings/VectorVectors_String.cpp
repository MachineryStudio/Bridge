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

using namespace std;


void start()

   {

    cout<<"***********************************************************************\n";
    cout<<"*******************ENGLISH MEMORY RANDOM SPAN**************************\n";
    cout<<"**************POLYMORPHIC STUDIOS CANADA By Andre Ramiers 2018@**************" <<endl;
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


int main ()

{

    int randomTypes;
    int randomTypeVectors;
    int randomTypeVectors2;
    start();

    string type;

    vector<string>type_user_input(0);



    //vector of the vector just to compare the user input.
    vector <vector <string>> allWords(0);

    vector<string> types { "noun", "adjective", "verb", "adverb"};

    vector<string> nouns {"relentlessness", "accomplishment", "potential" };

    vector<string> nouns2 {"no", "accomplice", "potency"};

    //vector<string> adjectives {"relentless", "accomplishable", "potential"};

    //vector<string> adjectives2 {"no second adjective", "accomplished", "potent" };

    //"achievable", "distinctive", "hygienic", "miscellanYikes, Houston we got a problem. Please restart the programeous", "stubborn","tenacious", "monotonous", "fasten", "miserly", "delighted", "potential"};

    //verbs in infinitives
    //vector<string> verbs {"relent", "accomplish", "potentiate"};

    //"resemble", "brighten", "explicate","quicken", "purpose", "wander", "remorse", "snatch", "persuade","doubtful", jiggle};
    //verbs in singular person
    //vector<string> verbs2 {"relents", "accomplishes","potentiates" };
    //verbs in past simple + past participle
    //vector<string> verbs3 {"relented", "accomplished", "potentiated" };
    //verbs in continuous
    //vector<string> verbs4 {"relenting", "accomplishing", "potentiating" };

    //vector<string> adverbs {"relentlessly", "no adverb" , "potentially"};
    //"expectedly", "delightedly", "purposely","purposelessly", "inexplicably", "monotonously", "distinctively", "strongly"};


    allWords.push_back(nouns);
    allWords.push_back(nouns2);

    /*allWords.push_back(adjectives);
    allWords.push_back(adjectives2);
    allWords.push_back(verbs);
    allWords.push_back(verbs2);
    allWords.push_back(verbs3);
    allWords.push_back(verbs4);
    allWords.push_back(adverbs);
*/

 //this vector contains all the possible random words. Not including no word.
 //When randomly find a position with no, make an signal for the user "restart the program"
    vector <vector<string>> allCorrectWords(0);

    vector<string> nouns_correct {"relentlessness", "accomplishment", "potential" };

    vector<string> nouns2_correct {"Yikes, Houston we got a problem. Please restart the program", "accomplice", "potency"};


    /*
    vector<string> adjectives_correct {"relentless", "accomplishable", "potential"};

    vector<string> adjectives2_correct { "Yikes, start the program", "accomplished", "potent" };

    //"achievable", "distinctive", "hygienic", "miscellaneous", "stubborn","tenacious", "monotonous", "fasten", "miserly", "delighted", "potential"};

    //verbs in infinitives
    vector<string> verbs_correct {"relent", "accomplish", "potentiate"};

    //"resemble", "brighten", "explicate","quicken", "purpose", "wander", "remorse", "snatch", "persuade","doubtful", jiggle};
    //verbs in singular person
    vector<string> verbs2_correct {"relents", "accomplishes","potentiates" };
    //verbs in past simple + past participle
    vector<string> verbs3_correct {"relented", "accomplished", "potentiated" };
    //verbs in continuous
    vector<string> verbs4_correct {"relenting", "accomplishing", "potentiating" };

    vector<string> adverbs_correct {"relentlessly","Yikes, start the program", "potentially"};

*/

    allCorrectWords.push_back(nouns_correct);
    allCorrectWords.push_back(nouns2_correct);

  /*
    allCorrectWords.push_back(adjectives_correct);
    allCorrectWords.push_back(adjectives2_correct);
    allCorrectWords.push_back(verbs_correct);
    allCorrectWords.push_back(verbs2_correct);
    allCorrectWords.push_back(verbs3_correct);
    allCorrectWords.push_back(verbs4_correct);
    allCorrectWords.push_back(adverbs_correct);

*/
    cout<<"******************THIS IS THE MANAGER AREA WHICH IS CRUCIAL"<<endl;
    cout<<"******************DTO MEMORY THE LIST OF THE WORDS"<<endl;
    cout<<endl;
    cout<<endl;

    //cout<< "THE AMOUNT OF ELEMENT NOUNS IS:"<<" "<<nouns.size()<<endl;
    //cout<< "THE AMOUNT OF SECOND ELEMENT NOUNS IS:"<<" "<<nouns2.size()<<endl;
    //cout<< "THE AMOUNT OF ELEMENT ADJECTIVE IS:"<<" "<<adjectives.size()<<endl;
    //cout<< "THE AMOUNT OF SECOND ELEMENT ADJECTIVE IS:"<<" "<<adjectives2.size()<<endl;
    //cout<< "THE AMOUNT OF ELEMENT VERB IN A INFINITIVE FORM IS:"<<" "<<verbs.size()<<endl;
    //cout<< "THE AMOUNT OF ELEMENT VERB IN A SINGLE PERSON FORM IS:"<<" "<<verbs2.size()<<endl;
    //cout<< "THE AMOUNT OF ELEMENT VERB IN THE PAST SIMPLE AND PAST PARTICIPLE FORM IS:"<<" "<<verbs3.size()<<endl;
    //cout<< "THE AMOUNT OF ELEMENT VERB IN THE CONTINUOUS FORM IS:"<<" "<<verbs4.size()<<endl;
    //cout<< "THE AMOUNT OF ELEMENT ADVERB IS"<<" "<<adverbs.size()<<endl;

    //THIS PART IS TO SHOW THE STUDENT THE LIST OF THE NOUNS, ADJECTIVES, VERBS AND ADVERBS

/*
    for (int i = 0; i < allCorrectWords.size(); i++)

    {
    for (int j = 0; j <allCorrectWords[i].size(); j++)


    {
        // cout<<"THE LIST OF YOUR NEW VOCABULARY IS:"<<endl;
       // cout<<"{"<<allCorrectWords[i][j]<<" "<<"}"<<endl;
        //the size of number of character of each elements
        //cout<<allWords[i][j].size()<<endl;
        //how many elements the vector has 4 vectors.
        //cout<<allWords.size()<<endl;

        //it is relentlessness
        //vectpr of nouns
       //cout<<allWords[0][j]<<endl;
       //vector of adjectives
        //cout<<allWords[1][j]<<endl;

        //cout<<allWords[0][1]<<endl;
        //it is relentlessness
        //cout<<allWords[1][0]<<endl;
      //  auto result_it = find(begin(allWords[i][j]), end(allWords[i][j]), allWords[randomTypeVectors][randomTypeVectors2]);

      //  }

    }


}

*/
    //randomize the vector of the vector allCorrectWords
    //the size of the vector of the vector is 4 vectors

    auto iteratorVectorVectors = allCorrectWords.begin();


    for (;iteratorVectorVectors != allCorrectWords.end(); ++iteratorVectorVectors)
    {

        srand(time(NULL));
       // random_family_words = rand() % 4;
       //there are just 4 elements in family_word1, so:
        randomTypeVectors = rand() % allCorrectWords.size();
        randomTypeVectors2 =rand() % 3;



       //randomize the types

    auto iteratorMain_Words = types.begin();

     for (;iteratorMain_Words != types.end(); ++iteratorMain_Words)

    {
        srand(time(NULL));
       // random_family_words = rand() % 4;
       //there are just 4 elements in family_word1, so:
        randomTypes= rand() % types.size();



    cout<<"THE FIRST RANDOM WORD IS:"<<allCorrectWords[randomTypeVectors][randomTypeVectors2]<<endl;

    auto result_it = find(begin(nouns), end(nouns), allCorrectWords[randomTypeVectors][randomTypeVectors2]);
    auto result_it8 = find(begin(nouns2), end(nouns2), allCorrectWords[randomTypeVectors][randomTypeVectors2]);

/*
    auto result_it2 = find(begin(adjectives), end(adjectives), allCorrectWords[randomTypeVectors][randomTypeVectors2]);
    auto result_it9 = find(begin(adjectives2), end(adjectives2), allCorrectWords[randomTypeVectors][randomTypeVectors2]);
    auto result_it3 = find(begin(verbs), end(verbs), allCorrectWords[randomTypeVectors][randomTypeVectors2]);
    auto result_it5 = find(begin(verbs2), end(verbs2), allCorrectWords[randomTypeVectors][randomTypeVectors2]);
    auto result_it6 = find(begin(verbs3), end(verbs3), allCorrectWords[randomTypeVectors][randomTypeVectors2]);
    auto result_it7 = find(begin(verbs4), end(verbs4), allCorrectWords[randomTypeVectors][randomTypeVectors2]);
    auto result_it4 = find(begin(adverbs), end(adverbs), allCorrectWords[randomTypeVectors][randomTypeVectors2]);
*/
    auto index = distance(nouns.begin(), result_it);
    auto index8 = distance(nouns2.begin(), result_it8);
/*
    auto index2 = distance(adjectives.begin(), result_it2);
    auto index9 = distance(adjectives2.begin(), result_it9);

    auto index3 = distance(verbs.begin(), result_it3);

    auto index5 = distance(verbs2.begin(), result_it5);
    auto index6 = distance(verbs3.begin(), result_it6);
    auto index7 = distance(verbs4.begin(), result_it7);

    auto index4 = distance(adverbs.begin(), result_it4);
*/

    //if It the random word is on the vector nouns or s2
     if (result_it != nouns.end())

        {
            cout<<"THE POSITION OF THE ELEMENT IF IT IS IN THE VECTOR NOUNS1 IS : "<<" "<<index<<endl;
            cout<<"THE WORD:"<<" "<< allCorrectWords[randomTypeVectors][randomTypeVectors2]<<" "<<"IS A NOUN"<<endl;
            cout<<"THE COMPLETE FAMILY WORD OF THE WORD:"<<" "<<*result_it<<" "<<"IS:"<<endl;
            cout<<nouns[index]<<" "<<nouns2[index]<<endl;
            //cout<<adjectives[index]<<" "<<adjectives2[index]<<endl;
           // cout<<verbs[index]<<" "<<verbs2[index]<<" "<<verbs3[index]<<" "<<verbs4[index]<<endl;
            //cout<<adverbs[index]<<endl;

            cout<<"\n\n";
            cout<<"***********************LETS START THE ENGLISH MEMORY SPAN GAME SHALL WE********************"<<endl;


            cout<<"***********WHAT KIND OF WORD IS:"<<" "<<allCorrectWords[randomTypeVectors][randomTypeVectors2]<<""<<endl;

            getline(cin, type);
            type_user_input.push_back(type);

            int points = 0;

                    if (type == "noun")

                    {

                        cout<<"YOU ARE AWESOME, THE ELEMENT:"<<" "<<allCorrectWords[randomTypeVectors][randomTypeVectors2]<<"IS A NOUN"<<endl;
                        cout<<endl;
                        cout<<endl;

                        cout<<"PLEASE DIGIT THE COMPLETE FAMILY WORD FOR THE WORD:"<<" "<<allCorrectWords[randomTypeVectors][randomTypeVectors2]<<endl;
                        cout<<"\n\n";
                        cout<<"\n\n";



                        cout<<"***********************DIGITS THE SECOND NOUN FOR THE WORD:"<<" "<<allCorrectWords[randomTypeVectors][randomTypeVectors2]<<endl;
                        cout<<"\n\n";

                        type_user_input.clear();

                        string answer1;
                        getline(cin, answer1);
                        type_user_input.push_back(answer1);

                        auto iteratorAnswer = type_user_input.begin();

                        cout<<"****************YOU HAVE DIGIT THE WORD**********:"<<" "<<*iteratorAnswer<<endl;

                        cout<<"****************YOU HAVE DIGIT THE WORD**********:"<<" "<<type_user_input[0]<<endl;


                        if (type_user_input[0] == nouns2[index])

                      {


                        points++;

                        cout<<"**********YOU ARE CUNNING, THE WORD BELONGS TO THE FAMILY WORD OF:\n"<<allCorrectWords[randomTypeVectors][randomTypeVectors2]<<endl;
                        cout<<"***********YOUR TOTAL POINTS ARE:\n"<<points++<<endl;

                        //allWords.erase(allWords.begin()+ index);


                      }


                    else // WHEN THE NOUNS DO NOT COINCIDE.
                        {

                        cout<<endl;
                        cout<<endl;

                        cout<<"***********YOU CANNOT DEFEAT ME!" "\n"<<endl;
                        cout<<"******************YOU LOSE*********"<<endl;
                        return 0;

                        }
                    }

                        else //WHEN NOT TYPING A CORRECT TYPE OF FAMILY WORD

                        {
                        cout<<endl;
                        cout<<endl;

                       cout<<"***********YOU TYPED A WRONG TYPE OF WORD!" "\n"<<endl;
                        cout<<"***********YOU CANNOT DEFEAT ME!" "\n"<<endl;
                        cout<<"******************YOU LOSE*********"<<endl;
                        return 0;


                        }



                        //erase them from being called again from the vector of the allCorrectWords.
                        //nouns_correct.erase(nouns.begin() + index);
                        //nouns2_correct.erase(nouns2.begin() + index8);

                    }



       if (result_it8 != nouns2.end())

       {


        cout<<"THE POSITION OF THE ELEMENT IF IT IS IN THE VECTOR NOUNS2 IS : "<<" "<<index8<<endl;
        cout<<"THE WORD:"<<" "<< allCorrectWords[randomTypeVectors][randomTypeVectors2]<<" "<<"IS A NOUN"<<endl;
        cout<<"THE COMPLETE FAMILY WORD OF THE WORD:"<<" "<<*result_it8<<"IS:"<<endl;
        cout<<nouns[index8]<<" "<<nouns2[index8]<<endl;
       // cout<<adjectives[index8]<<" "<<adjectives2[index8]<<endl;
        //cout<<verbs[index8]<<" "<<verbs2[index8]<<" "<<verbs3[index8]<<" "<<verbs4[index8]<<endl;
        //cout<<adverbs[index8]<<endl;

   //erase the words from the vector allCorrectWords to not being called back again
    //allCorrectWords.erase(allWords.begin()+ index8);
    //allCorrectWords.erase(allWords.begin()+ index);
        cout<<"\n\n";
        cout<<"***********************LETS START THE ENGLISH MEMORY SPAN GAME SHALL WE********************"<<endl;


            cout<<"***********WHAT KIND OF WORD IS:"<<" "<<allCorrectWords[randomTypeVectors][randomTypeVectors2]<<""<<endl;

            getline(cin, type);
            type_user_input.push_back(type);

            int points = 0;

                    if (type == "noun")

                    {

                        cout<<"YOU ARE AWESOME, THE ELEMENT:"<<" "<<allCorrectWords[randomTypeVectors][randomTypeVectors2]<<"IS A NOUN"<<endl;
                        cout<<endl;
                        cout<<endl;

                        cout<<"PLEASE DIGIT THE COMPLETE FAMILY WORD FOR THE WORD:"<<" "<<allCorrectWords[randomTypeVectors][randomTypeVectors2]<<endl;
                        cout<<"\n\n";
                        cout<<"\n\n";



                        cout<<"***********************DIGITS ANOTHER NOUN FOR THE WORD:"<<" "<<allCorrectWords[randomTypeVectors][randomTypeVectors2]<<endl;
                        cout<<"\n\n";

                        //you must clean the user's vector
                        type_user_input.clear();

                        string answer1;
                        getline(cin, answer1);
                        type_user_input.push_back(answer1);
                        auto iteratorAnswer = type_user_input.begin();

                        cout<<"****************YOU HAVE DIGIT THE WORD**********:"<<" "<<*iteratorAnswer<<endl;



                        if (type_user_input[0] == nouns[index8])
                      {


                        cout<<"**********YOU ARE CUNNING, THE WORD BELONGS TO THE FAMILY WORD OF:\n"<<allCorrectWords[randomTypeVectors][randomTypeVectors2]<<endl;
                        cout<<"***********YOUR TOTAL POINTS ARE:\n"<<points++<<endl;

                        //allWords.erase(allWords.begin()+ index8);



                      }

                    }
                           else // WHEN THE NOUNS DO NOT COINCIDE.
                        {

                        cout<<endl;
                        cout<<endl;

                        cout<<"***********YOU CANNOT DEFEAT ME!" "\n"<<endl;
                        cout<<"******************YOU LOSE*********"<<endl;
                        return 0;

                        }


                    }

                        else //WHEN NOT TYPING A CORRECT TYPE OF FAMILY WORD

                        {
                        cout<<endl;
                        cout<<endl;

                        cout<<"***********YOU TYPED A WRONG TYPE OF WORD!" "\n"<<endl;
                        cout<<"***********YOU CANNOT DEFEAT ME!" "\n"<<endl;
                        cout<<"******************YOU LOSE*********"<<endl;
                        return 0;


                        }

                        //erase them from being called again from the vector of the allCorrectWords.
                        //nouns_correct.erase(nouns.begin() + index);
                        //nouns2_correct.erase(nouns2.begin() + index8);






            }

        }
}

        /*

            //if It the random word is on the vector nouns or nouns2
     if (result_it2 != adjectives.end())

        {
           cout<<"THE POSITION OF THE ELEMENT IF IT IS IN THE VECTOR ADJECTIVES IS : "<<" "<<index2<<endl;
           cout<<"THE WORD:"<<" "<< allCorrectWords[randomTypeVectors][randomTypeVectors2]<<" "<<"IS AN ADJECTIVE"<<endl;
           cout<<"THE COMPLETE FAMILY WORD OF THE WORD:"<<" "<<allCorrectWords[randomTypeVectors][randomTypeVectors2]<<" "<<"IS:"<<endl;
           cout<<nouns[index2]<<" "<<nouns2[index2]<<endl;
           cout<<adjectives[index2]<<" "<<adjectives2[index2]<<endl;
           cout<<verbs[index2]<<" "<<verbs2[index2]<<" "<<verbs3[index2]<<""<<verbs4[index2]<<endl;
           cout<<adverbs[index2]<<endl;


            cout<<"\n\n";
            cout<<"\n\n";
            cout<<"\n\n";
            cout<<"***********************LETS START THE ENGLISH MEMORY SPAN GAME SHALL WE********************"<<endl;
            cout<<"***********WHAT KIND OF WORD IS:"<<" "<<allCorrectWords[randomTypeVectors][randomTypeVectors2]<<""<<endl;

            getline(cin, type);
            type_user_input.push_back(type);



                    if (type == "adjective")

                    {

                        cout<<"YOU ARE AWESOME, THE ELEMENT:"<<" "<<allCorrectWords[randomTypeVectors][randomTypeVectors2]<<"IS AN ADJECTIVE"<<endl;

                        cout<<endl;
                        cout<<endl;

                        cout<<"PLEASE DIGIT THE COMPLETE FAMILY WORD FOR THE WORD:"<<" "<<allCorrectWords[randomTypeVectors][randomTypeVectors2]<<endl;
                        cout<<"\n\n";
                        cout<<"\n\n";
                        cout<<"***********************DIGITS THE FIRST ADJECTIVE FOR THE WORD:"<<" "<<allCorrectWords[randomTypeVectors][randomTypeVectors2]<<endl;
                        cout<<"\n\n";


                        type_user_input.clear();

                        string answer1, answer2;
                        getline(cin, answer1);
                        getline(cin, answer2);
                        type_user_input.push_back(answer1);
                        type_user_input.push_back(answer2);
                        //auto iteratorName = user_name.begin();
                        //auto iteratorName1 = user_name.begin();
                        //advance(iteratorName1, 1);


                        //equal the only element in the user's vector with vectors nouns (nouns and noun2) first elements of the vectors.
                        //the user can must type both nouns to pass through.
                        if (type_user_input[0] == adjectives[index2]  || type_user_input[1] == adjectives2[index9] && type_user_input[0] == adjectives[index2]  || type_user_input[1] == adjectives2[index9] )

                      {


                        for (int points = 0; points < 1; points++)
                        {


                        cout<<"**********YOU ARE CUNNING, THE WORD BELONGS TO THE FAMILY WORD OF:\n"<<allCorrectWords[randomTypeVectors][randomTypeVectors2]<<endl;
                        cout<<"***********YOUR TOTAL POINTS ARE:\n"<<++points<<endl;

                        //erase them from being called again from the vector of the allCorrectWords.
                        adjectives_correct.erase(adjectives.begin() + index2);
                        adjectives2_correct.erase(adjectives2.begin() + index9);

                        }

                      }

                    else
                        {

                        cout<<endl;
                        cout<<endl;

                        cout<<"***********YOU CANNOT DEFEAT ME!" "\n"<<endl;
                        cout<<"******************YOU LOSE*********"<<endl;
                        return 0;
                        }



                      }


                       else
        {

    //cout<<"THE RANDOM WORD:"<<" "<<allCorrectWords[randomTypeVectors][randomTypeVectors2]<<" "<<"IS NO A VERB IN A INFINITIVE FORM"<<endl;
                        cout<<endl;
                        cout<<endl;

                        cout<<"***********YOU CANNOT DEFEAT ME!" "\n"<<endl;
                        cout<<"******************YOU LOSE*********"<<endl;
                        return 0;

        }


        }


        if (result_it9 != adjectives2.end())

        {


        cout<<"THE POSITION OF THE ELEMENT IF IT IS IN THE VECTOR ADJECTIVES IS : "<<" "<<index9<<endl;
        cout<<"THE WORD:"<<" "<< allCorrectWords[randomTypeVectors][randomTypeVectors2]<<" "<<"IS AN ADJECTIVE"<<endl;
        cout<<"THE COMPLETE FAMILY WORD OF THE WORD:"<<" "<<allCorrectWords[randomTypeVectors][randomTypeVectors2]<<" "<<"IS:"<<endl;
        cout<<nouns[index9]<<" "<<nouns2[index9]<<endl;
        cout<<adjectives[index9]<<" "<<adjectives2[index9]<<endl;
        cout<<verbs[index9]<<" "<<verbs2[index9]<<" "<<verbs3[index9]<<""<<verbs4[index9]<<endl;
        cout<<adverbs[index9]<<endl;;


        cout<<"\n\n";
        cout<<"\n\n";
        cout<<"\n\n";
        cout<<"***********************LETS START THE ENGLISH MEMORY SPAN GAME SHALL WE********************"<<endl;
        cout<<"***********WHAT KIND OF WORD IS:"<<" "<<allCorrectWords[randomTypeVectors][randomTypeVectors2]<<""<<endl;

            getline(cin, type);
            type_user_input.push_back(type);



                    if (type == "adjective")

                    {

                        cout<<"YOU ARE AWESOME, THE ELEMENT:"<<" "<<allCorrectWords[randomTypeVectors][randomTypeVectors2]<<"IS AN ADJECTIVE"<<endl;

                        cout<<endl;
                        cout<<endl;

                        cout<<"PLEASE DIGIT THE COMPLETE FAMILY WORD FOR THE WORD:"<<" "<<allCorrectWords[randomTypeVectors][randomTypeVectors2]<<endl;
                        cout<<"\n\n";
                        cout<<"\n\n";
                        cout<<"***********************DIGITS THE FIRST ADJECTIVE FOR THE WORD:"<<" "<<allCorrectWords[randomTypeVectors][randomTypeVectors2]<<endl;
                        cout<<"\n\n";


                        type_user_input.clear();

                        string answer1, answer2;
                        getline(cin, answer1);
                        getline(cin, answer2);
                        type_user_input.push_back(answer1);
                        type_user_input.push_back(answer2);
                        //auto iteratorName = user_name.begin();
                        //auto iteratorName1 = user_name.begin();
                        //advance(iteratorName1, 1);


                        //equal the only element in the user's vector with vectors nouns (nouns and noun2) first elements of the vectors.
                        //the user can must type both nouns to pass through.
                        if (type_user_input[0] == adjectives[index2]  || type_user_input[1] == adjectives2[index9] && type_user_input[0] == adjectives[index2]  || type_user_input[1] == adjectives2[index9] )

                      {


                        for (int points = 0; points < 1; points++)
                        {


                        cout<<"**********YOU ARE CUNNING, THE WORD BELONGS TO THE FAMILY WORD OF:\n"<<allCorrectWords[randomTypeVectors][randomTypeVectors2]<<endl;
                        cout<<"***********YOUR TOTAL POINTS ARE:\n"<<++points<<endl;

                        //erase them from being called again from the vector of the allCorrectWords.
                        adjectives_correct.erase(adjectives.begin() + index2);
                        adjectives2_correct.erase(adjectives2.begin() + index9);

                        }

                      }

                    else
                        {

                        cout<<endl;
                        cout<<endl;

                        cout<<"***********YOU CANNOT DEFEAT ME!" "\n"<<endl;
                        cout<<"******************YOU LOSE*********"<<endl;
                        return 0;
                        }



                      }


                       else
        {

    //cout<<"THE RANDOM WORD:"<<" "<<allCorrectWords[randomTypeVectors][randomTypeVectors2]<<" "<<"IS NO A VERB IN A INFINITIVE FORM"<<endl;
                        cout<<endl;
                        cout<<endl;

                        cout<<"***********YOU CANNOT DEFEAT ME!" "\n"<<endl;
                        cout<<"******************YOU LOSE*********"<<endl;
                        return 0;

        }

        }

     if (result_it3 != verbs.end()|| result_it5 != verbs2.end() || result_it6 != verbs3.end() || result_it7 != verbs4.end() )

        {


    cout<<"THE POSITION OF THE ELEMENT IF IT IS IN THE VECTOR VERBS IS : "<<" "<<index3<<endl;
    cout<<"THE WORD:"<<" "<< allCorrectWords[randomTypeVectors][randomTypeVectors2]<<" "<<"IS A VERB IN A INFINITIVE FORM"<<endl;
    cout<<"THE COMPLETE FAMILY WORD OF THE WORD:"<<" "<<allCorrectWords[randomTypeVectors][randomTypeVectors2]<<" "<<"IS:"<<endl;
    cout<<nouns[index3]<<" "<<nouns2[index3]<<endl;
    cout<<adjectives[index3]<<" "<<adjectives2[index3]<<endl;
    cout<<verbs[index3]<<" "<<verbs2[index3]<<" "<<verbs3[index3]<<" "<<verbs4[index3]<<endl;
    cout<<adverbs[index3]<<endl;
    allWords.erase(allWords.begin()+ index3);


    cout<<"\n\n";
    cout<<"\n\n";
    cout<<"\n\n";
    cout<<"***********************LETS START THE ENGLISH MEMORY SPAN GAME SHALL WE********************"<<endl;


    cout<<"***********WHAT KIND OF WORD IS:"<<" "<<allCorrectWords[randomTypeVectors][randomTypeVectors2]<<""<<endl;

            getline(cin, type);
            type_user_input.push_back(type);



                    if (type == "verb")

                    {

                        cout<<"YOU ARE AWESOME, THE ELEMENT:"<<" "<<allCorrectWords[randomTypeVectors][randomTypeVectors2]<<"IS A VERB"<<endl;
                        cout<<endl;
                        cout<<endl;

                        cout<<"PLEASE DIGIT THE COMPLETE FAMILY WORD FOR THE WORD:"<<" "<<allCorrectWords[randomTypeVectors][randomTypeVectors2]<<endl;
                        cout<<"\n\n";
                        cout<<"\n\n";
                        cout<<"***********************DIGITS THE NOUNS FOR THE WORD:"<<" "<<allCorrectWords[randomTypeVectors][randomTypeVectors2]<<endl;
                        cout<<"\n\n";


                        string user_data;
                        //clear the user,s vector from the type data that you already digited
                        //user_data.clear();
                        type_user_input.clear();

                        getline(cin, user_data);
                        type_user_input.push_back(user_data);


                        //equal the only element in the user's vector with vectors nouns (nouns and noun2) first elements of the vectors.
                        //the user can must type both nouns to pass through.
                        if (type_user_input[0] == verbs[index3]  && type_user_input[0] == verbs2[index5] && type_user_input[0] == verbs3[index6] && type_user_input[0] == verbs4[index7] )

                      {


                        for (int points = 0; points < 1; points++)
                        {


                        cout<<"**********YOU ARE CUNNING, THE WORD BELONGS TO THE FAMILY WORD OF:\n"<<allCorrectWords[randomTypeVectors][randomTypeVectors2]<<endl;
                        cout<<"***********YOUR TOTAL POINTS ARE:\n"<<++points<<endl;

                        //erase them from being called again from the vector of the allCorrectWords.
                        verbs_correct.erase(verbs.begin() + index3);
                        verbs2_correct.erase(verbs2.begin() + index5);
                        verbs3_correct.erase(verbs3.begin() + index6);
                        verbs4_correct.erase(verbs4.begin() + index7);
                        }

                      }

                    else
                        {

                        cout<<endl;
                        cout<<endl;

                        cout<<"***********YOU CANNOT DEFEAT ME!" "\n"<<endl;
                        cout<<"******************YOU LOSE*********"<<endl;
                        return 0;
                        }

                    }



                    else
                    {

                       cout<<endl;
                        cout<<endl;

                        cout<<"***********YOU CANNOT DEFEAT ME!" "\n"<<endl;
                        cout<<"******************YOU LOSE*********"<<endl;
                        return 0;


                    }

        }

        else
        {

    //cout<<"THE RANDOM WORD:"<<" "<<allCorrectWords[randomTypeVectors][randomTypeVectors2]<<" "<<"IS NO A VERB IN A INFINITIVE FORM"<<endl;
        //break;

        }


     if (result_it4 != adverbs.end())

        {


    cout<<"THE POSITION OF THE ELEMENT IF IT IS ON THE VECTOR ADVERBS IS : "<<" "<<index4<<endl;
    cout<<"THE WORD:"<<" "<< allCorrectWords[randomTypeVectors][randomTypeVectors2]<<" "<<"IS AN ADVERB"<<endl;
    cout<<"THE COMPLETE FAMILY WORD OF THE WORD:"<<" "<<allCorrectWords[randomTypeVectors][randomTypeVectors2]<<" "<<"IS:"<<endl;
    cout<<nouns[index4]<<" "<<nouns[index4 + 1]<<" "<<adjectives[index4]<<endl;
    cout<<adjectives[index4 + 1]<<" "<<verbs[index4]<<" "<<verbs2[index4]<<" "<<verbs3[index4]<<endl;
    cout<<verbs4[index4]<<" "<<adverbs[index4]<<endl;
    allWords.erase(allWords.begin()+ index4);


    cout<<"\n\n";
    cout<<"\n\n";
    cout<<"\n\n";
    cout<<"***********************LETS START THE ENGLISH MEMORY SPAN GAME SHALL WE********************"<<endl;


    cout<<"***********WHAT KIND OF WORD IS:"<<" "<<allCorrectWords[randomTypeVectors][randomTypeVectors2]<<""<<endl;

            getline(cin, type);
            type_user_input.push_back(type);



                    if (type == "adverb")

                    {

                        cout<<"YOU ARE AWESOME, THE ELEMENT:"<<" "<<allCorrectWords[randomTypeVectors][randomTypeVectors2]<<"IS AN ADVERB"<<endl;
                        cout<<"\n\n";
                        cout<<"\n\n";
                        cout<<"\n\n";
                        //cout<<"***********************LET'S TRY ANOTHER WORD********************"<<endl;


                        cout<<"PLEASE DIGIT THE COMPLETE FAMILY WORD FOR THE WORD:"<<" "<<allCorrectWords[randomTypeVectors][randomTypeVectors2]<<endl;
                        cout<<"\n\n";
                        cout<<"\n\n";
                        cout<<"***********************DIGITS THE ADVERB FOR THE WORD:"<<" "<<allCorrectWords[randomTypeVectors][randomTypeVectors2]<<endl;
                        cout<<"\n\n";

                        //clear the user,s vector from the type data that you already digited
                        //user_data.clear();
                        type_user_input.clear();

                        string answer1;
                        getline(cin, answer1);
                        type_user_input.push_back(answer1);
                        //auto iteratorName = user_name.begin();
                        //auto iteratorName1 = user_name.begin();
                        //advance(iteratorName1, 1);


                        //equal the only element in the user's vector with vectors nouns (nouns and noun2) first elements of the vectors.
                        //the user can must type both nouns to pass through.
                        if (type_user_input[0] == adverbs[index4])
                      {


                        for (int points = 0; points < 1; points++)
                        {


                        cout<<"**********YOU ARE CUNNING, THE WORD BELONGS TO THE FAMILY WORD OF:\n"<<allCorrectWords[randomTypeVectors][randomTypeVectors2]<<endl;
                        cout<<"***********YOUR TOTAL POINTS ARE:\n"<<++points<<endl;

                        //erase them from being called again from the vector of the allCorrectWords.
                        adverbs_correct.erase(adverbs.begin() + index4);


                        }

                      }

                    else
                        {

                        cout<<endl;
                        cout<<endl;

                        cout<<"***********YOU CANNOT DEFEAT ME!" "\n"<<endl;
                        cout<<"******************YOU LOSE*********"<<endl;
                        return 0;
                        }



                      }


                       else
        {

    //cout<<"THE RANDOM WORD:"<<" "<<allCorrectWords[randomTypeVectors][randomTypeVectors2]<<" "<<"IS NO A VERB IN A INFINITIVE FORM"<<endl;
                        cout<<endl;
                        cout<<endl;

                        cout<<"***********YOU CANNOT DEFEAT ME!" "\n"<<endl;
                        cout<<"******************YOU LOSE*********"<<endl;
                        return 0;

        }


    }

    }//iterator random

    }//iterator random

}//main

*/
