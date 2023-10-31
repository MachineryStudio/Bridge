# include <cstdlib>
# include <iostream>
# include <ctime>

//this code returns random passwords

using namespace std;

static const char pool [] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
                            "abcdefghijklmnopqrstyvwxyz"
                            "0123456789";

int poolSize = sizeof(pool) -1 ;

char getRandomChar()

{
    return pool[rand() % poolSize];


}

int main (int argc, char * argv[])
{

    while (true)// infinite loop

    {
        int passLength;
        int numberOfPasswords;
        srand(time(0)); //random seed
        string pass;
        cout << "Enter the length of password:";
        cin >> passLength;
        cout<<"How many passwords do you need?";
        cin >> numberOfPasswords;

        for (int j = 0; j < numberOfPasswords; j++)
        {
            for (int i = 0; i < passLength; i++)
            {

                pass += getRandomChar();


            }

            cout<< pass<<endl;
            pass =" "; //empty your string pass to avoid concatanations in the future

            }


        }



system ("PAUSE");
return EXIT_SUCCESS;



}
