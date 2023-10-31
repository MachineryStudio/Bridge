#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int num;
int guess;
bool isguessed;
int try_again;

int main ()

{
// rand generates a random number, time returns time as a long value, in overall they generate a random number (0, 100)
// you do not have to initialize num.

num = (rand()+ time(0))% 5;
isguessed = false;
try_again = 0;

cout <<"a. To stop the game push # \n"<<endl;


    while (!isguessed & try_again < 3)
{
    cout<< "b. Enter a integer greater\n" <<"or equal to 0 and\n"<<"less than 5:"<<endl;
    cin >> guess;
    try_again++;

        if (guess == num)

        {cout <<" You win\n"<<"the number is:"<<num;
        isguessed = true;
        }
       else if (guess<num)
       cout <<" You guess is inferior than the number\n"<<"\n try again\n";

       else
       cout <<" You guess is superior than the number\n"<<"\n try again"<<endl;

}

        if (!isguessed)
        cout <<" you lose"<< endl;

    return 0;

}





