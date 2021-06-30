// Lab 6.1 Sergio Gutierrez
#include <iostream>
using namespace std;

int first(int Number);
int second(int Number, int Number2);

int main()
{
   int Number;
   int Number2;

   cout << "Please enter number" << endl;
   /*cin >> Number;*/

   /*if (cin >> Number);
      {
      cout << "Invalid input. Restart program if you want to try again." << endl;
      }

      else*/

         while (cin >> Number)
         {

         first(Number);    // Call function first
         second(Number, Number2);   // Call function second
         cout << "Back in function main again.\n";
         /*cin >> Number;*/
         }


      {
      cout << "Invalid input. Restart program if you want to try again." << endl;
      }

   return 0;
}

int first(int  Number)
{
   cout << "The number you entered is " << Number << endl;
}

int second(int Number, int Number2)
{
   Number2 = Number % 2;
   if (!(Number2 == 0))
    cout << "The number you entered is an odd number." << endl;
   else
    cout << "" << endl;
}

