#include "City.hpp"
#include "Player.hpp"
#pragma once
using namespace std;
namespace pandemic{

class FieldDoctor: public Player {
public:
         FieldDoctor(Board& b, City c): Player(b, c, "FieldDoc") {}
            Player& treat(City c);
    };

}

