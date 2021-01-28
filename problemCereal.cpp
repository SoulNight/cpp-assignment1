/***********************************************************
 * AUTHOR     : TONY BAUTISTA
 * STUDENT ID : 2371710
 * CLASS      : CPSC 298
 * SECTION    : MW 12:00 TO 2:00PM
 * DUE DATE   : 01-28-2021
************************************************************/
#include <iostream>
using namespace std;
/***********************************************************
 * Problem 1 (cereal)
 *----------------------------------------------------------
 * This program prompts a user to enter in the weight of a
 * cereal box in ounces. the program ill calculate the weight
 * int tons and how many boxes are needed to yield a metric.
 * The program will then output the information to the user
 *  on the display.
************************************************************/
int main(int argc, char **argv) {

    // VARIABLES
    double const METRIC_TON = 35723.92;  // constant value
    double cerealOunces = 0;             // Input from user
    double numberOfBoxes;                // Calc number of boxes
    double weightInTons = 0;             // Calc weight in tons

    // INPUT from user
    cout << "\nEnter in the weight of a package of breakfast cereal in ounces: ";
    cin  >> cerealOunces;

    // PROCESSING
    weightInTons  = cerealOunces / METRIC_TON;
    numberOfBoxes = METRIC_TON   / cerealOunces;

    // OUTPUT
    cout << "\nThe weight of the cereal package in metric tons: " << weightInTons;
    cout << "\nThe number of boxes that will yield a metric ton of cereal is: " << numberOfBoxes;
    cout << " boxes." << endl;

    return 0;
}
