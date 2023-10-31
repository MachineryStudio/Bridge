//Program to start the game of family words
#include <iostream>
#include <string.h>

using namespace std;

//functions:
//bool samestring (string s3, string s4);
//string uppercaseIt(string s);

int main()
{    //
    //   lenght0123456789
    string s1("oblivion oblivious obliviously");
    string s2;
    string s8;
    char s3[100];
    char s4[100]="noun";
    char s5[100]="adjective";
    char s6[100]="verb";
    char s7[100]="adverb";


    //string uppercaseIt(string s);
    //bool samestring (string s4, string s3);
    cout<<"Hello People, Welcome to the game: SAVING THE WORDS.\n"<<endl;
    cout<<"You are about to practice your: ENGLISH LANGUAGE.\n"<<endl;
    cout<<"The order of the family words will be:\n"<<endl;
    cout<< "Noun, adjectives, verb conjugations and adverbs.\n"<<endl;
    cout<<"The first Word of the game is:\n"<<s1.substr(0,8)<<endl;
    cout<<"WHat kind of structures is that word\n?"<<endl;
    cin >>s3;

    if (strcmp(s3,s4)==0)
    cout << "correct is a noun\n"<<"Def: not be aware or concerned about what is happening around/n"<<endl;
    else
    cout <<" is not the kind of structure that you typed\n"<<"try again\n"<<endl;

    cout<<"the initial family word is:\n"<<s1.substr(0,8)<<endl;
    cout<<"Please digit the adjective of the word:"<<s1.substr(0,8)<<endl;
    cin >> s2;
    cout <<"Did you type the word:\n"<<s2<<endl;


    if (s1.substr(9,17).compare(s2))

    cout <<"yes, you got it, the word is:\n"<<s2<<endl;
    else
    cout <<"wrong word, please try again"<<endl;

    cout<<"Please digit the adverb of that word:\n"<<s1.substr(0,8)<<endl;
    cin >> s8;
    cout<<" Did you type the word:\n"<<s8<<endl;


    if(s1.substr(18,29).compare(s8))

    cout<<"yes, you got it, the word is:\n"<<s8<<endl;

    else
    cout<<"Wrong word, please try again the game"<<endl;

/*

// strcmp just works for char no string
    if (strcmp (s1.substr(9,17),s2)==0)
    cout << "correct is a\n"<<s5<<"Def: not be aware or concerned about what is happening around/n"<<endl;
    else
    cout <<" is not the kind of structure that you typed\n"<<"try again\n"<<endl;
*/
    return 0;
}



    //compare the type with the typed word

  /*  if (samestring(s4,s3) == true)
{       cout << "correct is a noun\n"<<"Def: not be aware or concerned about what is happening around/n"<<endl;
}
        else
        cout <<" is not the kind of structure that you typed\n"<<"try again"<<endl;


    cout<<"Please digit the family word of:"<<s1.substr(0,8)<<endl;
    cin >> s2;
    cout <<"did you type the word:\n"<<s2<<endl;

    for (i=0;s3[i]!='\0';i++)
    {
        for (j=0;s2[j]!='\0';j++)
    {

        if (s3[i]==s2[j]);
        cout<<"the word is correct and is:\n"<<s2<<endl;

    }
    }

    //shows all the string that someone digits.

    // compare the words without booleans
    //if (s1.substr(9,17) == s2)

    /*if (s1.substr(9,17).compare(s2))
    cout <<"yes, you got it, the word is:\n"<<s2<<endl;
    else
    cout <<"wrong word, please try again"<<endl;
    */
