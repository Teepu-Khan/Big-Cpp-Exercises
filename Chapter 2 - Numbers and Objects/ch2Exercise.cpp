// Big C++ 2nd Edition: P2.19
//
// This program simply demonstrates a basic understanding of the concatenation function. A long string
// containing every month's name is used to display the month based on the month number that the user
// inputs.
// 
// Programmer: Teepu Khan
// Date: 9/6/2017
// Class: ch2Exercise.cpp

#include <iostream>
#include <string>
using namespace std;

int main()
{
	// Each month has the same length, to account for a simple equation to concatenate for the function. White space is put in when there
	// are no appropriate characters.
	string monthName = "January  February March    April    May      June     July     August   SeptemberOctober  November December ";

	cout << "Please input the number of the month: ";
	int input;
	cin >> input;

	// The substring equation decrements the input value by 1 to account for standard index starting at 0 not 1. Then it's multiplied by
	// 9 in order to get to the appropriate location in the string.
	cout << "The month " << input << " is " 
		<< monthName.substr((input - 1) * 9, 9) << "\n\n";

	return 0;
}
