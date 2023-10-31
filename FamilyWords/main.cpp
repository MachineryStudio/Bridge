
//Program to compare type string.
#include <iostream>
#include <string>


using namespace std;

//functions:

string uppercaseIt(string s);
bool samestring(string s1, string s2);


int main()
{
    string word1;
    string word2;
    //string word3;
    //string word4;

    cout <<"Enter a noun as a family word" << endl;
    cin >> word1;

    cout <<"Enter the verb  of that family word"<<endl;
    cin >> word2;

    //cout <<"Enter the adjective of that family word" \n<<;
    //cin >> word3;

    //cout <<"Enter the adverb of that family word" \n<<;
    //cin >> word4;

    //call the function samestring.

    if (samestring(word1,word2)== true)
        cout << "you got the word:" <<word1;

    else
        cout << "keep on reading Umpa Umpa:"<<endl;


    return 0;

}

    bool samestring(string s1, string s2)

    {
        if (uppercaseIt(s1).compare(uppercaseIt(s2)) == 0)

        return true;
        else false;

    }


    // UppercaseI function.

    string uppercaseIt(string s)
{
     string converted;

    // from position 1 through its length

    for (short i =0; i<s.length(); ++i)

    converted += toupper(s[i]);

    return converted;


}










