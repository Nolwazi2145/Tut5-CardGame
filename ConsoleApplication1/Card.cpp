#include "Card.h"
#include<string>
#include<iostream>
using namespace std;


Card::Card()
{
	string Colour;
	int Number;
	for (Num = 1; Num <= 10; Num++)
	{
		Number = Num;
	}
	if (Coloor == "red" || Coloor == "black")
	{
		Colour = Coloor;
	}
	else
	{
		cout << "invalid card" << endl;
	}
}
Card::~Card()
{
}
string Card::getColour()
{
	return Colour;
}
int Card::getNumber()
{
	return Number;
}
void DisplayCard()
{
	cout << "Colour number" << endl;
};