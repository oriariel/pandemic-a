#include "Player.hpp"
#include "Color.hpp"
#include "Board.hpp"
#include "City.hpp"
#pragma once
using namespace std;

namespace pandemic{

class Dispatcher : public Player{
    public:
       Dispatcher(Board& b, City c): Player(b, c, "Dis") {}
            Player& fly_direct(City c);
    };
}


