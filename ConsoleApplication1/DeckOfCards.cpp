#include "DeckOfCards.h"


DeckOfCards::DeckOfCards()
{

	reset();
}

vector <Card*> DeckOfCards::reset()
{
	int i;
	int CardIndex = 0; //stores the card number to be stored
	free();

	for (i = 0; i < 20; ++i)
	{
		++CardIndex;
		if (i < 10)
		Cards[i] = new Card(CardIndex, "red");

		if (i >= 10)
		{
			Cards[i] = new Card(CardIndex, "black");
		}

		if (i == 9)
			CardIndex = 0;

	}

	return Cards;
}


void DeckOfCards::free()
{
	int i;
	for (i = 0; i < 20; ++i)
		delete Cards[i];
}
DeckOfCards::~DeckOfCards()
{
	free();
}
