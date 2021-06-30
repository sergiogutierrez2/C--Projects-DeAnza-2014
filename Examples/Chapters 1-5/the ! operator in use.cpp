// This program demonstrates the use of the ! operator

#include <iostream>
using namespace std;

int main ()
{
 //constants for minimum income and years
 const double MIN_INCOME = 35000.0;
 const int MIN_YEARS = 5;

 double income; // Annual income
 int years; // Years at the current job

 //Get the annual income
 cout << "What is your annual income?";
 cin >> income;

 //Get the number of years at the current job.
 cout << "How many years have you worked at your current job?";
 cin >> years;

 //Determine the user's loan qualifications.
 if (!(income >= MIN_INCOME || years > MIN_YEARS))
    cout << "You qualify.\n";
 else
 {
     cout << "You must earn at least $"
          << MIN_INCOME << " or have been "
          << "employed more than " << MIN_YEARS
          << " years." << endl;
 }
//The result of this program is the opposite of the || program. Here to qualify you
//need to have earned less than 35000 and worked less than 5 years.
    return 0;
}
