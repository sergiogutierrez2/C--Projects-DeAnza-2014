// This program calculates the area of a circle
// The formula for it is Pi times the radius squared.
/*
#include <iostream>
#include <cmath> // needed for pow function
using namespace std;

int main ()
{
    double Pi, radius, area;

    Pi = 3.1416;

    cout << "What is the radius of the circle?" << endl;
    cin >> radius;

    area = Pi * (radius * radius);

    cout << "The area of the circle is " << area << endl;

    return 0;

}
*/
// This program calculates the area of a circle
// The formula for it is Pi times the radius squared.

#include <iostream>
#include <cmath> // needed for pow function
using namespace std;

int main ()
{
    double Pi, radius, area;

    Pi = 3.1416;


    cout << "This program calculates the area of a circle." << endl;
    cout << "What is the radius of the circle?" << endl;
    cin >> radius;

    area = Pi * pow (radius, 2.0);

    cout << "The area of the circle is " << area << endl;

    return 0;

}
