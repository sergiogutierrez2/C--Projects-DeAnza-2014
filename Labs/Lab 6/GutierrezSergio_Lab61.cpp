// Lab 6.1 Sergio Gutierrez
#include <iostream>
using namespace std;

int first(int Number); //First Function prototype
int second(int Number, int Number2); // Second function prototype

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
      cout << "Invalid input. You must enter an integer number." << endl; //Invalid Input Message.
      cout << "Restart program if you want to try again." << endl; //Restart program message.
      }

   return 0;
}

int first(int Number)
{
   cout << "The number entered is " << Number << endl; //Displays number on screen.
}

int second(int Number, int Number2)
{
   Number2 = Number % 2; //Allows us to know whether a number is odd or even
   if (!(Number2 == 0))
    cout << "This is an odd number." << endl; //Display if it is an odd number
   else
    cout << "" << endl;
}

