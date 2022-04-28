#ifndef COUP_A_GAME_HPP
#define COUP_A_GAME_HPP

#include <vector>
#include <string>

namespace coup {

    class Game {

    public:
        std::string turn();

        std::vector<std::string> players();

        std::string winner();
    };

} // coup

#endif //COUP_A_GAME_HPP
