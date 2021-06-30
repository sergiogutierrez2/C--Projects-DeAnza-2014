// This program writes user input to a file.
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
   ofstream outputFile;  // File stream object
   int numberOfTimes;     // Number of times you will write it
   string sales;         // Sales amount for a day

   // Get the number of days.
   cout << "Write message" << endl;
   getline(cin, sales);

   cout << "How many times do you want to write it?";
   cin >> numberOfTimes;

   // Open a file named Sales.txt.
   outputFile.open("Sales.txt");

   // Get the sales for each day and write it
   // to the file.
   for (int count = 1; count <= numberOfTimes; count++)
   {
      // Get the sales for a day.
     cout << sales << endl;

      // Write the sales to the file.
      outputFile << sales << endl;
   }

   // Close the file.
   outputFile.close();
   cout << "Data written to Sales.txt\n";
   return 0;
}
