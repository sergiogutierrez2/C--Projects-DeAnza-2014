// This program finds the average time spent programming by a student
// each day over a three day period.
// PLACE YOUR NAME HERE

#include <iostream>
using namespace std;

int main()
{
int numStudents;
float numHoursprogram, numHoursbio, total, averageprogramming, averagebiology, totalprogram, totalbio;
int student, daysprogramming, daysbiology, day = 0; // these are the counters for the loops

cout << "This program will find the average number of hours a day that" << endl;
cout << "a student spent Programming and studying Biology over a certain period of days\n\n";
cout << "How many students are there ?" << endl;
cin >> numStudents;
cout << endl;

for(student = 1; student <= numStudents; student++)
{
     totalprogram = 0;
     totalbio = 0;
     cout << "Please enter the number of days that student " << student << " spent programming." << endl;
     cin >> daysprogramming;
     cout << endl << endl;

     for(day = 1; day <= daysprogramming; day++)

     {
          cout << "Please enter the number of hours the student " << student << " spent programming on day " << day << "." << endl;
          cin >> numHoursprogram;
          totalprogram = totalprogram + numHoursprogram;
     }

     averageprogramming = totalprogram / daysprogramming;
     cout << endl;
     cout << "The average number of hours per day spent programming by " << "student " << student << " is " << averageprogramming << endl << endl << endl;

     //LOLOLOLOLOL//

     //14568//

     cout << "Please enter the number of days that student " << student << " spent studying Biology." << endl;
     cin >> daysbiology;
     cout << endl << endl;

     for(day = 1; day <= daysbiology; day++)

     {
          cout << "Please enter the number of hours that student " << student << " spent studying Biology on day " << day << endl;
          cin >> numHoursbio;
          totalbio = totalbio + numHoursbio;
     }

     averagebiology = totalbio / daysbiology;
     cout << endl;
     cout << "The average number of hours per day spent studying Biology by " << "student " << student << " is " << averagebiology << endl << endl << endl;

     if (averageprogramming > averagebiology)
     {
         cout << "----Student " << student << " on average spent more time programming.----" << endl << endl;
     }
     else if (averageprogramming < averagebiology)
     {
         cout << "----Student " << student << " on average spent more time studying Biology.----" << endl << endl;
     }
     else
     {
         cout << "----Student " << student << " on average spent the same time studying Biology and Programming.----" << endl << endl;
     }

}

/*
for(student = 1; student <= numStudents; student++)
{
     total = 0;
     cout << "Please enter the number of days that student " << student << " spent studying biology." << endl;
     cin >> daysbiology;
     cout << endl << endl;

     for(day = 1; day <= daysbiology; day++)

     {
          cout << "Please enter the number of hours the student " << student << " spent programming on day " << day << "." << endl;
          cin >> numHours; total = total + numHours;
     }

     average = total / daysbiology;
     cout << endl;
     cout << "The average number of hours per day spent programming by " << "student " << student << " is " << average << endl << endl << endl;

}
*/


return 0;
}
