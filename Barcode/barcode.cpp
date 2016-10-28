//Program: Barcode.ccp
//Programmer: Jefferson Zhumi (jz553@drexel.edu)
//last modified: 10/19/16
//Purpose: This program asks the user for a zip code and prints the bar code


//library
#include <iostream>
#include <string>
using namespace std;

/*---------------------------------------------------------------------------
fuction converts digit to barcode
@param value -single digit of the zipcode
@return the bar code given the digit input
REQUIREMENTS:
#include <string>
NOTES: Only works for positive intergers
Default will be printed given a wrong argument
PROGRAMMER: Jefferson Zhumi
-------------------------------------------------------------------------*/
string convertDigit(int value){

	//--string bar declaration & initialization
	string bar = "";

	//--switch case for intergers 0-9
	//--each digit reprents a barcode 
	//--once a case is executed, it will return the given barcode
	switch (value)
	{
	case 1:
		bar = ":::||";
		break;
	case 2:
		bar = "::|:|";
		break;
	case 3:
		bar = "::||:";
		break;
	case 4:
		bar = ":|::|";
		break;
	case 5:
		bar = ":|:|:";
		break;
	case 6:
		bar = ":||::";
		break;
	case 7:
		bar = "|:::|";
		break;
	case 8:
		bar = "|::|:";
		break;
	case 9:
		bar = "|:|::";
		break;
	case 0:
		bar = "||:::";
		break;
	default:
		bar = "";
		break;
	}//ends switch case

	//returns barcode of given input
	return bar;
}//end convertDigit()

/*---------------------------------------------------------------------------
creates a check digit from a five digit number
Adds up all digits, and choose the check digit to make
sum a multiple of 10
@param zipCode - user's zipcode input
@return the check digit result 0-9
REQUIREMENTS:
none.
NOTES: Only works for positive intergers
constant sum_of_digits of 20
uses modulous and division to break the zipcode
PROGRAMMER: Jefferson Zhumi
-------------------------------------------------------------------------*/

int makeCheckDigit(int zipCode)
{

	//--first, second, third, fourth, and fifth digit extracted from zipcode
	int firstDigit = zipCode / 10000;
	int secondDigit = (zipCode / 1000) % 10;
	int thirdDigit = (zipCode / 100) % 10;
	int fourthDigit = (zipCode / 10) % 10;
	int fifthDigit = zipCode % 10;

	//--total zipcode summation 
	int total = firstDigit + secondDigit + thirdDigit + fourthDigit + fifthDigit;

	//--constant number-equal to 20
	const int SUM_OF_DIGIT = 20;

	//--computes the check digit of the zipcode
	int checkDigit = (SUM_OF_DIGIT - total);

	//--returns the check digit
	return checkDigit;

}//end makeCheckDigit()

/*---------------------------------------------------------------------------
concatenates the strings of each barcode
computes final string result to be called from main
@param zipCode - user's zipcode input
@return the barcode result of given zipcode
REQUIREMENTS:
#include <string>
convertDigit() function
makeCheckDigit() function
NOTES: Only works for positive intergers
uses modulous and division to break the zipcode
PROGRAMMER: Jefferson Zhumi
---------------------------------------------------------------------------*/
string barcode(int zipCode)
{
	//--first, second, third, fourth, and fifth digit extracted from zipcode
	//--calls convertDigit fuction 
	//--returns each codebar for each extracted digit 
	int firstDigit = zipCode / 10000;
	convertDigit(firstDigit);
	int secondDigit = (zipCode / 1000) % 10;
	convertDigit(secondDigit);
	int thirdDigit = (zipCode / 100) % 10;
	convertDigit(thirdDigit);
	int fourthDigit = (zipCode / 10) % 10;
	convertDigit(fourthDigit);
	int fifthDigit = zipCode % 10;
	convertDigit(fifthDigit);

	//--barCodeResult string concatenation for ALL barcode 
	string barCodeResult = convertDigit(firstDigit) + convertDigit(secondDigit) + convertDigit(thirdDigit)
		+ convertDigit(fourthDigit) + convertDigit(fifthDigit);

	//--calls makeCheckDigit() for the barcode of checkdigit 
	//--returns barcode and passes to checkDigitResult 
	int checkDigitResult = makeCheckDigit(zipCode);

	//--concatenates zipcode barcode with checkdigit barcode 
	barCodeResult = "|" + barCodeResult + convertDigit(checkDigitResult) + "|";

	//--retuns the completed barcode 
	return barCodeResult;
}//end barcode()

/*---------------------------------------------------------------------------
The main will ask the user to enter a zipcode
It will print the barcode given the input are positive intergers
otherwise will print an error message
REQUIREMENTS:
#include <string>
barcode() function
-----------------------------------------------------------------------------*/
int main(void)
{

	//--welcome statement 
	cout << "Welcome! " << endl;
	cout << "This program will print the barcode of a zipcode" << endl << endl;

	//--get user zip code
	//--uses the int type and variable zipCode
	cout << "Please enter zipcode (5 digits): ";
	int zipCode;
	cin >> zipCode;

	//--calls barcode funtion()
	//--passes the barcode to barCodeResult
	string barCodeResult = barcode(zipCode);

	//--if positive interger, prints the barcode
	if (zipCode >= 0)
	{
		cout << "barcode: " << barCodeResult << endl;
	}//end if
	else //--else, prints an error message
	{
		cout << "Error: the zipcode is invalid";
	}//end else

	//pauses the program
	system("pause");

	return 0; //halts the program 
}//ends main()