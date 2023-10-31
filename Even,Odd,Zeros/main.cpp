//this program counts even numbers, odd and zeros.

#include <iostream>
#include <iomanip>


using namespace std;

const int N=5;

int main()

{

int counter;
int num;
int zeros=0;
int evens=0;
int odds=0;


cout<<"Digit  "<<N<<" numbers separated by tab\n"<<endl;

cout<<"the number that you enter are:\n"<<endl;

for (counter=1; counter<=N; counter++)

{
    cin>>num;

    switch (num % 2)
    {
    case 0:
    cout<<num<<"\n is an even number or zero"<<endl;
    break;
    default:
    cout<<num<<"\n is an odd number"<<endl;

    }

if (num==0)
        zeros++;

switch (num % 2)
    {
    case 0:
        evens++;
    break;
    default:
        odds++;

    }

}

cout<<"the numbers of evens are:\n"<<evens-zeros<<endl;

cout<<"the numbers of odds are:\n"<<odds<<endl;

cout<<"the numbers of zeros are:\n"<<zeros<<endl;

return 0;
}



