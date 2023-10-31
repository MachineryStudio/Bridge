


# include <iostream>

using namespace std;

int main()
{

int *pointer;

cout<< "how many words do you want to introduce"<<endl;
int amount;
cin >> amount;

//pointer to an array of strings
pointer = new int [amount];

int temp;


for (int counter = 0; counter < amount; counter++)
{

    cout<<"enter the words" <<" "<<counter+1<<endl;
    cin >> temp;
    *(pointer + counter) = temp;

}

    cout<<"the words are:" <<endl;
    for( int counter = 0; counter < amount; counter++)
    {
        cout<<counter+1<<""<<"number is:"<<*(pointer + counter)<<endl;



    }


    delete [] pointer;
    return 0;

}
