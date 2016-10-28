//Program: leap.ccp
//Programmer: Jefferson Zhumi (jz553@drexel.edu)
//last modified: 10/21/16
//Purpose: this program tests whether a year is a leap year


//library 
#include <iostream>
using namespace std;

/*---------------------------------------------------------------------------
	tests whether a year is a leap year
	@param year -user's year input
	@return whether the boolean is true or false
	REQUIREMENTS:
	none.
	NOTES: Only works for positive intergers
	leap years has three criterias: 
		The year can be evenly divided by 4;
		If the year can be evenly divided by 100, it is not a leap year, unless
		The year is also evenly divisible by 400. Then it is a leap year.
-------------------------------------------------------------------------*/

bool leap_year(int year)
{
	//--test whether a year is lear or not 
	//--if the year can be evenly divided by 4, then it's leap
	//--if the year can be evenly divided by 100, it is not a leap year, 
	//--unless the year is also evenly divisible by 400. Then it is a leap year.
	if (year % 4 == 0)
	{
		if (year % 400 == 0 || year % 100 != 0)
		{
			cout << year << " is a leap year." << endl;
		}//end if
		else 
		{
			cout <<  year << " is not a leap year." << endl;
		}//end else
	}//end if
	else
	{
		cout << year << " is not a leap year." << endl;
	}//end else 

	//returns bool when true 
	return true;

}//end leap_year()


int main(void)
{

	//--welcome statement 
	cout << "Welcome! " << endl;
	cout << "This program will test if a year is a leap year." << endl << endl;
	
	
	//8 different years
	int yearOne = 1900;
	int yearTwo = 1996;
	int yearThree= 1550;
	int yearFour = 2016; 
	int yearFive = 2005;
	int yearSix = 1405;
	int yearSeven = 1954;
	int yearEight = 2000;


	//calls 8 different functions to test 
	cout << "Eight different cases: " << endl;
	leap_year(yearOne);
	leap_year(yearTwo); 
	leap_year(yearThree);
	leap_year(yearFour);
	leap_year(yearFive);
	leap_year(yearSix);
	leap_year(yearSeven);
	leap_year(yearEight);

	//pauses the program 
	system("pause");

	//cin.get();
	return 0; //halts the program 
}//ends main()