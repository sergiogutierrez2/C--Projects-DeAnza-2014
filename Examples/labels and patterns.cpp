/*
Jesus Gutierrez
CIS 22A
Winter 2016
Assignment F
Problem F3
Description of problem:
This program asks the user to select a pattern type and then a size for it.
*/

#include<iostream>
using namespace std;

int main()
{
///// Label "Start"
start:

    int input;
            cout  << "\t Pattern Selection \n";
            cout  << "1. Square Pattern \n";
            cout  << "2. Triangle Pattern \n";
            cout  << "3. Diagonal Pattern \n";
            cout  << "4. Reverse Diagonal Pattern \n";
            cout  << "5. Quit \n";
            cout  << endl <<"Enter Your Choice: ";
            cin >> input;

 if( input == 1 )
{
        cout << "Input a number for the Square Pattern: ";
        int v,x,y = 0;
		cin >> v;

		                while (v < 1 || v > 9)
                {
                    cout << "Error! Enter a value between 1 and 9: ";
                    cin >> v;
                }

		for (x = 0; x < v; x++)
		{
		for (y = 0; y < x; y++)
			    cout << v;
				cout << v;
		for (y = 0; y < v - x - 1; y++)
			    cout << v;
			    cout << endl;
		}
}

 if( input == 2 )
{
        cout << "Input a number for the Triangle Pattern: ";
        int v,x,y = 0;
		cin >> v;

		                while (v < 1 || v > 9)
                {
                    cout << "Error! Enter a value between 1 and 9: ";
                    cin >> v;
                }

		for (x = 0; x < v; x++)
		{
		for (y = 0; y < v - x - 1; y++)
			   cout << " ";
               cout << endl;
		for (y = 0; y < x; y++)
			   cout << v;
               cout << v;
		}
}

 if( input == 3 )
{
        cout << "Input a number for the Diagonal Pattern: ";
        int v,x,y = 0;
		cin >> v;

		                while (v < 1 || v > 9)
                {
                    cout << "Error! Enter a value between 1 and 9: ";
                    cin >> v;
                }

		for (x = 0; x < v; x++)
		{
        for (y = 0; y < x; y++)
               cout << "*";
               cout << v;
        for (y = 0; y < v - x - 1; y++)
               cout << "*";
			   cout << endl;
		}
}

 if( input == 4 )
{
        cout << "Input a number for the Reversed Pattern: ";
        int v,x,y = 0;
		cin >> v;

		                while (v < 1 || v > 9)
                {
                    cout << "Error! Enter a value between 1 and 9: ";
                    cin >> v;
                }

 		for (x = v; x >= 0; x--)
		{
        for (y = 0; y < x; y++)
               cout << "*";
			   cout << v;
        for (y = 0; y < v - x; y++)
               cout << "*";
			   cout << endl;
		}
}

 if( input == 5 ){cout  << "Program ended \n"; return 0;}

///// Dont accept any numbers that are not in the menu (1 to 5)
 if( input < 1 || input > 5)  {cout << "\n \t Please enter a number from 1 to 5 \n";}

///// Make 3 line spaces and go to the beginning to loop the menu
cout  << "\n\n\n";
goto start;

}
