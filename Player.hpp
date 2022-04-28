#ifndef COUP_A_PLAYER_HPP
#define COUP_A_PLAYER_HPP

#include "Game.hpp"
#include <string>

namespace coup {
    class Player {

    protected:
        Game belong_game; // the game the player belong to
        std::string name;
        int coins_num;

    public:
        Player(Game game, std::string name);

        void income();

        void foreign_aid();

        int coins();

        virtual void coup(Player to_kick); // virtual because the assassin need to override it

        virtual std::string role(); // virtual because each inheritance player return something else
    };
}

#endif //COUP_A_PLAYER_HPP
