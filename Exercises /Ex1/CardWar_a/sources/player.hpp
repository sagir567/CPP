//
// Created by sagi yosef azulay on 23/03/2023.
//

#ifndef UNTITLED_PLAYER_H
#define UNTITLED_PLAYER_H

#include <iostream>
#include <stack>
#include "card.hpp"

using namespace std;

namespace ariel {


    class Player {
    private:
        int score;
        int wins;
        int loses;
    public:
        int getScore() ;

        int getWins() ;

        int getLoses() ;



         string name;

        stack <Card> cardsTaken;
        stack <Card> deck;


        Player(string name) {
            this->name = "Player";
            this->score = 0;
        }

        Player() {

            this->name = "player";
            this->score = 0;
        }


        int cardesTaken();// prints the amount of cards this player has won.

        int stacksize();//prints the amount of cards left. should be 21 but can be less if a draw was played

        string getName();

        Card drawCard(); //draws a card from the deck


        void addCard(Card card);

        Card playCard();

        virtual ~Player();

    };
}
#endif //UNTITLED_PLAYER_H
