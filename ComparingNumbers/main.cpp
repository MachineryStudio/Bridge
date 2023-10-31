//Finding the larger number of three integers

#include <iostream>


using namespace std;

int main()

{

    int num1, num2, num3;

    cout <<"Enter three integer numbers separated by enter command" << endl;
    cin >> num1 >>num2 >>num3;

    if  (num1 == num2)
        cout << "Num1 : "<< num1 <<"is equal to numb2:" << num2<<endl;

    else if (num1 == num3)
        cout << "Num1 : "<< num1 <<"is equal to numb3:" << num3<<endl;

    else if (num2 == num3)
        cout << "Num2 : "<< num2 <<"is equal to numb3:" << num3<<endl;

    if ((num1 > num2) && (num1> num3))
        cout << "the larger number is:" << num1<<endl;


    else if ((num2 > num1) && (num2 > num3))
        cout << "the larger number is:" << num2<<endl;

    else if ((num3 > num1) && (num3> num2))
        cout << "the larger number is:" << num3<<endl;

    return 0;
}
