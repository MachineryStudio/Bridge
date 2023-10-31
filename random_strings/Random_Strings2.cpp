//# include <stdafx.h>
# include <string>
# include <ctime>
# include <cstdlib>
# include <iostream>


//generate random words from an array.

using namespace std;

int randomNoun, randomVerb, randomAdjective;
int newSentence;

void start()
{
    cout<<"************************\n";
    cout<<"********Program display random*****\n";
    cout<<"when prompted enter 1 to generate a new random sentences!" <<endl;
    cout<<"\n\n";

}

 int main()
 {
     start();
     string nounArray[3] = {"noun1","noun2", "noun3" };
     string adjectiveArray[3] = {"adjective1","adjective2", "adjective3" };
     string verbArray [3] =  {"verb1","verb2", "verb3" };

     cout<<"would you like to generate a sentence?  ";
     cin>> newSentence;

     do {

        srand(time(NULL));
        randomNoun = rand() % 3;
        randomAdjective = rand() % 3;
        randomVerb = rand() % 3;

        cout<<"\n"<<nounArray[randomNoun]<<"  "<<adjectiveArray[randomAdjective]<<" "<< verbArray[randomVerb]<<endl;
        cout<<"\n\n would you like to fire on a new sentence?";
        cin>> newSentence;

        }

     while (newSentence == 1);

     return 0;

 }







