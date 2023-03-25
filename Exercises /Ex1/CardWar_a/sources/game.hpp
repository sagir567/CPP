//
// Created by sagi yosef azulay on 23/03/2023.
//

#ifndef UNTITLED_GAME_H
#define UNTITLED_GAME_H
#include "player.hpp"
namespace ariel {
    class Game {
    private:
        Player p1;
        Player p2;
        int turns;
        int draws;
        int p1Wins;
        int p2Wins;
        string lastTurn;
        string log;
    public:
        Game(Player p1, Player p2);

        void playTurn();

        void playAll();

        void printLastTurn();

        void printWiner();

        void printLog();

        void printStats();
    };
}

#endif //UNTITLED_GAME_H
