#include<iostream>

using namespace std;
//Dice class defination
class Dice
{
public:
	Dice();        //Dice constructor
	int roll();    //returns the result of a roll
	float average(Dice, int);  //return the average of dice rolls
	float average(int[], int);    //return the average of all the integers in the array
	~Dice();          //destructor


private:

};  //end class defination
