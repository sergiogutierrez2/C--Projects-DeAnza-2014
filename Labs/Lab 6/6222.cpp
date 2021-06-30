// somewhere before main
#include <iostream>
#include <cstdlib> // For rand and srand
#include <ctime> // For time
using namespace std;

const int HEADS = 1;
const int TAILS = 2;
int coinFlip(int&);

int main ()
{
srand((unsigned)time(0));  //Seed the random number generator

cout << "How many times would you like to toss the coin?" << endl;
cin >> flip;
int coinFlip(flip);
}


int coinFlip(int &tailnum)                      //flip function
  {
    int flip = (rand()%2)+1;                       	//calculates either 1 or 2
    if (flip == HEADS)
	cout << "Heads!\n";                    // display heads if 1
    else if (flip == TAILS)
    {
	cout << "Tails!\n";		       	//display tails if 2
	tailnum++;
    }
    return flip;

  }

