#include <iostream>
#include <cstring>
#include <ctime>
#include <algorithm>

using namespace std;

const string labels[] = {"9", "10", "Jack", "Queen", "King", "Ace"};

enum Hands {Five_of_a_kind,//
            Four_of_a_kind,	//
            Full_house,	//
            Straight,	//
            Three_of_a_kind,	//
            Two_pair,	//
            One_pair,	//
            Bust };//


class Player{
  private:
    string name;
    int dice[5];
    Hands hand;
    int *card;
    int mycount[6];
    
  public:
    void roll_dice(){
      for(int i=0; i<5; i++) {
        dice[i]=rand()%6;       
      }
    }
    void show_hand(){
      for(int i=0; i<5; i++)
        cout<<labels[ dice[i]] <<" \t";
      cout<<endl;    
    }
  
    void kind_of_hand(){
      sort(dice, dice + 5);
      for(int i=0; i<6; i++){
       mycount[i]= count (dice, dice+5, i);
      }

    if ( any_of(mycount, mycount+6, [](int i){return i==5;})){
        cout << "There are five of a kind.\n";
        hand = Five_of_a_kind;
        card = find (mycount, mycount+6, 5);
      }
    else if ( any_of(mycount, mycount+6, [](int i){return i==4;})){
         cout << "There are four of a kind.\n";
         hand = Four_of_a_kind;
       }
    else if ( any_of(mycount, mycount+6, [](int i){return i==3;})           && any_of(mycount, mycount+6, [](int i){return i==2;})){
         cout << "Full house.\n";
         hand = Full_house;
         card = find (mycount, mycount+6, 4);
       }
      /*In poker dice there are in fact only four possible bust         
      hands: [A K Q J 9], [A K Q 10 9], [A K J 10 9], and [A Q         J 10 9];
       both other no-pair hands (i.e., in which either         
       the A or the 9 are missing) are straights.  */

    else if (all_of(mycount, mycount+6, [](int i){return i<=1;}) &&
        (mycount[0]==0 || mycount[5]==0))
        cout << "Straight.\n";
    else if(all_of(mycount, mycount+6, [](int i){return i<=1;}) && 
        mycount[0]==1 && mycount[5]==1) {
        cout << "Bust.\n";
        hand = Bust;
      }
    else   if ( any_of(mycount, mycount+6, [](int i){return i==3;})           
      && any_of(mycount, mycount+6, [](int i){return i==1;})){
           cout << "Three of a kind.\n";
           hand = Three_of_a_kind;
           card = find (mycount, mycount+6, 3);
         }
    else if(count (mycount, mycount+6, 2)==2)
          { cout << "Two pairs.\n";
           hand = Two_pair;}
    else if  ( any_of(mycount, mycount+6, [](int i){return i<=2;})           
       && count (mycount, mycount+6, 1)==3){
         cout << "One pair.\n";
         hand = One_pair;
         card = find (mycount, mycount+6, 2);
       }
       
    }

    friend class Dealer;
};


class Dealer{
    public: 
    void  CompareHand(Player player1,Player player2) {
    if (player1.hand==player2.hand)
        cout<<"The hands are equal.\n";
     if(player1.hand<player2.hand)
        cout<<"Player 1 wins.\n";
     if(player1.hand>player2.hand)
        cout<<"Player 2 wins.\n";
    }
    
    
     
};

int main() {
srand (time(NULL));

Player player1, player2;
Dealer dealer;
player1.roll_dice();
player1.show_hand();
player1.kind_of_hand();


player2.roll_dice();
player2.show_hand();
player2.kind_of_hand();

dealer.CompareHand(player1,player2);

}