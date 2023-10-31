#include <iostream>
#include <iomanip>

//dynamic two dimensional array
using namespace std;

void fill(int**, int, int);
void print(int**, int, int);

int main()
{
    //declaring pointer 1d array of 4 integers
    //it creates board[0] board [1] board[2] board[3]
    //then you could create 4 boards.

    //it creates an matrix of n row and m columns.

    /*
    int *board[4];

    for (int row = 0; row < 4; row++)
    //it creates an array of 6 columns and 4 rows
    board[row] = new int [6];

    //it declares board to be a pointer of a pointer, the first pointer is''
    //board the second one is *board.
    int **board;
    //it creates an array of 10 pointers and assign the address of that array to borad.
    board = new int* [10];


    //it creates an array of 10 rows and 10 columns
    for (int row = 0; row < 10; row++)
    board[row] = new int [15];

    */

    int **board, rows, columns;

    cout<<"Enter the number of columns and row: ";
    cin>> rows >> columns;
    cout << endl;

    //rows
    board =  new int* [rows];
    for (int row = 0; row < rows; row++)
    {
        //p[n] = new int[m]
        //this expres the amount of columns
        board[row] = new int[columns];

    }
    //input elements into board;
    fill(board, rows, columns);
    cout << endl;
    //output elements of board
    print(board, rows, columns);


}

void fill (int **p, int rowSize, int colSize)

{
    for (int row = 0; row < rowSize; row++)
    {

        cout<<"Enter "<<colSize<<" "<<"Number for row number"<<":"<<row<<endl;
        for (int col = 0; col < colSize; col++)
            cin >> p[row][col];
            cout <<endl;

    }

}

void print( int **p, int rowSize, int colSize)

{

    for (int row = 0; row < rowSize; row++)
    {

        for (int col = 0; col < colSize; col++)
        {
            //cout << setw(5) << p[row][col];
            cout << p[row][col]<<endl;

        }
    }

}



