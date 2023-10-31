#include <iostream>
#include <string>
#include "Reference_Value.h"


using namespace std;



void AnotherFriend :: Print()
{
 cout<<"The age is:"<<age<< endl;
}

void AnotherFriend :: SetX(int a)
{
age =a;
//this a -> x;

}

void two(AnotherFriend cObject)

{

AnotherFriend girlfriend;
girlfriend.x = 25;
girlfriend.print();

cout<<"Your girlfriend age is:"<<girlfriend.x<<endl;

cObject.age = 40;
cObject.print();

cout<<"Andre secret age is:"<<cObject.age<<endl;

}



//when passing by object or value, The value will be altered or fixed?
int main()

{

AnotherFriend newFriend;

newFriend.SetX(32);
cout <<newFriend.Print()<<endl;

two (newFriend);

return 0;



}




