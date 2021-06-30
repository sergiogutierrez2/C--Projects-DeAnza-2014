// This program displays a menu with a do while loop.

#include <iostream>
using namespace std;

int main ()
{
    //constants for menu choices
    const int ADULT_CHOICE = 1,
              CHILD_CHOICE = 2,
              SENIOR_CHOICE = 3,
              QUIT_CHOICE = 4;

    //Constants for membership rates
    const double ADULT = 40.0,
                 CHILD = 20.0,
                 SENIOR = 30.0;

    //Variables
    int choice; // Menu Choice
    int months;  // Number of months
    double charges; // monthly charges

    //Setup numeric output formatting
    /*cout << fixed << showpoint << setprecision(2);*/

    do
    {
        //Display the menu.
        cout << "\n\t\t Health Club Membership Menu\n\n"
             << "1. Standard Adult Membership\n"
             << "2. Child Membership\n"
             << "3. Senior Citizen Membership\n"
             << "4. Quit the Program\n\n"
             << "Enter your choice: ";
             cin >> choice;

        //Validate the menu selection.
        while (choice < ADULT_CHOICE || choice > QUIT_CHOICE)

        {
            cout << "Please enter valid menu choice: ";
            cin >> choice;
        }

        //Process the user's choice
        if (choice != QUIT_CHOICE)
        {
            //GET THE NUMBER OF MONTHS.
            cout << "For how many months? ";
            cin >> months;

            //Respond to the user's menu selection.
            switch (choice)
            {
                case ADULT_CHOICE:
                charges = months * ADULT;
                break;

                case CHILD_CHOICE:
                charges = months * CHILD;
                break;

                case SENIOR_CHOICE:
                    charges = months * SENIOR;
            }

            // Display the monthly charges.
            cout << "The total charges are $"
                 << charges << endl;

        }

    } while (choice != QUIT_CHOICE);


    return 0;
}
