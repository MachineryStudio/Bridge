#include<iterator>
#include<iostream>
#include<array>
#include <string>
#include<forward_list>
#include<list>
#include<vector>



using namespace std;


//this function helps to create a template.
/*
template<typename T>
ostream& operator<<(ostream& s, const vector<T>& v) {
    s.put('[');
    char comma[3] = {};
    char comma[3] = {'\0', ' ', '\0'};
    for (const auto& e : v)
        {
       s << comma << e;
       comma[0] = ',';
        }
    return s << ']';
}



#include <iostream>
using namespace std;
int main()
{
	string noun1;
	string noun2;
	string adj;
    string pastTense;
    string noun3;

	cout <<"Welcome! Please fill in the blanks! \n";
    cout <<"Mary had a little . . . (noun) \n";
    getline(cin,noun1);

    if (noun1 == "lamb")
    	{
    	cout << "Correct! \n";
    		}
    else
	{
	 	cout <<"WRONG! Game Over! \n";
	 	system("Pause");
	 	return 0;
 		}
    cout <<"Its . . . (noun) was . . . (adjective) as snow \n";
    getline(cin,noun2);
      if (noun2 == "fleece")
    	{
    	cout << "Correct! \n";
    		}
    else
	{
	 	cout <<"WRONG! Game Over! \n";
	 	system("Pause");
	 	return 0;
 		}
    getline(cin,adj);
      if (adj == "white")
    	{
    	cout << "Correct! \n";
    		}
    else
	{
	 	cout <<"WRONG! Game Over! \n";
	 	system("Pause");
	 	return 0;
 		}
    cout <<"And everywhere that Mary . . . (past tense) \n";
    getline(cin,pastTense);
      if (pastTense == "went")
    	{
    	cout << "Correct! \n";
    		}
    else
	{
	 	cout <<"WRONG! Game Over! \n";
	 	system("Pause");
	 	return 0;
 		}
    cout <<"The . . .(noun) was sure to go \n";
    getline(cin,noun3);
      if (noun3 == "lamb")
    	{
    	cout << "Correct! You solved it! \n";
    		}
    else
	{
	 	cout <<"WRONG! Game Over! \n";
	 	system("Pause");
	 	return 0;
 		}
    cout <<"Mary had a little " <<noun1 << ", its "<<noun2 <<" was "<<adj <<" as snow. And everywhere that Mary "<<pastTense <<" the "<<noun3 <<" was sure to go. \n ";
    system("Pause");
    return 0;
}
*/
//This programs was made by Andre in order to understand forward_list
using namespace std;

template<typename T>
ostream& operator<<(ostream& s, const vector<T>& v) {
    s.put('[');
    char comma[3] = {'\0', ' ', '\0'};
    for (const auto& e : v)
        {
        s << comma << e;
        comma[0] = ',';
        }
    return s << ']';
}


int main()

{


vector<string> user_input{ "noun", "adjective", "verb", "adverb", "verb2" };
string noun, adjective, verb, adverb, verb2;

 vector<string> words1 { "the", "frogurt", "is", "also", "cursed" };
        //cout << "THE FIRST FAMILY WORD IS: "<< words1 <<endl;

		//words2 == words1
		vector<string> words2(words1.begin(), words1.end());
		//cout << "words2: "<< words2 <<endl;

		//words3 == words1;
		vector<string> words3(words1);
		//cout << "words3: "<< words3 <<endl;
		//words4 is {"Mo", "Mo", "Mo", "Mo", "Mo"}
		vector<string> words4(5, "Mo");
		//cout << "words4: "<< words4 <<endl;


		auto iterator1 = words1.begin();

		 cout<<*iterator1<<" "<<endl;

    for (; iterator1 != words1.end(); ++iterator1)

        {
            cout<<*iterator1<<" ";
        }

            cout<<endl;


		auto iterator2 = words1.begin();
        auto iterator4 = words1.begin();

            cout<<*iterator2<<" "<<endl;


        //do you want a specific string of the list
        advance(iterator2, 4);
        cout<<"the secret word is:"<<*iterator2<<endl;

        advance(iterator4, 3);
        cout<<"the secret word is:"<<*iterator4<<endl;


        //now you want to go through all the elements until the end
        //Therefore I needed to change the list_forward for list of for a Vector.

        auto iterator3 = prev(iterator1, 3);
        cout<<"the secret second word is:"<<*iterator3<<endl;


}
