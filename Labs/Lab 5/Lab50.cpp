// PLACE YOUR NAME HERE

#include <iostream>
using namespace std;
int main()

{
char letter = 'a';

while (letter != 'x')
{
cout << "Please enter a letter (other than x). Enter x when you are finished" << endl;
cin >> letter;
cout << "The letter you entered is " << letter << endl;
}

//The do while loop below has the same effect as the while loop above.
/*
do
{
  cout << "Please enter a letter (other than x). Enter x when you are finished" << endl;
  cin >> letter;
  cout << "The letter you entered is " << letter << endl;
} while (letter != 'x');
*/

return 0;
}
