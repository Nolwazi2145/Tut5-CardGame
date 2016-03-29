#include "Card.h"
#include<string>
#include<iostream>
using namespace std;


//default constructor
Card::Card()
{

}
Card::Card(int num, string color)
{
	if ((num > 0 && num <= 10) && (color == "red" || color == "black"))
	{
		Number = num;
		Colour = color;
	}
	else
		cout << "invalid thing" << endl;
}


int Card::number()
{
	return Number;
}

string Card::colour()
{
	return Colour;
}

void Card::print()
{
	cout <<colour() << " " <<number() ;

}
Card::~Card()
{

}