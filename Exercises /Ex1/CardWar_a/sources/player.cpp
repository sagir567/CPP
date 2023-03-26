//
// Created by sagi yosef azulay on 23/03/2023.
//א



#include "player.hpp"

using namespace ariel;


string Player::getName() {
    return name;
}

void Player::addCard(Card c) {
    cardsTaken.push(c);

}

int Player::cardesTaken() {
    cout<<"Player "<<name<<" has won "<<cardsTaken.size()<<" cards"<<endl;
    return (int)cardsTaken.size();
}

Card Player::drawCard() {
    Card c;
    if(deck.empty()){
        cout<<"no cards left"<<endl;
        c=deck.top();
        deck.pop();
        return c;

    }else{
        c = deck.top();
        deck.pop();
        return c;
    }
    
}
    int Player::getScore()  {
    return score;
}

int Player::getWins()  {
    return wins;
}

int Player::getLoses()  {
    return loses;
}







