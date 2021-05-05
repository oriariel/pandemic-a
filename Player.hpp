
#include "string"
#include "Board.hpp"
#include "Color.hpp"
#pragma once
using namespace std;

namespace pandemic
{
    class Player
    {
    protected:
    	Board &board;
    	City city;
        string player_role;
        
    public:
        Player(Board &b, City c, string s) : board(b), city(c), player_role(s) {}
        virtual Player &drive(City c);
        virtual Player &fly_direct(City c);
        Player &fly_charter(City c);
        Player &fly_shuttle(City c);
	virtual Player &build();
        virtual Player &discover_cure(Color c);
        virtual Player &treat(City c);
	string role();
        Player take_card(City c);
    };
}

