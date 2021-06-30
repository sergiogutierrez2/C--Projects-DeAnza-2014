// This program writes data to a file
#include <iostream>
#include <fstream>
using namespace std;

int main ()
{
    ofstream outputFile;
    int number1, number2, number3;
    //open an output file
    outputFile.open ("loli.txt");

    //Get three numbers from the user

    cout << "Now writing data to the file.\n";
    //Write four names to the file.
    cout << "Enter a number: ";
    cin >> number1;
    cout << "Enter another number: ";
    cin >> number2;
    cout << "Enter one more number: ";
    cin >> number3;

    outputFile << number1 << endl;
    outputFile << number2 << endl;
    outputFile << number3 << endl;
    cout << "The numbers were saved to a file.\n";

    //Close the file
    outputFile.close();
    cout << "Done.\n";
    return 0;
}
