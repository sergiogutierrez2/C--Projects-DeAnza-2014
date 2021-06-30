// This program shows for loops nested into other for loops
#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{

int hours;
int minutes;
int seconds;
//char A;
cout << fixed << right;
cout.fill ('0');
for (int hours = 0; hours < 24; hours++)
  {
   for (int minutes = 0; minutes < 60; minutes++)
    {
     for (int seconds = 0; seconds < 60; seconds++)
      {
         cout << setw(2) << hours << ":";
         cout << setw(2) << minutes << ":";
         cout << setw(2) << seconds << endl;
         //cin >> A;

            /*if (hours == 23)
                 {
                 cout << "TIME UP" << endl;
                 cout << "NNNEEEEEEEW RECORD!" << endl;
                 cout << "PRESS ENTER TO CONTINUE" << endl;
                 cin.get();
                 }
            else
                 {

                }*/

      }
    }

  }
  return 0;
}
