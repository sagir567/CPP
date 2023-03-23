//
// Created by sagi yosef azulay on 23/03/2023.
//

#ifndef UNTITLED_GAME_H
#define UNTITLED_GAME_H


class Game {
    Player player1;
    Player player2;

    Game(Player player1, Player player2);


public:

    void printStats();
    void printLog();
    void printWinner();
    void printLastTurn();
    void playTurn();
    void playAll();



};


#endif //UNTITLED_GAME_H
