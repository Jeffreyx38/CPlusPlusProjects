// Program: TimeWorld.ccp
//Programmer: Jefferson Zhumi (jz553@drexel.edu)
//last modified: 10/3/16
//Purpose: this program asks the user for the current time in Philadelphia and returns 
//the time difference of the cities: Honolulu, Seattle, London, Moscow, Hong Kong, and Auckland 


//library
#include <iostream>
#include <iomanip>
using namespace std;


int main(void)
{
	//Welcome statement 
	cout << "Hello Welcome! " << endl;
	cout << "This program will give you the time of another country" << endl << endl;

	//asks the user to input the time in Philadelphia
	//the input is an integer 
	cout << "What is the current time in Philadelphia? ";
	int time;
	cin >> time;

	//retrives the first two digits of the given input 
	//uses the divider operator 
	int firstDigits = time / 100;

	//retrives the last two digits of the given input
	//uses the modolus operator 
	int lastDigits = time % 100;

	//Prints the time in Honolulu
	//its uses the format setw and setfil for the '0'
	//the library used is iomanaip library
	cout << "The time in Honolulu is: " << setw(2) << setfill('0')
		<< ((firstDigits - 6) + 24) % 24 << lastDigits << endl;


	//Prints the time in Seattle
	//its uses the format setw and setfil for the '0'
	//the library used is iomanaip library
	cout << "The time in Seattle  is: " << setw(2) << setfill('0')
		<< (firstDigits - 3) % 24 << lastDigits << endl;

	//Prints the time in london
	//its uses the format setw and setfil for the '0'
	//the library used is iomanaip library
	cout << "The time in london is: " << setw(2) << setfill('0')
		<< (firstDigits + 5) % 24 << lastDigits << endl;

	//Prints the time in moscow
	//its uses the format setw and setfil for the '0'
	//the library used is iomanaip library
	cout << "The time in moscow is: " << setw(2) << setfill('0')
		<< (firstDigits + 8) % 24 << lastDigits << endl;

	//Prints the time in Hong Kong
	//its uses the format setw and setfil for the '0'
	//the library used is iomanaip library
	cout << "The time in Hong Kong is: " << setw(2) << setfill('0')
		<< (firstDigits + 12) % 24 << lastDigits << endl;

	//Prints the time in Auckland
	//its uses the format setw and setfil for the '0'
	//the library used is iomanaip library
	cout << "The time in Auckland is: " << setw(2) << setfill('0')
		<< (firstDigits + 17) % 24 << lastDigits << endl;

	//pause the console
	system("pause");

	//halts the program 
	return 0; 
}//ends main()