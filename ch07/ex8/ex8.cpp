#include <iostream>

using namespace std;

enum card_suit { clubs, diamonds, hearts, spades };


class Card {
    public:
	card_suit suit : 2; // 2 bits 0-3
	unsigned rank : 4; // 4 bits 0-15
	unsigned marked : 1; // 1 bit 0-1
	unsigned copies : 6; // 6 bits 0-63 
};


int
main() {
    Card card = Card(); 
    card.suit = hearts;
    card.rank = 10;
    card.marked = false;
    card.copies = 1;
    
    cout << card.copies << endl;

    return 0;
}
