#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
#include<iterator>
#include<array>


//this code is just learning
using namespace std;

int main()
{
string noun, adjective, adjective1, adjective2, dazzling;
vector <string> v(5);

 v[0] = "noun" "adjective" "adjective1" "adjective2" "dazzling";
 v[1] = "noun" "adjective" "adjective1" "adjective2" "dazzling";
 v[2] = "noun" "adjective" "adjective1" "adjective2" "dazzling";
 v[3] = "noun" "adjective" "adjective1" "adjective2" "dazzling";
 v[4] = "noun" "adjective" "adjective1" "adjective2" "dazzling";


cout<<"the words are:/n";

copy(begin(v), end(v), ostream_iterator<string>(cout, " "));
cout<<endl;

v.push_back(lurched);

cout<<"the words are:/n";
copy(begin(v), end(v), ostream_iterator<string>(cout, " "));
cout<<endl;




}

/*
cout<<"set copying...."<<endl;

set<string> s;

//create your set
copy(v.begin(),v.end(), inserter(s, s.begin()));

//set iterator
for(set<string>:: iterator it=s.begin(); it!=s.end(); i++)
{
    cout<<*it<<endl;

}

//using find
vector<string> ::iterator it;

cout<<"find"<<endl;
//find the word dazzling
it = find(v.begin(),v.end(), dazzling);
cout<<*it<<endl;
sort(v.begin(),v.end());

for( vector<string>:: iterator it=v.begin(); it!=v.end(); i++)
{
    cout<<*it<<endl;

}


}

}
*/
