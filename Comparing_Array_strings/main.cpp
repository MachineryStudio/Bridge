#include <iostream>
#include <string>


using namespace std;


int main()

{
    string noun;
    string adjective;
    string verb;
    string adverb;

    cout<<"Digit the noun for the verb:\n"<<"1. relent"<<endl;
    cout<<"after that, please push ENTER"<<endl;
    getline(cin, noun);

    cout<<"\n Digit the adjective for the verb:\n"<<"1.relent"<<endl;
    cout<<"after that, please push ENTER"<<endl;

    getline(cin, adjective);

    cout<<"\n Digit the verb for the verb:\n"<<"1.relent"<<endl;
    cout<<"after that, please push ENTER"<<endl;

    getline(cin, verb);

    cout<<"\nDigit the adverb for the verb:\n"<<"1.relent"<<endl;
    cout<<"after that, please push ENTER"<<endl;
    getline(cin, adverb);

    string words2[]= { noun, adjective, verb, adverb};
    string words1[] ={"relentlessness" ,"relentless" ,"relent" ,"relentlessly"};

    if
((words2[0]==words1[0]) && (words2[1]==words1[1]) && (words2[2]==words1[2]) &&(words2[3]==words1[3]))

{
cout<<"You are cunning, the words belongs to the family word of the word:\n"<<"1.relent"<<endl;
cout<<"the words are:\n"<<words1[0]<<endl;
cout<<words1[1]<<endl;
cout<<words1[2]<<endl;
cout<<words1[3]<<endl;

}
  else
    {   cout<<"You lose:\n"<<endl;
        return 0;
    }

}

