// Static

#include <iostream>
using namespace std;
int max (int);

int main ()
{
   max(5);
   max(3);
   max(12);
   max(4);

}

int max (int num)
{
    static int i = num;
    if (num > i)
    {
        i=num;
    }
    cout << "The value is currently " << i << endl;
}

