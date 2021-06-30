// This program performs a linear search on a character array
// Place Your Name Here
#include <iostream>
using namespace std;
int searchList(int[], int, int); // function prototype
const int SIZE = 8;

int main()

{
        int nums[SIZE] = {3,6,-19,5,5,0,-2,99};
        int found;
        int number;

        cout << "Enter an integer to search for:" << endl;
        cin >> number;


        found = searchList(nums, SIZE, number);
        if (found == -1)
               cout << "The integer " << number
             << " was not found in the list." << endl;
        else
           cout << "The integer " << number << " is in the " << found + 1
                << " position of the list" << endl;

   return 0;
}

//*******************************************************************
//                      searchList
// task:          This searches an array for a particular value
// data in:       List of values in an array, the number of
//                elements in the array, and the value searched for
//                in the array
// data returned: Position in the array of the value or -1 if value
//                not found
//*******************************************************************

int searchList( int List[], int numElems, int value)

{
        for (int count = 0;count <= numElems; count++)
        {
           if (List[count] == value)
              // each array entry is checked to see if it contains
              // the desired value.
           return count;
             // if the desired value is found, the array subscript
             // count is returned to indicate the location in the array
        }
        return -1; // if the value is not found, -1 is returned
}
