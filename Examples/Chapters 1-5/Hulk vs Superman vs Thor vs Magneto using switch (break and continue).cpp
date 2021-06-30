// The switch statement in this program tells the user something
//he or she already knows: the data just entered!

#include <iostream>
#include <string>
using namespace std;

int main ()
{
    int Thor;
    int Superman;
    int Hulk;
    int Magneto;

    Thor = 1;
    Superman = 2;
    Hulk = 3;
    Magneto = 4;

    int choice;

    cout << "Which of the following is the best:\n"
         << "1) Thor.\n"
         << "2) Superman.\n"
         << "3) Hulk.\n"
         << "4) Magneto.\n"
         << "Choose 1 through 4.\n"
         << "\n";

    cin >> choice;
    switch (choice)
    {
        case 1: cout << "You entered Thor.\n"
                     << "He's a beast but hes no match for Magneto or Superman.\n";
                break;
        case 2: cout << "You entered Superman.\n"
                     << "Not bad. But Magneto beats him.\n";
                break;
        case 3: cout << "You entered Hulk.\n"
                     << "Not bad but not the best.\n";
                break;
        case 4: cout << "You entered Magneto.\n"
                     << "Hes the best of these 4. However, he cannot beat Wesker.\n"
                     <<                                                    "\n"
                     <<                                                     "\n"
                     << "        ||   ||     ||    ||                         \n"
                     << "        ||   ||     ||    ||                           \n"
                     << "          |||          |||                            \n"
                     << "  ||                          ||                      \n"
                     << "   \\\\                        //                      \n"
                     << "     \\\\                     //                        \n"
                     << "       \\\\                 //                          \n"
                     << "         =================                          \n";
                break;
        default: cout << "You did not enter a valid choice. Restart program and enter a valid choice.\n";
                 break;
    }

  return 0;
}
