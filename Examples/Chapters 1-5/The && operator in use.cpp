// This program demonstrates the use of the && operator

#include <iostream>
using namespace std;

int main ()
{
    char employed, //currently employed Y or N
    recentgrad; //recent graduate Y or N

    //Is the user employed and a recent graduate?
    cout << "Answer the following questions" << endl;
    cout << "with either Y for Yes, or N for No." << endl;
    cout << "Are you employed?";
    cin >> employed;

    cout << "Have you graduated from college in the past two years?" << endl;
    cin >> recentgrad;

    // Determine the user's loan qualifications
    if (employed == 'Y' && recentgrad == 'Y')
    {
        cout << "You qualify for the special interest rate" << endl;
    }
    else
    {
        cout << "You must be employed and have graduated from college" << endl;
        cout << "in the past two years" << endl;
    }

    return 0;
}
