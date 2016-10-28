//Program: TuitionGrowth.ccp
//Programmer: Jefferson Zhumi (jz553@drexel.edu)
//last modified: 10/3/16
//Purpose: This program estimates the cost of a college education 
//for five years of study given a percentage rate and initial cost of tuition. 

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;


int main(void)
{
	//--Welcome statement 
	cout << "Hello Welcome! " << endl;
	cout << "This program will project the cost of a college education" << endl << endl;

	//--gets the initial tution in amount of dollars 
	cout << "Please enter tuition in amount of dollars: ";
	long tuition;
	cin >> tuition;

	//--from dollars to cents
	tuition = tuition * 100;

	//--gets the percent 
	cout << "Please enter tuition percent: ";
	double tuitionPercent;
	cin >> tuitionPercent;

	//--from cents to dollar 
	tuitionPercent = (tuitionPercent / 100) + 1;

	//--total initialization
	long total = 0;

	//--prints the first year's tuition 
	//--add	the	first year's tuition to	the	total
	//--update	the	tuition	by	multiplying the	tuition	by	the	rate
	cout << "Tuition of year 1 is: " << tuition / 100 << "."
		<< setw(2) << setfill('0') << tuition % 100 << endl;
	total = tuition + total;
	tuition = tuition * tuitionPercent;

	//--prints the second year's tuition
	//--Add	the	second	year's	tuition	to	the	total
	//--Update	the	tuition	by	multiplying the	tuition	by	the	rate 
	cout << "Tuition of year 2 is: " << tuition / 100 << "."
		<< setw(2) << setfill('0') << tuition % 100 << endl;
	total = tuition + total;
	tuition = tuition * tuitionPercent;

	//--prints the third year's tuition
	//--Add	the	third	year's	tuition	to	the	total
	//--Update	the	tuition	by	multiplying the	tuition	by	the	rate 
	cout << "Tuition of year 3 is: " << tuition / 100 << "."
		<< setw(2) << setfill('0') << tuition % 100 << endl;
	total = tuition + total;
	tuition = tuition * tuitionPercent;

	//--prints the fourth year's tuition
	//--Add	the	fourth	year's	tuition	to	the	total
	//--Update	the	tuition	by	multiplying the	tuition	by	the	rate 
	cout << "Tuition of year 4 is: " << tuition / 100 << "."
		<< setw(2) << setfill('0') << tuition % 100 << endl;
	total = tuition + total;
	tuition = tuition * tuitionPercent;

	//--prints fifth year's tuition
	//--Add	the	fifth year's tuition to	the	total
	//--Update the	tuition	by	multiplying the	tuition	by	the	rate 
	cout << "Tuition of year 5 is: " << tuition / 100 << "."
		<< setw(2) << setfill('0') << tuition % 100 << endl;
	total = tuition + total;
	tuition = tuition * tuitionPercent;


	//--prints the total tuition for all 5 years
	cout << "Total Tuition Cost is: " << total / 100 << "."
		<< setw(2) << setfill('0') << total % 100 << endl;

	//pause the console
	system("pause");
	//halts the program 
	return 0;
}