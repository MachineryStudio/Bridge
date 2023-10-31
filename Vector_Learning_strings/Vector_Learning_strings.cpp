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
