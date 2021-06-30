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
    char A;


    cout << "Hi. This 10 question game was created to determine whether you are a scrub or a pro.\n"
         << "Always choose the best answer from options 1, 2, 3 or 4. If you choose anything other\n"
         << " than those options/letters, you will get an incorrect answer.\n"
         << " \n";

    cout << "Press Enter or any Key to play\n";
    cin.get();

    cout << " \n";
    cout << "1- Who is the best character in brawl?\n"
         << "A) Metaknight\n"
         << "B) Falco\n"
         << "C) Snake\n"
         << "D) El Best Rey Gordo\n"
         << " \n";

    cin >> BRAWL;
    cout << " \n";

        if (BRAWL == 1)
  {
      BRAWL = 1;
  }
  else
    {
     BRAWL = 0;
    }

     cout << "2- Who is the strongest X-men Mutant?\n"
         << "A) Rogue\n"
         << "B) Wolverine\n"
         << "C) Magneto\n"
         << "D) Mystique\n"
         << " \n";

    cin  >> XMEN;
    cout << " \n";

        if (XMEN == 3)
        {
         XMEN = 1;
        }
        else
        {
        XMEN = 0;
        }

    cout << "3- Which is the strongest Pokemon?\n"
         << "A) Charizard\n"
         << "B) Dragonite\n"
         << "C) Mewtwo\n"
         << "D) Alakazam\n"
         << " \n";

    cin  >> POKEMON;
    cout << " \n";

       if (POKEMON == 3)
       {
         POKEMON = 1;
       }
        else
        {
        POKEMON = 0;
        }

    cout << "4- Which is the strongest Gold Saint in Knights of the Zodiac?\n"
         << "A) Dohko\n"
         << "B) Shaka\n"
         << "C) Camus\n"
         << "D) Death Mask\n"
         << " \n";

    cin  >> ZODIAC;
    cout << " \n";

       if (ZODIAC == 2)
       {
        ZODIAC = 1;
       }
       else
      {
       ZODIAC = 0;
      }

    cout << "5- Which is the overall the strongest character in DBZ?\n"
         << "A) Krillin\n"
         << "B) Picolo\n"
         << "C) Vegeta\n"
         << "D) Trunks\n"
         << " \n";

    cin  >> DBZ;
    cout << " \n";

     if (DBZ == 3)
     {
      DBZ = 1;
     }
     else
     {
     DBZ = 0;
     }

    cout << "6- Which is the COOLEST Brawl Character?\n"
         << "A) Captain Falcon\n"
         << "B) Jigglypuff\n"
         << "C) Olimar\n"
         << "D) Sonic\n"
         << " \n";

    cin  >> BRAWL2;
    cout << " \n";

         if (BRAWL2 == 1)
        {
          BRAWL2 = 1;
        }
     else
        {
         BRAWL2 = 0;
         }

    cout << "7- Which is the COOLEST CHARACTER OF ALL HISTORY OF ALL TIME?\n"
         << "A) Wesker, the Killer\n"
         << "B) Blade, the Slasher aka scrub\n"
         << "C) Fox the Scrub\n"
         << "D) SSBB99999999999999999999999999999\n"
         << " \n";

    cin  >> BRAWL3;
    cout << " \n";

         if (BRAWL3 == 1)
        {
         BRAWL3 = 1;
         }
        else
        {
        BRAWL3 = 0;
        }

    cout << "8- Which is the strongest Avenger?\n"
         << "A) Thor\n"
         << "B) Hawkeye\n"
         << "C) Spiderman\n"
         << "D) Captain America\n"
         << " \n";

    cin  >> AVENGER;
    cout << " \n";

        if (AVENGER == 1)
  {
      AVENGER = 1;
  }
  else
    {
     AVENGER = 0;
    }

    cout << "9- Which is the best Beyblade player?\n"
         << "A) Oh, es cieeeertooo\n"
         << "B) Ray\n"
         << "C) Tai\n"
         << "D) Kai\n"
         << " \n";

    cin  >> BEYBLADE;
    cout << " \n";

        if (BEYBLADE == 4)
  {
      BEYBLADE = 1;
  }
  else
    {
     BEYBLADE = 0;
    }

    cout << "10- Scrubest main character in the Digimon series.\n"
         << "A) Takato\n"
         << "B) Tai\n"
         << "C) Davis\n"
         << "D) Takuya\n"
         << " \n";

    cin  >> DIGIMON;
    cout << " \n";

    if (DIGIMON == 3)
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
         cout << "However, you cannot beat Wesker.\n"
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
     cout << "Press A to finish program" << endl;
     cin >> A;


    return 0;

}
