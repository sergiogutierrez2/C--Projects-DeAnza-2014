// This program demonstrates how setprecision rounds a
// Floating point value.
#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
    double day1, day2, day3, total;

    //get the sales for each day.

   cout << "Enter the sales for day 1: ";
   cin >> day1;

   cout << "Enter the sales for day 2: ";
   cin >> day2;

   cout << "Enter the sales for day 3: ";
   cin >> day3;

   // calculate the total sales.
   total = day1 + day2 + day3;

   // Display the sales figures.
   cout << "\nsales Figures\n";
   cout << "---------------------\n";
   cout << setprecision(5);
   cout << "Day 1: " << setw(8) << day1 << endl;
   cout << "Day 2: " << setw(8) << day2 << endl;
   cout << "Day 3: " << setw(8) << day3 << endl;
   cout << "Total: " << setw(8) << total << endl;

    return 0;

}
