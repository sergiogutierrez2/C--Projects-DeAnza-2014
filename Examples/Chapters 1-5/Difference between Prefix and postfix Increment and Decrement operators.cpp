// This program demonstrates the difference between the prefix and postfix operators.
// Modes of the increment and decrement operators
#include <iostream>
using namespace std;

int main ()
{
    int num = 4; // num starts out with 4.

    cout << num << endl; //Displays 4.
    cout << num++ << endl; //Displays 4 then adds 1 to num.
    cout << num << endl; //Displays 5.
    cout << ++num << endl; //adds 1 to num then displays 6.
    cout << endl;

    cout << num << endl; //Displays 6.
    cout << num-- << endl; //Displays 6 then subtracts 1 from num.
    cout << num++ << endl; // Displays 5
    cout << --num << endl; // subtracts 1 from num then displays 4.

    return 0;
}
