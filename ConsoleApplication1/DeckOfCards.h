#ifndef DECK_H
#define DECK_H

#include "Card.h"
#include <vector>

class DeckOfCards
{
public:
	DeckOfCards();
	vector <Card*> reset();
	void shuffle();
	Card peek();
	Card draw();
	int numberOfCards();
	~DeckOfCards();

private:
	void free();
	void Switch(Card *, Card *);
	int cards = 0; // number of cards in the deck
	vector <Card*> Cards;
	
};

#endif