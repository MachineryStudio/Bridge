//The program makes a sum of integer numbers from 0 to limit
#include <iostream>


using namespace std;

int main()

{
int num;
int limit;
int sum;

cout<<"Enter the limit or the number of integers that you want to sum\n"<<endl;
cin>>limit;
sum=0;

 for (num=1;num<=limit;num++)
      sum= sum+num;

cout<<"The sum of the:\n"<<limit<<"    is:\n"<<sum<<endl;
cout<<"the number of operation dones is\n"<<num++<<endl;

    return 0;
}


