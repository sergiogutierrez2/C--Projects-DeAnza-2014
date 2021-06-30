// This program uses a selection sort to arrange an array of integers in
// ascending order
//PLACE NAME HERE

#include <iostream>
using namespace std;
// function prototypes
void selectionSortArray(int [], int);
void displayArray(int[], int);
const int SIZE = 8;

int main()

{
        int values[SIZE] = {23,0,45,-3,-78,1,-1,9};
        cout << "The values before the selection sort is performed are:" <<endl;
        displayArray(values,SIZE);
        selectionSortArray(values,SIZE);

        cout << "The values after the selection sort is performed are:" <<endl;
        displayArray(values,SIZE);
        return 0;
}


void displayArray(int array[], int elems)    // function heading

{                                                       // Displays array
        for (int count = 0; count < elems; count++)
       cout << array[count] << "  ";
      cout << endl;
}

void selectionSortArray(int array[], int elems)

{
        int seek;      //array position currently being put in order
        int minCount;  //location of smallest value found
        int minValue;  //holds the smallest value found


        for (seek = 0; seek < (elems-1);seek++)

        {
               minCount = seek;
               minValue = array[seek];
               for(int index = seek + 1; index < elems; index++)

            {

                       if(array[index] > minValue)
                       {

                               minValue = array[index];
                               minCount = index;

                               for (int count = 0; count < elems; count++)
                               cout << array[count] << "  ";
                               cout << endl;
                       }

            }
               array[minCount] = array[seek];
               array[seek] = minValue;
        }
}



/*
void showValues(int nums[], int size)
{
   for (int index = 0; index < size; index++)
      cout << nums[index] << " ";
   cout << endl;
}*/
