#include "DeckOfCards.h"


DeckOfCards::DeckOfCards()
{
	vector <Card*> P(20);
	Cards = P;
	reset();
}

vector <Card*> DeckOfCards::reset()
{
	int i;
	int CardIndex = 0; //stores the card number to be  stored
	free();
	cards = 20;
	for (i = 0; i < 20; ++i)
	{
	 
		++CardIndex;
		if (i < 10)
		{
			Cards[i] = new Card(CardIndex, "red");

		}

		if (i >= 10)
			Cards[i] = new Card(CardIndex, "black");
		

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
			Switch(Cards[rand() % cards + 1], Cards[rand() % cards + 1]);
		}
	}

	else
		cout << "too little cards to shuffle" << endl;

}


Card DeckOfCards::peek()
{
	return *Cards[cards - 1];
}

Card DeckOfCards::draw()
{
	if (cards > 2)
	{
		Card temp = peek();
		delete Cards[cards - 1];
		--cards;
		return temp;
	}

	
		Card R;
		cout << "No more cards to draw" << endl;
		return R;
	
}


int DeckOfCards::numberOfCards()
{
	return cards;
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
	for (i = 0; i < cards; ++i)
		delete Cards[i];
}
DeckOfCards::~DeckOfCards()
{
	free();
}
