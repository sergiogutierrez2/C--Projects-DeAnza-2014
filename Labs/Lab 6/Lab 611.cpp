// Lab 6.1 Sergio Gutierrez
#include <iostream>
using namespace std;

int first(int Number);
int second(int Number, int Number2);

int main()
{
   int Number;
   int Number2;

   cout << "Please enter an integer number." << endl;
         while (cin >> Number)
         {
         first(Number);    // Call function first
         second(Number, Number2);   // Call function second
         }
      {
      cout << "Invalid input. You must enter an integer number. Restart program if you want to try again." << endl;
      }

   return 0;
}

int first(int Number)
{
   cout << "The number entered is " << Number << endl;
}

int second(int Number, int Number2)
{
   Number2 = Number % 2;
   if (!(Number2 == 0))
    cout << "This is an odd number." << endl;
   else
    cout << "" << endl;
}

