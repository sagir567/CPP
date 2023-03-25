//
// Created by sagi yosef azulay on 23/03/2023.
//

#ifndef UNTITLED_CARD_H
#define UNTITLED_CARD_H

namespace ariel{

  class Card {
    private:
        int value;
        string suit;
    public:
        Card(int value, string suit);

        int getValue();

        string getSuit();

        string toString();
    };
}


#endif //UNTITLED_CARD_H
