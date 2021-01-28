/***********************************************************
 * AUTHOR     : TONY BAUTISTA
 * STUDENT ID : 2371710
 * CLASS      : CPSC 298
 * SECTION    : MW 12:00 TO 2:00PM
 * DUE DATE   : 01-28-2021
************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;
/***********************************************************
 * Problem 3 (employee pay )
 *----------------------------------------------------------
 * This program prompts a user to enter in the amount of hours
 * worked in a wokr week. The program will calculate the
 * grosspay, social security tax, federal income tax,
 * state tax, medical insurance and then will output
 * netpay.
************************************************************/

int main(int argc, char **argv) {

    //CONSTANTS
    const double REGULAR_HOURS = 40.00;     // work weeek input

    //VARIABLES
    float hourlyPay = 16.00;          //CALC  hourly pay
    float hoursWorked;                 //INPUT from user
    float socSecTax;                   //CALC
    float fedIncomeTax;                //CALC
    float stateIncomeTax;              //CALC
    float grossPay;                    //CALC
    float netPay;                      //CALC
    float medicalInsurance = 10.00;    //CALC
    float overTime = 24.00;            //CALC
    float totalWithHoldings = 0.00;    //CALC

    // INPUT
    cout << "How many hours did you work for the week? ";
    cin  >> hoursWorked;

    if (hoursWorked > REGULAR_HOURS)
    {
        grossPay = (hoursWorked - REGULAR_HOURS) * overTime + (REGULAR_HOURS * hourlyPay) ;
    }
    else
    {
        grossPay = REGULAR_HOURS * hourlyPay;
    }

    //CALCULATE
    socSecTax         = .06 * grossPay;
    fedIncomeTax      = .14 * grossPay;
    stateIncomeTax    = .05 * grossPay;
    totalWithHoldings = socSecTax + fedIncomeTax + stateIncomeTax + medicalInsurance;
    netPay = grossPay - totalWithHoldings;

    // OUTPUT
    cout << fixed << setprecision (2) << "\nYou're gross pay for the week is: $" << grossPay;
    cout << fixed << setprecision (2) << "\nYou're social security tax deduction is: $" << socSecTax;
    cout << fixed << setprecision (2) << "\nYou're federal income tax deduction is: $" << fedIncomeTax;
    cout << fixed << setprecision (2) << "\nYou're state income tax deduction is: $" << stateIncomeTax;
    cout << fixed << setprecision (2) << "\nYou're net pay or take home pay is: $" << netPay << endl << endl;

    return 0;
}
