// This program finds the average time spent programming by a student
// each day over a three day period.
// PLACE YOUR NAME HERE

#include <iostream>
using namespace std;

int main()
{
int numStudents;
float numHours, total, average;
int student, inputdays, day = 0; // these are the counters for the loops

cout << "This program will find the average number of hours a day" << endl;
cout <<
"that a student spent programming over a certain period of days\n\n";
cout << "How many students are there ?" << endl << endl;
cin >> numStudents;
cout << endl;

for(student = 1; student <= numStudents; student++)
{
     total = 0;
     cout << "Please enter the number of days that student " << student << " spent programming." << endl;
     cin >> inputdays;
     cout << endl << endl;


     for(day = 1; day <= inputdays; day++)

     {
          cout << "Please enter the number of hours worked by student " << student << " on day " << day << "." << endl;
          cin >> numHours; total = total + numHours;
     }

     average = total / inputdays;
     cout << endl;
     cout << "The average number of hours per day spent programming by " << "student " << student << " is " << average << endl << endl << endl;
}

return 0;
}
