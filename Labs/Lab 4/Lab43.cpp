// This program illustrates the use of logical operators

// PLACE YOUR NAME HERE

#include <iostream>

using namespace std;

int main()

{

char year;

float gpa;

cout << "What year student are you ?" << endl;

cout << "Enter 1 (freshman), 2 (sophomore), 3 (junior), or 4 (senior)" << endl << endl;

cin >> year;

cout << "Now enter your GPA" << endl;

cin >> gpa;

if ( gpa >= 2.0 || year == '4')

          cout << "It is time to graduate soon" << endl;

     else // I deleted else if ( year != '4' && gpa < 2.0) and left only an else.

          cout << "You need more schooling" << endl;

return 0;

}
