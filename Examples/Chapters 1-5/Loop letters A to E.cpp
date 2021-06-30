// This is the first program I do from scratch

#include <iostream>
using namespace std;

int main ()
{
for (char outerChar='a'; outerChar<='e'; outerChar++){
    for (char innerChar='a'; innerChar<='e'; innerChar++){
        cout << outerChar << innerChar << "\n";
    }

}
   return 0;
}
