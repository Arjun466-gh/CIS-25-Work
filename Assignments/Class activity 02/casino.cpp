#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

void displayCard(string card) {
    const int width = 40;
    string label = "Casino Card:";
    int totalFill = width - label.length() - card.length();
    string fill(totalFill, '-');

    // Top border
    cout << string(width, '*') << endl;
    cout << "*" << setw(width - 2) << "*" << endl; // Empty line for spacing

    // Card description formatted
    cout << "* " << label << fill << card << " *" << endl;

    cout << "*" << setw(width - 2) << "*" << endl; // Empty line for spacing
    cout << string(width, '*') << endl;
}

string getRandomCard() {
    string ranks[] = {"Ace", "2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King"};
    string suits[] = {"Hearts", "Diamonds", "Clubs", "Spades"};

    srand(time(0)); // Seed random number
    string rank = ranks[rand() % 13];
    string suit = suits[rand() % 4];

    return rank + " of " + suit;
}

int main() {
    string card = getRandomCard();
    displayCard(card);
    return 0;
}
