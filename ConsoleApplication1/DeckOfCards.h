#ifndef DECK_H
#define DECK_H

#include "Card.h"
#include <vector>

class DeckOfCards
{
public:
	DeckOfCards();
	vector <Card*> reset();
	~DeckOfCards();

private:
	void free();
	vector <Card*> Cards;
};

#endif