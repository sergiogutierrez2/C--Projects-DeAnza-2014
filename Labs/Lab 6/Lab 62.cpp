// somewhere before main
#include <iostream>
using namespace std;

const int HEADS = 1;
const int TAILS = 2;
int coinFlip (int&tailnum);
unsigned seed= time(0);

int main ()
{

    // seed the random number generator
    srand(seed);

    coinFlip();

cout << "How many times would you like to toss the coin?" << endl;
cin >> tailnum;
}

int coinFlip(int &tailnum)                      //flip function
{

   int flip = 1 + rand() % 2;                      	//calculates either 1 or 2

   if (flip == HEADS)
   cout << "Heads!\n";                    // display heads if 1
   else if (flip == TAILS)
   {
	cout << "Tails!\n";		       	//display tails if 2
	tailnum++;
   }
return flip;
}
