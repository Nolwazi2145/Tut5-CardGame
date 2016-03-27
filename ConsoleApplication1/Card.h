#ifndef Card_H
#define Card_H
#include <iostream>
#include <string>
using namespace std;
class Card
{
public:
	Card();
	~Card();
	string getColour();
	int getNumber();
		void printCard();

};
#endif

