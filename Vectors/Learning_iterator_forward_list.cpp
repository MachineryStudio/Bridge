#include<iterator>
#include<iostream>
#include<array>
#include <string>
#include<forward_list>
#include<list>
#include<vector>





using namespace std;



//this part is just the Format to show the format

template<typename T>
std::ostream& operator<<(std::ostream& s, const std::forward_list<T>& v) {
    s.put('[');
    char comma[3] = {'\0', ' ', '\0'};
    for (const auto& e : v) {
        s << comma << e;
        comma[0] = ',';
    }
    return s << ']';
}

//This programs was made by Andre in order to understand forward_list

int main()
{

    //interaction with the user, asking for 4 strings

    cout<<"***********************WELCOME TO THE ENGLISH MEMORY CARD******\n"<<endl;
    cout<<"***********************YOU ARE ABOUT TO MEMORIZE OVER 1000 WORDS*\n"<<endl;
    cout<<"***********************EACH WELL SPELLED WORD MEANS 1 POINT******\n"<<endl;
    cout<<"***********************COULD YOU BEAT THE SYSTEM MACHINE**********\n"<<endl;
    cout<<"***********************CREATED BY ANDRE RAMIERS 2018****************\n"<<endl;

    cout<<endl;
    cout<<endl;
    //User's input
    vector<string> user_input(0);

    //this forward list helps tp input the matrix of vocabulary
    forward_list<string> main_words { "family_word1", "family_word2", "family_word3", "family_word4", "family_word5" };

    string noun, adjective, verb, adverb, prep;

    vector<string> nouns  { "noun", "noun1", "noun2", "noun3", "noun4" };

    vector<string> adjectives  { "adjective", "adjective1", "adjective2", "adjective3", "adjective4" };

    vector<string> verbs  { "verb", "verb1", "verb2", "verb3", "verb4" };

    vector<string> adverbs  { "adverb", "adverb1", "adverb2", "adverb3", "adverb4" };

    vector<string> prepositions  { "preposition", "preposition1", "preposition2", "preposition3", "preposition4" };


    cout << "THE FAMILY WORD THAT YOU ARE GOING TO LEARN: "<< main_words <<endl;

        auto iterator26 = main_words.begin();

        // words2 == words1
		//vector<string> words2(words1.begin(), words1.end());
		//cout << "words2: "<< words2 <<endl;

		// words3 == words1
		//vector<string> words3(words1);
		//cout << "words3: "<< words3 <<endl;
		// words4 is {"Mo", "Mo", "Mo", "Mo", "Mo"}
		//vector<string> words4(5, "Mo");
		//cout << "words4: "<< words4 <<endl;


		//initializae them

		 //auto iterator1 = words1.begin();

		 //iteration through nouns
		 auto iterator1 = nouns.begin();
		 auto iterator6 = nouns.begin();
		 auto iterator7 = nouns.begin();
		 auto iterator8 = nouns.begin();
		 auto iterator9 = nouns.begin();

		 advance(iterator6, 1);
         advance(iterator7, 2);
         advance(iterator8, 3);
         advance(iterator9, 4);


          //iteration through adjectives
		 auto iterator2 =  adjectives.begin();
		 auto iterator10 = adjectives.begin();
		 auto iterator11 = adjectives.begin();
		 auto iterator12 = adjectives.begin();
		 auto iterator13 = adjectives.begin();

		 advance(iterator10, 1);
         advance(iterator11, 2);
         advance(iterator12, 3);
         advance(iterator13, 4);


         //iteration through verbs
		 auto iterator3 = verbs.begin();
		 auto iterator14 = verbs.begin();
		 auto iterator15 = verbs.begin();
		 auto iterator16 = verbs.begin();
		 auto iterator17 = verbs.begin();

		 advance(iterator14, 1);
         advance(iterator15, 2);
         advance(iterator16, 3);
         advance(iterator17, 4);

         //iteration through adverbs
         auto iterator4 =  adverbs.begin();
		 auto iterator18 = adverbs.begin();
		 auto iterator19 = adverbs.begin();
		 auto iterator20 = adverbs.begin();
		 auto iterator21 = adverbs.begin();

		 advance(iterator18, 1);
         advance(iterator19, 2);
         advance(iterator20, 3);
         advance(iterator21, 4);


         //iteration through prepositions
         auto iterator5 = prepositions.begin();
		 auto iterator22 = prepositions.begin();
		 auto iterator23 = prepositions.begin();
		 auto iterator24 = prepositions.begin();
		 auto iterator25 = prepositions.begin();

		 advance(iterator22, 1);
         advance(iterator23, 2);
         advance(iterator24, 3);
         advance(iterator25, 4);

        //This is the program. Go to one by one

    for (; iterator26 != main_words.end(); ++iterator26)

 {

     cout<<*iterator26<<endl;



     for (; iterator1 != nouns.end(); ++iterator1)

    {





    for (; iterator2 != adjectives.end(); ++iterator2)

    {


   /* }
    for (; iterator3 != verbs.end(); ++iterator3)

    {


    }
    for (; iterator4 != adverbs.end(); ++iterator4 )

    {

    }
    for (; iterator5 != prepositions.end(); ++iterator5 )

    {
    }
*/
        cout<<"********Digit the noun for the WORD:\n"<<*iterator26<<endl;
        cout<<"********after that, please push ENTER"<<endl;

        getline(cin, noun);
        user_input.push_back(noun);

        //float enter;
        //cin>>enter;
        //cin.ignore();
        auto iterator27 = user_input.begin();

        //for (int i= 0; user_input.size(); i++)

            //{
               // cout<<user_input[i]<<endl;
                // cout<<*iterator1<<endl;
                //cout<<user_input.size()<<endl;
                //cout<<words1.size()<<endl;

            //}
        if (*iterator27 == *iterator1)

                {

                int points = 0;

                for (int points = 0; points < 1; points++)
                points = points++;

                cout<<endl;
                cout<<endl;
                cout<<endl;
                cout<<endl;

                cout<<"**********You are cunning, the words belong to the family word of the word:\n"<<*iterator26<<endl;
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

            //  cout<<*iterator1<<endl;
            //  cout<<*iterator6<<endl;

                return 0;
                }

            cout<<"********Digit the adjective for the WORD:\n"<<*iterator26<<endl;
            cout<<"********after that, please push ENTER"<<endl;

            getline(cin, adjective);
            user_input.push_back(adjective);

            auto iterator28 = user_input.begin();
            advance(iterator28, 1);

            if (*iterator28 == *iterator2)

                {

                cout<<endl;
                cout<<endl;
                cout<<endl;
                cout<<endl;

                int points = 0;

                for (int points = 0; points < 1; points++)
                points = points++;
                cout<<"**********You are cunning, the words belong to the family word of the word:\n"<<*iterator26<<endl;
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

     /*       cout<<"********Digit the verb for the WORD:\n"<<*iterator26<<endl;
            cout<<"********after that, please push ENTER"<<endl;

            getline(cin, verb);
            user_input.push_back(verb);
            auto iterator29 = user_input.begin();
            advance(iterator29, 2);


             if (*iterator29 == *iterator3)

            {

                int points = 0;

                for (int points = 0; points < 1; points++)
                points = points++;

                cout<<endl;
                cout<<endl;
                cout<<endl;
                cout<<endl;
                cout<<"**********You are cunning, the words belong to the family word of the word:\n"<<*iterator26<<endl;
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

            cout<<"********Digit the adverb for the WORD:\n"<<*iterator26<<endl;
            cout<<"********after that, please push ENTER"<<endl;

            getline(cin, adverb);
            user_input.push_back(adverb);
            auto iterator30 = user_input.begin();
            advance(iterator30, 3);

            if (*iterator30 == *iterator4)

                {

               int points = 0;

            for (int points = 0; points < 1; points++)
            points = points++;

                cout<<endl;
                cout<<endl;
                cout<<endl;
                cout<<endl;
                cout<<"**********You are cunning, the words belong to the family word of the word:\n"<<*iterator26<<endl;
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

            cout<<"********Digit the verb in third person for the WORD:\n"<<*iterator26<<endl;
            cout<<"********after that, please push ENTER"<<endl;

            getline(cin, prep);

            user_input.push_back(prep);
            auto iterator31 = user_input.begin();
            advance(iterator31, 4);

                cout<<endl;
                cout<<endl;
                cout<<endl;
                cout<<endl;

             if (*iterator31 == *iterator5)

                {

                int points = 0;

                for (int points = 0; points < 1; points++)
                points = points + 4;


                */
                cout<<endl;
                cout<<endl;
                cout<<endl;
                cout<<endl;
                cout<<"**********You are cunning, the words belong to the family word of the word:\n"<<*iterator26<<endl;
            //    cout<<"***********your total points are:\n"<<points + 4<<endl;


                cout<<"Now, lets learn the family word of the word:\n"<<*++iterator26<<endl;


                cout << "THE FAMILY WORD THAT YOU LEARNED WAS: "<< main_words <<endl;

              //  cout<<"***********your total points are:\n"<<points + 5<<endl;


                }

        /*    else
                {

                cout<<endl;
                cout<<endl;
                cout<<endl;
                cout<<endl;
                cout<<"***********YOU CANNOT DEFEAT ANDRE!" "\n"<<endl;
                cout<<"******************YOU LOSE*********"<<endl;
                return 0;
                }


            */
    }
 }
}










