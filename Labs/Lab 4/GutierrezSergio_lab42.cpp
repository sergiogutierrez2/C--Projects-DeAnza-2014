// This program prints "You Pass" if a student's average is
// 60 or higher and prints "You Fail" otherwise
// PLACE YOUR NAME HERE

#include <iostream>

using namespace std;

int main()

{

float average; // holds the grade average

cout << "Input your average:" << endl;

cin >> average;

 if (average > 100)
 {
  cout << "Invalid data above 100. Please enter a value under 100" << endl;
 }
  else
  {
     if (average >= 90)
     {
        cout << "Your score is an A" << endl;
     }

     else
     {
         if (average >= 80)
         {
         cout << "Your score is a B" << endl;
         }

         else
         {
            if (average >= 60)
            {
            cout << "You Pass" << endl;
            }

            else
            {
               if (average >= 0)
               {
                cout << "You Fail" << endl;
               }
               else
               {
                //I didn't enter anything here because there was no indication to do so.
               }

            }
          }

      }
   }

   return 0;
}
