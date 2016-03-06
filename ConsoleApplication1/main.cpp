//main subroutine to test the overloaded fuctions and dice class
#include "Dice.h"  
#include<iostream>


using namespace std;

int main()
{
	int noOfRolls;
	float averageRolls;
	int throwsArray[5] = {};

	Dice MyDice, ArrayDice;  //instantiate objects of class dice

							 //prompting for the number of rolls to pass to function average
	cout << "Please enter the number of rolls" << endl;
	cin >> noOfRolls;
	averageRolls = MyDice.average(ArrayDice, noOfRolls);
	cout << "The average of all throws is:" << averageRolls << endl;
	cout << endl;

	//populating the array of integers
	for (int i = 0; i < 5; ++i)
		throwsArray[i] = MyDice.roll();
	cout << "The average of all  of the integers in the array is: " << ArrayDice.average(throwsArray, 5) << endl;

};// end main