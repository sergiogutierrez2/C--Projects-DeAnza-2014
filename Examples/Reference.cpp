/* Write a program to compute and print the square of a number */

#include<iostream>
#include<iomanip>
using namespace std;


int getNumber(void);
void computerSquare(int number, int & square);

int main(void)
{
// Put your variable declarations here
int square;
int number = getNumber();

// Put your function calls here

computerSquare(number, square);

// Print the number and its square here
cout << "Your number is: " << endl;
cout << number << endl;
cout << "The square of your number is: " << endl;
cout << square << endl;

return 0;
}  // end of main

//Function to get the number from the user
int getNumber(void)
{
    //Put your variable declaration here
    int r;
    // Put your code here
    cout << "Please Input a number:" << endl;
    cin  >> r;
    cout << r << endl;

    return r;
}
// Function to compute the square of the number void computerSquare (int number, int & square)
void computerSquare(int number, int & square)
{
    //Put Your code here
  square = number * number;
}
