#include "roman.h"

//This checkRomanNumeralValidity function implementation verifies the validity of the user's input
bool romanType::checkRomanNumeralValidity(char romanArr[MAX], bool valid) {
	
	char romanLetterArr[RDLENGTH] = { 'M', 'D', 'C', 'L', 'X', 'V', 'I' };
	int  numLen = 0, i = 0;

	for (i = 0; i < MAX; i++){ //This will fill the array up to 15.
		
		if (romanArr[i] != '\0') {
			numLen++;
		}
		else {
			i = 15;
		}
	}

	for (i = 0; i < numLen; i++) { //Checks to see the length of the user input
		
		valid = false;

		for (int j = 0; j < 7; j++) { //Stores the Roman numeral as an integer

			if (romanArr[i] == romanLetterArr[j]) {

				valid = true;			
			}
		}

		if (valid == false) { //This will check to see if the input was invalid and tell the user to try again

			cout << "Error: This was not a valid input. Please try again.\n\n";
	
		}
	}
	return valid;
}

//This conversionRomantoDecimal function implementation converts the Roman numerals from the user's input to the decimal equivalent
 void romanType::conversionRomantoDecimal(char romanArr[MAX]){

	 char romanLetterArr[RDLENGTH] = { 'M', 'D', 'C', 'L', 'X', 'V', 'I' };
	 int romanValueArr[RDLENGTH] = { 1000, 500, 100, 50, 10, 5, 1 };	
	 int decimalNumber = 0, decimalArr[MAX] = { 0 }, length = 0, i = 0;
	 bool valid = false;

	 //This will fill the array up to the MAX
	 for (i = 0; i < MAX; i++) {

		 if (romanArr[i] != '\0') {
			 length++;
		 }
		 else {
			 i = 15;
		 }
	 }
	 //This checks to see the length of the user input
	 for (i = 0; i < length; i++) {

		 valid = false;
		 //This stores the Roman numeral as an integer
		 for (int j = 0; j < 7; j++) { 

			 if (romanArr[i] == romanLetterArr[j]) {
				 valid = true;
			 }
		 }

		 //Another check to verify the input
		 if (valid == false) { 

			 cout << "Error: This was not a valid input. Please try again.\n\n";
			 return;
		 }
	 }

	 //This starts the conversion
	 for (int i = 0; i < length; i++) {

		 for (int j = 0; j < 7; j++) {

			 if (romanArr[i] == romanLetterArr[j]) {

				 decimalArr[i] = romanValueArr[j];
			 }
		 }
	 }

	 //This will finish the conversion and assign to decimalNumber for the equivalent decimal number
	 for (int i = 0; i < length; i++) {

		 if ((decimalArr[i + 1] > decimalArr[i])) {

			 decimalNumber += (decimalArr[i + 1] - decimalArr[i]);
			 i++;
		 }
		 else {
			 decimalNumber += decimalArr[i];
		 }
	 }

	 //This outputs the equivalent decimal number to the Roman numerals that the user had inputted
	 cout << decimalNumber << "\n\n"; 
 }
