/*This program is pwns you.
This program asks 10 questions about cartoons and movies and then gives you a score */

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main ()
{
    int BRAWL, BRAWL2, BRAWL3, XMEN, POKEMON, ZODIAC, DBZ, AVENGER, BEYBLADE, DIGIMON;
    int SUM;


    cout << "Hi. This 10 question game was created to determine whether you are a scrub or a pro.\n"
         << "Always choose the best answer from options 1, 2, 3 or 4. If you choose anything other\n"
         << " than those options/letters, you will get an incorrect answer.\n"
         << " \n";

    cout << "Press Enter or any Key to play\n";
    cin.get();

    cout << " \n";
    cout << "1) 1 + 1?\n"
         << " \n";

    cin >> BRAWL;
    cout << " \n";

        if (BRAWL == 2)
  {
      BRAWL = 1;
  }
  else
    {
     BRAWL = 0;
    }

     cout << "2) 1-1? \n"
         << " \n";

    cin  >> XMEN;
    cout << " \n";

        if (XMEN == 0)
        {
         XMEN = 1;
        }
        else
        {
        XMEN = 0;
        }

    cout << "3) 2+2? \n"
         << " \n";

    cin  >> POKEMON;
    cout << " \n";

       if (POKEMON == 4)
       {
         POKEMON = 1;
       }
        else
        {
        POKEMON = 0;
        }

    cout << "4) 9 / 3? \n"
         << " \n";

    cin  >> ZODIAC;
    cout << " \n";

       if (ZODIAC == 3)
       {
        ZODIAC = 1;
       }
       else
      {
       ZODIAC = 0;
      }

    cout << "5) 10 / 5 \n"
         << " \n";

    cin  >> DBZ;
    cout << " \n";

     if (DBZ == 2)
     {
      DBZ = 1;
     }
     else
     {
     DBZ = 0;
     }

    cout << "6) 1 + 1?\n"
         << " \n";

    cin  >> BRAWL2;
    cout << " \n";

         if (BRAWL2 == 0)
        {
          BRAWL2 = 1;
        }
     else
        {
         BRAWL2 = 0;
         }

    cout << "7) 6 + 10?\n"
         << " \n";

    cin  >> BRAWL3;
    cout << " \n";

         if (BRAWL3 == 16)
        {
         BRAWL3 = 1;
         }
        else
        {
        BRAWL3 = 0;
        }

    cout << "8) 2 + 1 - 5?\n"
         << " \n";

    cin  >> AVENGER;
    cout << " \n";

        if (AVENGER == -2)
  {
      AVENGER = 1;
  }
  else
    {
     AVENGER = 0;
    }

    cout << "9) 3 + 3 ?\n"
         << " \n";

    cin  >> BEYBLADE;
    cout << " \n";

        if (BEYBLADE == 6)
  {
      BEYBLADE = 1;
  }
  else
    {
     BEYBLADE = 0;
    }

    cout << "10) 1+0?\n"
         << " \n";

    cin  >> DIGIMON;
    cout << " \n";

    if (DIGIMON == 1)
  {
      DIGIMON = 1;
  }
  else
    {
     DIGIMON = 0;
    }

SUM = BRAWL + BRAWL2 + BRAWL3 + XMEN + POKEMON + ZODIAC + DBZ + AVENGER + BEYBLADE + DIGIMON;

cout << "\n"
     << "Your total score is " << SUM << " points out of 10" << endl;

     if (SUM >= 9)
     {
         cout << "Congratulations!!! You have obtained a high score." << endl;
         cout << ".\n"
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
     }
     else
     {
         cout << "That's a very low score. You are a scrub!" << endl;
     }

    return 0;

}
