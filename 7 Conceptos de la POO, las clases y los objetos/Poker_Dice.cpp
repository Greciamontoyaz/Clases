#include <iostream>
#include <cstring>
#include <ctime>
#include <algorithm>

using namespace std;

const string labels[] = {"9", "10", "Jack", "Queen", "King", "Ace"};

enum Hands {
    Five_of_a_kind,
    Four_of_a_kind,
    Full_house,
    Straight,
    Three_of_a_kind,
    Two_pair,
    One_pair,
    Bust
};

class Player {
private:
    string name;
    int dice[5];
    Hands hand;
    int mycount[6];
    int highest_card;

public:
    void roll_dice() {
        for (int i = 0; i < 5; i++) {
            dice[i] = rand() % 6;
        }
    }

    void show_hand() {
        for (int i = 0; i < 5; i++)
            cout << labels[dice[i]] << "\t";
        cout << endl;
    }

    void kind_of_hand() {
        sort(dice, dice + 5);
        fill(mycount, mycount + 6, 0);
        
        for (int i = 0; i < 5; i++) {
            mycount[dice[i]]++;
        }

        if (any_of(mycount, mycount + 6, [](int i) { return i == 5; })) {
            cout << "There are five of a kind.\n";
            hand = Five_of_a_kind;
        } else if (any_of(mycount, mycount + 6, [](int i) { return i == 4; })) {
            cout << "There are four of a kind.\n";
            hand = Four_of_a_kind;
        } else if (any_of(mycount, mycount + 6, [](int i) { return i == 3; }) &&
                   any_of(mycount, mycount + 6, [](int i) { return i == 2; })) {
            cout << "Full house.\n";
            hand = Full_house;
        } else if (all_of(mycount, mycount + 6, [](int i) { return i <= 1; }) &&
                   (mycount[0] == 0 || mycount[5] == 0)) {
            cout << "Straight.\n";
            hand = Straight;
        } else if (all_of(mycount, mycount + 6, [](int i) { return i <= 1; }) &&
                   mycount[0] == 1 && mycount[5] == 1) {
            cout << "Bust.\n";
            hand = Bust;
        } else if (any_of(mycount, mycount + 6, [](int i) { return i == 3; })) {
            cout << "Three of a kind.\n";
            hand = Three_of_a_kind;
        } else if (count(mycount, mycount + 6, 2) == 2) {
            cout << "Two pairs.\n";
            hand = Two_pair;
        } else if (any_of(mycount, mycount + 6, [](int i) { return i == 2; })) {
            cout << "One pair.\n";
            hand = One_pair;
        }
        
        highest_card = distance(mycount, max_element(mycount, mycount + 6));
    }

    friend class Dealer;
};

class Dealer {
public:
    void CompareHand(Player player1, Player player2) {
        if (player1.hand == player2.hand) {
            cout << "The hands are equal.\n";
            if (player1.highest_card == player2.highest_card) {
                cout << "The highest cards are equal.\n";
            } else if (player1.highest_card > player2.highest_card) {
                cout << "Player 1 wins with a higher card.\n";
            } else {
                cout << "Player 2 wins with a higher card.\n";
            }
        } else if (player1.hand < player2.hand) {
            cout << "Player 1 wins.\n";
        } else {
            cout << "Player 2 wins.\n";
        }
    }
};

int main() {
    srand(time(NULL));

    Player player1, player2;
    Dealer dealer;

    player1.roll_dice();
    player1.show_hand();
    player1.kind_of_hand();

    player2.roll_dice();
    player2.show_hand();
    player2.kind_of_hand();

    dealer.CompareHand(player1, player2);

    return 0;
}
