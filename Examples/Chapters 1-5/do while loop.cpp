// Using a do-while loop, this program will average 3 test scores.

#include <iostream>
using namespace std;

int main ()
{

   int score1, score2, score3; // Three scores
   double average; // Average Score
   char again;     // To Hold Y or N input

   do
   {
       //Get three scores.
       cout << "Enter 3 scores and I will average them: ";
       cin >> score1 >> score2 >> score3;

       //calculate and display the average.
       average = (score1 + score2 + score3) / 3.0;
       cout << "The average is " << average << ".\n";

       // Does the user want to average another yet?
       cout << "Do you want to average another set? (Y/N) ";
       cin >> again;
   }
   while (again == 'Y' || again == 'y');

    return 0;
}
