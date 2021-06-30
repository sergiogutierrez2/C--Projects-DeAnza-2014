// This program displays a hot beverage menu and prompts the user to

// make a selection. A switch statement determines which item the user

// has chosen. A do-while loop repeats until the user selects item E

// from the menu.

// PLACE YOUR NAME HERE

#include <iostream>

#include <iomanip>

using namespace std;

int main()

{
int number;
float cost;
char beverage;
bool validBeverage;


cout << fixed << showpoint << setprecision(2);

do  {
     cout << endl << endl;
     cout << "Hot Beverage Menu" << endl << endl;
     cout << "A: Coffee $1.00" << endl;
     cout << "B: Tea $ .75" << endl;
     cout << "C: Hot Chocolate $1.25" << endl;
     cout << "D: Cappuccino $2.50" << endl << endl;
     //cout << "E: Quit << endl << endl;

    // Fill in the code to read in beverage
    cout << "Please choose a Beverage" << endl;
    cin >> beverage;

     switch(beverage)
     {
          case 'a': case 'A': case 'b': case 'B': case 'c': case 'C': case 'd': case 'D': validBeverage = true;
          break;
          default: validBeverage = false;
     }

     if (validBeverage == true)
          {
          cout << "How many cups would you like?" << endl;
          cin >> number;
          // Fill in the code to begin a switch statement
          // that is controlled by beverage
            switch(beverage)
            {
            case 'a': case 'A': cost = number * 1.0;
            cout << "The total cost is $ " << cost << endl;
            break;

            case 'b': case 'B': cost = number * 0.75;
            cout << "The total cost is $ " << cost << endl;
            break;

            case 'c': case 'C': cost = number * 1.25;
            cout << "The total cost is $ " << cost << endl;
            break;

            case 'd': case 'D': cost = number * 2.50;
            cout << "The total cost is $ " << cost << endl;
            break;

            case 'e': case 'E':
            cout << " Please come again" << endl;
            break;

            default:
            cout << "Invalid selection" << endl;
            cout << " Try again please" << endl;

            }
  // Fill in the code to finish the do-while statement with the
  // condition that beverage does not equal E or e.

          }

  // Fill in the appropriate return statement}

   } while (beverage != 'E' || beverage != 'e');

return 0;
}

