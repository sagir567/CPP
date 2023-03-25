//
// Created by sagi yosef azulay on 23/03/2023.
//א



#include "Player.hpp"

using namespace ariel;


string Player::getName() {
    return name;
}

void Player::addCard(Card c) {
    cardsTaken.push(c);

}

int Player::cardesTaken() {
    cout<<"Player "<<name<<" has won "<<cardsTaken.size()<<" cards"<<endl;
}

Card Player::drawCard() {
    if(deck.empty()){
        cout<<"no cards left"<<endl;

    }
    else{
        Card c = deck.top();
        deck.pop();
        return c;
    }
    int Player::getScore() const {
    return score;
}

int Player::getWins() const {
    return wins;
}

int Player::getLoses() const {
    return loses;
}
    Player::~Player() {

}

}




