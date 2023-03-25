//
// Created by sagi yosef azulay on 23/03/2023.
//

#ifndef UNTITLED_CARD_H
#define UNTITLED_CARD_H

#include <iostream>

using namespace std;

namespace ariel {

    class Card {
    private:
        int value;
        string suit;
    public:

        Card(int value, string suit) {
            this->value = value;
            this->suit = suit;
        }



        int getValue();

        string getSuit();

        string toString();
    };
}


#endif //UNTITLED_CARD_H
