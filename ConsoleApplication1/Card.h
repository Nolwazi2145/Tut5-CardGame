#ifndef Card_H
#define Card_H
#include <iostream>
#include <string>
using namespace std;
class Card
{
private:
	int Num;
	int Number;
	string Coloor;
	string Colour;
public:
	Card();
	~Card();
	string getColour();
	int getNumber();
	void DisplayCard();

};
#endif

