
// This program runs a matrix with float type and int type. USING showpoint, setw, setprecision (), fixed.

#include <iostream>
#include <iomanip>



using namespace std;

int main()
{
    int x=12;
    int y=37;
    int z=45;
    double p= 13.45678;

    cout << fixed << showpoint;
    cout << setprecision(2);

    cout << 12345678912345 << endl;//the long of the matrix.

    cout << setw(3) << x << setw (3) << x << endl;
    cout << setw(1) << y << setw (5) << z << endl;
    cout << setw(2) << z << setw (4) << y << setw (8) << x << endl;
    cout << setw(3) << p << setw (8) << p << endl;

   return 0;
}
