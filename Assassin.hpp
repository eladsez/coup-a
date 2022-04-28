#ifndef COUP_A_ASSASSIN_HPP
#define COUP_A_ASSASSIN_HPP

#include "Player.hpp"

namespace coup {

    class Assassin: public Player{

    public:
        Assassin(Game game, std::string name): Player(game, name){}

        void coup(Player to_kick); // override because he has other permissions to coup

        std::string role();
    };

} // coup

#endif //COUP_A_ASSASSIN_HPP
