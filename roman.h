//Katie Ortiz - Homework #1 - CS 236 - 2/21/2021
#define MAX 15
#define RDLENGTH 7
#include <iostream>
using namespace std;

//romanNumeralClass class definition
class romanType {
private:
	//Member variable
	char romanNumeral;

public:
	//romanType class constructor
	romanType(){
		char romanNumeral = ' ';
	}

	//Member function definitions
	bool checkRomanNumeralValidity(char romanArr[MAX], bool valid);
	void conversionRomantoDecimal(char romanArr[MAX]);

};	
