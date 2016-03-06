//Dice class member-function definations
#include "Dice.h"
#include<iostream>


using namespace std;

//constructor
Dice::Dice()
{
}
//use random number generator to return the result of the roll
int Dice::roll()
{
	int result = rand() % 6 + 1;
	return result;


} //end function roll

  //function that returns the average of dice rolls made
float Dice::average(Dice Objct, int noOfRolls)
{

	float sum = 0;
	for (int count = 1; count <= noOfRolls; ++count)
		sum += Objct.roll();

	return sum / noOfRolls;

} //end function average

  //overloaded function that returns the average of all the integers in the array
float Dice::average(int rollsArray[], int noOfIntegers)
{
	float sum = 0;

	for (int i = 0; i < noOfIntegers; ++i)
		sum += rollsArray[i];

	return sum / noOfIntegers;
} //end function average

  //destructor
Dice::~Dice()
{
}
