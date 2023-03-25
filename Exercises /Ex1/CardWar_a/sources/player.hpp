//
// Created by sagi yosef azulay on 23/03/2023.
//

#ifndef UNTITLED_PLAYER_H
#define UNTITLED_PLAYER_H
#include "card.hpp"
namespace ariel {
    class Player {


    public:
        Player(string name);

        int cardesTaken();
        int stacksize ();
        string name;

        string getName();

        int getCardsTaken();

        int getStackSize();

        void addCard(Card card);

        Card playCard();
    };
}
#endif //UNTITLED_PLAYER_H
