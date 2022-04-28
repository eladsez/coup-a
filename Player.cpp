#include "Player.hpp"

namespace coup {

    Player::Player(Game game, std::string name){}

    void Player::income() {}

    void Player::foreign_aid() {}

    int Player::coins() { return 0; }

    void Player::coup(Player to_kick) {}

    std::string Player::role(){return "";}
}
