#include <iostream>
#include <vector>

#include "doctest.h"
#include "Game.hpp"
#include "Duke.hpp"
#include "Assassin.hpp"
#include "Ambassador.hpp"
#include "Captain.hpp"
#include "Contessa.hpp"

using namespace coup;
using namespace std;

TEST_CASE("method validity") {
    Game game_1{};
    Duke duke{game_1, "Moshe"};
    Assassin assassin{game_1, "Yossi"};
    Ambassador ambassador{game_1, "Meirav"};
    Captain captain{game_1, "Reut"};
    Contessa contessa{game_1, "Gilad"};

    SUBCASE("Testing basic string method") {
        CHECK_EQ(duke.role(), "Duke");
        CHECK_EQ(ambassador.role(), "Ambassador");
        CHECK_EQ(assassin.role(), "Assassin");
        CHECK_EQ(captain.role(), "Captain");
        CHECK_EQ(contessa.role(), "Contessa");

//        vector <string> players = game_1.players();
//        CHECK_EQ(players[0], "Moshe");
//        CHECK_EQ(players[1], "Yossi");
//        CHECK_EQ(players[2], "Meirav");
//        CHECK_EQ(players[3], "Reut");
//        CHECK_EQ(players[4], "Gilad");
    }
    SUBCASE("Testing the order of turns"){
        CHECK_NOTHROW(duke.income());
        CHECK_NOTHROW(assassin.income());
        CHECK_NOTHROW(ambassador.income());
        CHECK_NOTHROW(captain.income());
        CHECK_NOTHROW(contessa.income());

        CHECK_THROWS(assassin.income());
        CHECK_THROWS(ambassador.income());
        CHECK_THROWS(captain.income());
        CHECK_THROWS(contessa.income());

        CHECK_NOTHROW(duke.income());
    }

    SUBCASE("coins testing"){
        CHECK_EQ(duke.coins(), 2);
        CHECK_EQ(assassin.coins(), 1);
        CHECK_EQ(ambassador.coins(), 1);
        CHECK_EQ(captain.coins(), 1);
        CHECK_EQ(contessa.coins(), 1);

        CHECK_NOTHROW(assassin.foreign_aid());
        CHECK_NOTHROW(ambassador.foreign_aid());
        CHECK_NOTHROW(captain.foreign_aid());
        CHECK_NOTHROW(contessa.foreign_aid());

        CHECK_EQ(assassin.coins(), 3);
        CHECK_EQ(ambassador.coins(), 3);
        CHECK_EQ(captain.coins(), 3);
        CHECK_EQ(contessa.coins(), 3);

        CHECK_NOTHROW(duke.tax());
        CHECK_EQ(duke.coins(), 5);
    }

    SUBCASE(""){

    }
}