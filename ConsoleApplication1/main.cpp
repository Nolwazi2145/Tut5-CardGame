#include<iostream>
#include <string>
#include "Card.h"
#include "DeckOfCards.h"
using namespace std;

int main()
{

	Card card(3, "black");
	
	cout << "CARD CLASS TESTING..." << endl;
	cout << "__________________________________________________________________" << endl;
	cout << "__________________________________________________________________\n\n" << endl;
	cout << "Testing color and number methods" << endl;
	cout << "Number: " << card.number();
	cout << "\tColour: " << card.colour();
	cout << endl;
	cout << "\n\nTesting the print method funtionality...." << endl;;
	cout << "\nprinting colour and number of card:";
	card.print();
	cout << "\n\n\n\n" << endl;
	cout << "_____________________________________________________________________" << endl;
	cout << "_____________________________________________________________________\n\n\n" << endl;
	
	
	
	
	
	cout << "TESTING THE DECKOFCARDS CLASS" << endl;
	cout << "______________________________________________________________________" << endl;
	cout << "______________________________________________________________________\n\n" << endl;
	

	DeckOfCards Stack;
	cout << "reach" << endl;
	cout << "testing the draw and numberOfCards methods " << endl;
	cout << "Drawing every card out " << endl;
	cout << "______________________________________________________________________" << endl;
	for (int i = 0; i < 18; ++i)
	{
		Stack.draw().print();
		cout << "\n\t\tCards left: " << Stack.numberOfCards() << endl;
	}
	cout << "______________________________________________________________________" << endl;

	
	cout << "\n\n shuffle  the " << Stack.numberOfCards() << " cards  left" << endl;
	Stack.shuffle();
	cout << endl << endl;
	cout << "\n\nreset the deck" << endl;
	Stack.reset();
	

	cout << "shuffling the deck" << endl;
	Stack.shuffle();
	cout << endl;
	cout << "Peeking at the top card " << endl;
	Stack.peek().print();
	cout << "\n\nDrawing all the cards of shuffled deck" << endl;
	
	cout << "______________________________________________________________________" << endl;
	for (int i = 0; i < 21; ++i)
	{
		Stack.draw().print();
		cout << "\n\t\tCards left: " << Stack.numberOfCards() << endl;
	}
	cout << "______________________________________________________________________" << endl;
	
	return 0;

}