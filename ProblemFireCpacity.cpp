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
 * Problem 2 (fire capacity)
 *----------------------------------------------------------
 * This prgram will ask the user what the room capacity is
 * inorder to determine whether that amount of people can
 * attend the function. The program will then calculate
************************************************************/
int main(int argc, char **argv) {

    int maxRoomCapacity;
    int peopleAttending;
    int maxGuests;

    // INPUT
    cout << "\nWhat is the maximum room capacity for the meeting room? ";
    cin >> maxRoomCapacity;
    cout << "How many people will be in attendance? ";
    cin >> peopleAttending;
    cout << endl;

    //Processing
    maxGuests = maxRoomCapacity - peopleAttending;

    if (peopleAttending >= maxRoomCapacity){
        cout << "\nYou will exceed maximum room capacity of " << maxRoomCapacity << " people for this function." << endl;
        cout << "Please " << maxGuests << " guests in order to comply with fire regulations, Thank You!";
    }else if (peopleAttending < maxRoomCapacity){
        cout << peopleAttending << " people are attending, enjoy your function! ";
    }
    return 0;
}
