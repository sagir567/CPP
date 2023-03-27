//
// Created by sagi yosef azulay on 23/03/2023.
//

#include "game.hpp"

using namespace ariel;

void Game::playTurn(){
Card c1 = player1.drawCard();
Card c2 = player2.drawCard();


}


void Game::playAll(){
//  will create later
}

void Game::printLastTurn(){
//  will create later
}

void Game::printWiner(){
//  will create later
}

void Game::printLog(){
//  will create later
}



void Game::printStats() {
    cout <<"player1:\n"
           "score: " << player1.getScore() << "\n"
              "cards taken: " << player1.cardsTaken.size() << "\n"
                "wins: " << player1.getWins() << "\n"
                  "loses: " << player1.getLoses() << "\n"
                    "player2:\n"
                      "score: " << player2.getScore() << "\n"
                        "cards taken: " << player2.cardsTaken.size() << "\n"
                          "wins: " << player2.getWins() << "\n"
                            "loses: " << player2.getLoses() << "\n";

}


