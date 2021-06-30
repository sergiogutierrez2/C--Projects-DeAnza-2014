// This program illustrates the use of the Switch statement.

// PLACE YOUR NAME HERE

#include <iostream>

using namespace std;

int main()

{
char grade;

cout << "What grade did you earn in Programming I ?" << endl;

cin >> grade;

if (grade == 'A') // This is where the switch statement begins
cout << "A YOU PASSED! an A - excellent work !" << endl;
else if (grade=='B')
cout << "B YOU PASSED! you got a B - good job" << endl;
else if (grade=='C')
cout << "C YOU PASSED! earning a C is satisfactory" << endl;
else if (grade=='D')
cout << "D YOU PASSED! while D is passing, there is a problem" << endl;
else if (grade=='F')
cout << "you failed - better luck next time" << endl;
else
cout << "You did not enter an A, B, C, D, or F" << endl;

return 0;

}
