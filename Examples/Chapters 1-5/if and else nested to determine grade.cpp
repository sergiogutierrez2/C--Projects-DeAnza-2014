//This program uses nested if/else statement to assign
//letter grade A, B, C, D, F) to a numeric test score.

# include <iostream>

using namespace std;

int main()
{
    //constants for grade thresholds
    const int A_score = 90, B_score = 80, C_score = 70, D_Score = 60;

    int testscore; // To hold a numeric test score

    //get the numeric test score.

    cout << "Enter your numeric test score and I will\n";
    cout << "tell you the letter grade you earned:";
    cin >> testscore;

    //determine the letter grade
    if (testscore >= A_score)
    {
        cout << "Your score grade is an A.\n";
    }
    else
    {
        if (testscore >= B_score)
        {
            cout << "Your grade is a B.\n";
        }
        else
        {
            if (testscore >= C_score)
            {
                cout << "Your score grade is a C.\n";
            }
            else
            {
                if (testscore >= D_Score)
                {
                    cout << "Your grade is a D.\n";
                }
                else
                {
                    cout << "Your grade is F.\n";
                }

            }
        }
    }
    return 0;
}
