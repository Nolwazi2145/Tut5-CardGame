#ifndef Card_H
#define Card_H
#include <iostream>
#include <string>

using namespace std;

class Card
{
private:
	int Number = NULL;
	string Colour ="No card";
public:
	Card();
	Card(int, string);
	~Card();
	string colour();
	int number();
	void print();

};
#endif

