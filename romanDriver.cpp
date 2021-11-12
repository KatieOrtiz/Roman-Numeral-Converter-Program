//Katie Ortiz - Homework #1 - CS 236 - 2/21/2021
#include "roman.h"

int main() {

	//Declaration of variables
	char romanArr[MAX], choice;
	bool validCheck = false;

	//Create object for the romanType class
	romanType romNC;

	//Loop until the user wants to exit the program
	do {
		//Prompt to the user to enter a Roman numeral
		cout << "Enter a Roman number: ";
		cin >> romanArr;

		for (int i = 0; i < MAX; i++) {
			romanArr[i] = toupper(romanArr[i]);
		}

		validCheck = romNC.checkRomanNumeralValidity(romanArr, validCheck);
		

		//If the user input is a valid Roman numeral, then the romansArray function is called and the user input is passed to this function
		if (validCheck == true) {
			cout << "The equivalent of the Roman numeral " << romanArr << " is ";
			romNC.conversionRomantoDecimal(romanArr);
		}
		

			//Prompt for the user to choose to enter more numbers
			cout << "Try another number(y/n)? ";
			cin >> choice;
			cout << endl;
	

	} while (choice == 'Y' || choice == 'y');

	cout << "Thank you!\n\n";
	system("pause");
	return 0;
}//end of main 