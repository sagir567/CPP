//
// Created by sagi yosef azulay on 23/03/2023.
//

#ifndef UNTITLED_GAME_H
#define UNTITLED_GAME_H

#include "player.hpp"
#include "card.hpp"


namespace ariel {

    class Game {
    private:
        Player player1;
        Player player2;
        int turns;
        int draws;
        int p1Wins;
        int p2Wins;

    public:


        Game(Player &player1, Player &player2) {
            this->player1 = player1;
            this->player2 = player2;

        }

        void playTurn();

        void playAll();

        void printLastTurn();

        void printWiner();

        void printLog();

        void printStats();
    };
}

#endif //UNTITLED_GAME_H
