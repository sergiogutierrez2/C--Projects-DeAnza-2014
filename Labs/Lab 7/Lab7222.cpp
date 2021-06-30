// This program will input an undetermined number of student names
// and a number of grades for each student. The number of grades is
// given by the user. The grades are stored in an array.
// Two functions are called for each student.
// One function will give the numeric average of their grades.
// The other function will give a letter grade to that average.
// Grades are assigned on a 10 point spread.
// 90-100 A   80- 89 B  70-79 C   60-69 D   Below 60 F
// SERGIO GUTIERREZ

#include <iostream>
using namespace std;

const int MAXGRADE = 25;              // maximum number of grades per student
const int MAXCHAR = 30;              // maximum characters used in a name

typedef float GradeType[MAXGRADE];    // one dimensional integer array data type
typedef char StringType30[MAXCHAR + 1];// character array data type used for names having 30 characters or less.

//FUNCTION PROTOTYPES//
float findGradeAvg(GradeType, int);    // finds grade average by taking array of grades and number of grades as parameters
char findLetterGrade(float);          // finds letter grade from average given to it as a parameter
//************************//

int main()

{
	StringType30 firstname, lastname;  // two arrays of characters defined
	GradeType grades;                 // grades is defined as a one dimensional array
    int numOfGrades;                   // holds the number of grades
	float average;                     // holds the average of a student's grade
    char moreinput;                    // determines if there is more input

    // Input the number of grades for each student
	cout << "Please input the number of grades each student will receive." << endl
         << "This number must be a number between 1 and " << MAXGRADE << " inclusive" << endl;
	cin >> numOfGrades;

	while (numOfGrades > MAXGRADE || numOfGrades < 1)
	{
		cout << "Please input the number of grades for each student." << endl
		     << "This number must be a number between 1 and " << MAXGRADE << " inclusive" << endl;
		cin >> numOfGrades;
	}
    // Input names and grades for each student
	cout << "Please input a y if you want to input more students" << " any other character will stop the input" << endl;
	cin >> moreinput;

	while ( moreinput == 'y' || moreinput == 'Y')
	{
        cout << "Please input the first name of the student" << endl;
		cin >> firstname;
		cout << endl << "Please input the last name of the student" << endl;
		cin >> lastname;

		for (int count = 0; count < numOfGrades; count++)
		{
			cout << endl << "Please input a grade" << endl;
			cin >> grades[count]; // Fill in the input statement to place grade in the array
		}
      	cout << firstname << ' ' << lastname << " has an average of " << endl;

		findGradeAvg(grades, MAXGRADE);// Fill in code to get and print average of student to screen
		//cout << "The average grades of the student are " << << endl;
		//FILL IN THE RETURNS//
		//findLetterGrade(float);// Fill in call to get and print letter grade of student to screen

		cout << endl << endl << endl;
		cout << "Please input a y if you want to input more students" << " any other character will stop the input" << endl;
        cin >> moreinput;
	}
	return 0;
}

//***********************************************************************
//                              findGradeAvg
//
//  task:           This function finds the average of the
//                  numbers stored in an array.
//
//  data in:        an array of integer numbers
//  data returned:  the average of all numbers in the array
//***********************************************************************

float findGradeAvg(GradeType grades[], int MAXGRADE)

{
    int total = 0;
    int average;
    // Fill in the code for this function
    for (int count = 0; count < MAXGRADE; count++)
    {
       total = total + (int)grades[count];
       average = total / (count + 1);
    }
    cout << "The average grades of the student are " << average << endl;
}

//***********************************************************************
//                              findLetterGrade
//
//  task:           This function finds the letter grade for the number
//				    passed to it by the calling function
//
//  data in:        a floating point number
//  data returned:  the grade (based on a 10 point spread) of the number
//                  passed to the function
//***********************************************************************
/*
char  findLetterGrade(float numgrade)

{
  // Fill in the code for this function
  cout << "The Letter grade this student receives is " << << endl;
}*/
