//Glenn Truett
// Final program for C++

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;


string Welcome(string codeName = "Papa Smurf");
void handDealt();

// Class to represent a playing card
class Card {
private:
    string rank;
    string suit;
public:
    Card(string rank, string suit) {
        this->rank = rank;
        this->suit = suit;
    }
    string getRank() { return rank; }
    string getSuit() { return suit; }
};


int main() {
	
	Welcome();
    cout << "\n\n" << endl;
    handDealt();

    return 0;

}


string Welcome(string fName)
{
	string codeName = "Papa Smurf";
	
	cout << "Please enter your first name." << endl;
	cin >> fName;
	cout << "Hello " << fName << " You have just joined the spy organization Citadel" << endl;
	cout << "Welcome to your first mission" << endl;
	cout << "First you need a code name.  One will be assigned to you." << endl;
	cout << "Your new code name is now " << codeName << endl;
	cout << fName << " is no longer your name " << endl;
	cout << "You will only be known as " << codeName << endl; 

	return fName; 

}


void handDealt() {

    cout << "The 5 random cards are: " << endl;

    // Create an array to hold all 52 cards in a deck
    Card deck[52] = {
        Card("ACE", "CLUBS"), Card("TWO", "CLUBS"), Card("THREE", "CLUBS"), Card("FOUR", "CLUBS"),
        Card("FIVE", "CLUBS"), Card("SIX", "CLUBS"), Card("SEVEN", "CLUBS"), Card("EIGHT", "CLUBS"),
        Card("NINE", "CLUBS"), Card("TEN", "CLUBS"), Card("JACK", "CLUBS"), Card("QUEEN", "CLUBS"),
        Card("KING", "CLUBS"), Card("ACE", "DIAMONDS"), Card("TWO", "DIAMONDS"), Card("THREE", "DIAMONDS"),
        Card("FOUR", "DIAMONDS"), Card("FIVE", "DIAMONDS"), Card("SIX", "DIAMONDS"), Card("SEVEN", "DIAMONDS"),
        Card("EIGHT", "DIAMONDS"), Card("NINE", "DIAMONDS"), Card("TEN", "DIAMONDS"), Card("JACK", "DIAMONDS"),
        Card("QUEEN", "DIAMONDS"), Card("KING", "DIAMONDS"), Card("ACE", "HEARTS"), Card("TWO", "HEARTS"),
        Card("THREE", "HEARTS"), Card("FOUR", "HEARTS"), Card("FIVE", "HEARTS"), Card("SIX", "HEARTS"),
        Card("SEVEN", "HEARTS"), Card("EIGHT", "HEARTS"), Card("NINE", "HEARTS"), Card("TEN", "HEARTS"),
        Card("JACK", "HEARTS"), Card("QUEEN", "HEARTS"), Card("KING", "HEARTS"), Card("ACE", "SPADES"),
        Card("TWO", "SPADES"), Card("THREE", "SPADES"), Card("FOUR", "SPADES"), Card("FIVE", "SPADES"),
        Card("SIX", "SPADES"), Card("SEVEN", "SPADES"), Card("EIGHT", "SPADES"), Card("NINE", "SPADES"),
        Card("TEN", "SPADES"), Card("JACK", "SPADES"), Card("QUEEN", "SPADES"), Card("KING", "SPADES")
    };


    // Create a random number generator object and seed it with the current time
    srand(time(0)); // seeds the random number generator 

    // using random number gerator deal 5 random cards
    for (int i = 0; i < 5; i++) {
        int gtnewCard[52];
        bool cardExists;
        int newCard;
        int handNewcard;
        do {

            newCard = rand() % 52 + 1; // Generate a random number between 1 and 52
            handNewcard = newCard;
            cardExists = false;


            // Check if the number already exists in the array
            for (int j = 0; j < i; j++) {
                if (newCard == j) {
                    cardExists = true;
                    break;
                }
            }
        } while (cardExists);




        cout << deck[handNewcard].getRank() << " of " << deck[handNewcard].getSuit() << endl;


    }

}




