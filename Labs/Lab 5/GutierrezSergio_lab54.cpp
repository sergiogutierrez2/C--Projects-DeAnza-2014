// This program finds the average time spent
//programming and studying Biology by a student,
// each day over a three day period.

// Sergio Gutierrez

#include <iostream>
using namespace std;

int main()
{
int numStudents; //The number of students
int student, day = 0; // these are the counters for the loops
int daysprogramming, daysbiology; // Number of days a given student studies Biology or programs

float numHoursprogram, numHoursbio; //The number of hours programming and studying Biology per day
float averageprogramming, averagebiology; //average hours programming and studying biology per day
float totalprogram, totalbio; // Refers to the total number of hours studying Biology or programming

cout << "This program will find the average number of hours a day that" << endl;
cout << "a student spent Programming and studying Biology over a certain period of days.\n\n";
cout << "How many students are there ?" << endl;
cin >> numStudents;
cout << endl;

for(student = 1; student <= numStudents; student++)
{
     totalprogram = 0;
     totalbio = 0;
     cout << "---Please enter the number of days that student " << student << " spent programming.---" << endl;
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
     cout << "The average number of hours per day student " << student << " spent programming is " << averageprogramming << endl << endl;

     //***DIVISION BETWEEN THE ABOVE CODE REFERRING TO PROGRAMMNING***
     //***AND THE CODE BELOW REFERRING TO STUDYING BIOLOGY***

     cout << "---Please enter the number of days that student " << student << " spent studying Biology.---" << endl;
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
     cout << "The average number of hours per day spent by student " << student << " studying Biology is " << averagebiology << endl << endl;

     //The final message to be displayed comparing the time spent Programming and Studying Biology
     if (averageprogramming > averagebiology)
     {
         cout << "***** Student " << student << " on average spent more time Programming.*****" << endl << endl << endl;
     }
     else if (averageprogramming < averagebiology)
     {
         cout << "***** Student " << student << " on average spent more time studying Biology.*****" << endl << endl << endl;
     }
     else
     {
         cout << "*** Student " << student << " on average spent the same time studying Biology and Programming***" << endl << endl << endl;
     }

}

return 0;
}
