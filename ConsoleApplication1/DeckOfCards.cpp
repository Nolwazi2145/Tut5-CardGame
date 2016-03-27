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

	cards = 20;
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


void DeckOfCards::shuffle()
{
	if (cards > 2)
	{
		int i;

		for (i = 0; i < 50; ++i)
		{
			Switch(Cards[rand() % cards + 1], Cards[rand() % 6 + 1]);
		}
	}

	else
		cout << "too little cards to shuffle" << endl;

}

void DeckOfCards::Switch(Card *c1, Card *c2)
{
	Card Hold = *c1;
	*c1 = *c2;
	*c2 = Hold;
}
//frees up memory allocataed to the array of pointers
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
