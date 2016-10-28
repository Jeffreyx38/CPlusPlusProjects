// Program: FluidQuantities.ccp
//Programmer: Jefferson Zhumi (jz553@drexel.edu)
//last modified: 10/3/16
//Purpose: This program distributes the fluid ounces into various unit, first starting with barrels, 
//then gallons, then quarts, then pints, then cups, then gills, and last amount of tablespoons

//libraries
#include <iostream>
using namespace std;

int main(void)
{
	//--Welcome statement 
	cout << "Hello Welcome! " << endl;
	cout << "This program will allocate fluid ounce units" << endl << endl;

	//--get total fluid ounces 
	//--uses the int type and fluidOuces 
	cout << "How many fluid ounces do you have? ";
	int fluidOunces;
	cin >> fluidOunces;

	//--figure out the number of barrel quantity 
	//--costant ounches per barrel
	const int OZ_PER_BARREL = 5376;
	int barrel = fluidOunces / OZ_PER_BARREL;
	int ozLeft = fluidOunces % OZ_PER_BARREL;

	//--figure out the number of gallon quantity 
	//--costant ounches per gallon
	const int OZ_PER_GALLON = 128;
	int gallon = ozLeft / OZ_PER_GALLON;
	ozLeft = ozLeft % OZ_PER_GALLON;


	//--figure out the number of quart quantity 
	//--costant ounches per quart
	const int OZ_PER_QUART = 32;
	int quart = ozLeft / OZ_PER_QUART;
	ozLeft = ozLeft % OZ_PER_QUART;

	//--figure out the number of pint quantity 
	//--costant ounches per pint
	const int OZ_PER_PINT = 16;
	int pint = ozLeft / OZ_PER_PINT;
	ozLeft = ozLeft % OZ_PER_PINT;

	//--figure out the number of cup quantity 
	//--costant ounches per cup
	const int OZ_PER_CUP = 8;
	int cup = ozLeft / OZ_PER_CUP;
	ozLeft = ozLeft % OZ_PER_CUP;


	//--figure out the number of gill quantity 
	//--costant ounches per gill
	const int OZ_PER_GILL = 4;
	int gill = ozLeft / OZ_PER_GILL;
	ozLeft = ozLeft % OZ_PER_GILL;

	//--figure out the number of tablespoon quantity
	int tablespoon = ozLeft * 2;

	//display results on screen 
	cout << barrel << " barrel (s)" << endl;
	cout << gallon << " gallon (s)" << endl;
	cout << quart << " quart (s)" << endl;
	cout << pint << " pint (s)" << endl;
	cout << cup << " cup (s)" << endl;
	cout << gill << " gill (s)" << endl;
	cout << tablespoon << " tablespoons" << endl;

	//pause the console
	system("pause");
	//cin.get();
	return 0;
}