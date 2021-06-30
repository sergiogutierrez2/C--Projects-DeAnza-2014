// somewhere before main
#include <iostream>
#include <cstdlib> // For rand and srand
#include <ctime> // For time
using namespace std;

const int HEADS = 1;
const int TAILS = 2;
void coinToss(int);
int heads = 0;
int tails = 0;


int main ()
{
int tailnum;
srand((unsigned)time(0));  //Seed the random number generator

cout << "How many times would you like to toss the coin?" << endl;
cin >> tailnum;
coinToss(tailnum);
}


void coinToss(int tailnum)                      //flip function
  {
       for (int count = 1; count <= tailnum; count++)
       {

         cout << "Result of the cointoss " << count << ":" << endl;
         int flip = (rand()%2)+1; //calculates either 1 or 2
         if (flip == HEADS)
	     {cout << "Heads!\n"; // display heads if 1
	     heads = heads +1;}

         else if (flip == TAILS)
	     {cout << "Tails!\n"; //display tails if 2
	     tails = tails +1;}

         cout << "**************************" << endl;
       }
      cout << endl;
      cout << "The total number of heads were " << heads << endl;
      cout << "The total number of tails were " << tails << endl;
      cout << "Thanks for playing!" << endl;
  }
