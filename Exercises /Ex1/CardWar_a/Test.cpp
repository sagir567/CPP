#include <iostream>
#include <stdexcept>
#include "doctest.h"
#include "sources/player.hpp"
#include "sources/game.hpp"
#include "sources/card.hpp"


using namespace std;
using namespace ariel;
static int i =1;
TEST_CASE("Test 1 - Initialization") {
    Player p1("Alice");
    Player p2("Bob");
    cout<< "TEST-  "<<i++ <<"\n\n";


    Game game(p1, p2);
    cout <<  "first check\n";
    CHECK(p1.getName() =="Alice");

    CHECK(p1.stacksize() == 26);
    CHECK(p2.stacksize() == 26);

    cout <<  "second check \n";
    CHECK(p1.cardesTaken() == 0);
    CHECK(p2.cardesTaken() == 0);


}

TEST_CASE("TEST 2 -objects counting "){
    cout<< "TEST-  "<<i++<<"\n\n";
    Player p1;
    Player p2;

    CHECK (p1.getName()=="player5" );
    CHECK(p2.getName()=="player6" );

}

TEST_CASE("TEST 3 - check stats initiating "){
    cout<< "TEST-  "<<i++<<"\n\n";
    Player p1("frodo");

    CHECK(p1.getLoses() == 0 );
    CHECK(p1.getWins() == 0 );
    CHECK(p1.getWins() == 0 );
    CHECK(p1.getRatio() == -1.0 );

}
TEST_CASE("TEST 4 -check game constructor dealing the cards"){
    cout<< "TEST- "<<i++<<"\n\n";
    Player p1("$Plif");
    Player p2("bob");

    CHECK(p1.deck.size()==0);
    CHECK(p1.deck.size()==0);

    Game game(p1,p2);

    CHECK(p1.deck.size()==26);
    CHECK(p2.deck.size()==26);
}

TEST_CASE("TEST 5 -")
