// This program shows a counter

#include <iostream>
using namespace std;

int main ()
{
    const int MIN_NUMBER = 1, //Starting number to square
              MAX_NUMBER = 20; // Maximum number to square
          int num = MIN_NUMBER; // Counter

    cout << "Number Square\n";
    cout << "-------------------------\n";
    while (num <= MAX_NUMBER)
    {
      cout << num << "\t\t" << (num * num) << endl;
      num++; // Increment the counter
    }

    return 0;
}
