#include <iostream>


using namespace std;

int main()

{
    int numberlist;
    int counter;
    int sum;
    int number;
    int i;

    cout << "How many number will be entering on the sum" <<endl;
    cin >> numberlist;
    cout << "The number of the integers in your list is:"<<numberlist;
    cout <<endl;

    cout << "Enter the list of number that you want,please be sure do not enter more than:"<<endl;
    cout <<numberlist<<endl;
    cout << endl;

    sum = 0;

    for (i=0;i<numberlist;i++)
    {
    cin >>number;
    sum= sum + number;

    }

    //You do not initialize number or numberlist because are cout.

   //out << "The number of operation is:" << suma<<endl;

    cout << "The sum of the list that you have entered is:"<<sum<< endl;


    counter = 0;

    while (counter < numberlist)

    {
         counter ++;

    }

    cout << "Your counter is:" << counter++ <<endl;


    // mathematically counter cannot be zero.

    if (counter !=0)

    cout << "The average of the list that you have entered is:"<< (sum/counter)+1<< endl;

    else

    cout << "No input"<<endl;

    return 0;

}
