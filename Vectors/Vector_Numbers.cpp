# include <iostream>
# include <fstream>
# include <vector>


using namespace std;


void printVector(vector<int> b)

{
    for (int i = 0; i < b.size(); i++)

    {

        cout <<b[i] <<" | ";


    }

}

int main()
{

    vector<int> v(3);

    v[0] = 10;
    v[1] = 22;
    v[2] = 5;

    //create a new element 4 with a value of 7
    v.push_back(7);

    printVector(v);

    /*cout<< v.front()<<endl;
    cout<< v.back()<<endl;
    cout<< v.at(2)<<endl;

    string noun, adjective, verb, adverb;

    vector<string> v_string(4);

    v_string [0] = noun;
    v_string [1] = adjective;
    v_string [2] = verb;
    v_string [4] = adverb;

    cout<< v_string.front()<<endl;
    cout<< v_string.back()<<endl;
    cout<< v_string.at(0)<<endl;
*/
    return 0;

}




