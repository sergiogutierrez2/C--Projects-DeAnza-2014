// This program will write the name, address and telephone

// number of the programmer.

// Sergio Gutierrez

#include <iostream>

using namespace std;

int main()

{
string name, address, citystatezip, telephone;

// Fill in this space to write your first and last name
cout << "Please enter your first and last name" << endl;
cin >> name;
getline (cin, name);

// Fill in this space to write your address (on new line)
cout << "Please enter your address" << endl;
cin >> address;
getline (cin, address);

// Fill in this space to write your city, state and zip (on new line)
cout << "Please enter your city, state and zip" << endl;
cin >> citystatezip;
getline (cin, citystatezip);

// Fill in this space to write your telephone number (on new line)
cout << "Please enter your telephone number" << endl;
cin >> telephone;
getline (cin, telephone);

cout << name << address << citystatezip << telephone;

return 0;

}
