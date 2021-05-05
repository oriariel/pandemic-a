#include "Board.hpp"
#include "Color.hpp"
#include "Player.hpp"
#include "City.hpp"
#pragma once

using namespace std;
namespace pandemic{

    class Medic : public Player{
    public:
        Medic(Board& b, City c): Player(b, c, "Med") {}
        Player& treat(City c);
    };

}

