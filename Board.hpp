
#include <iostream>
#include <map>
#include <string>
#include <set>
#include "City.hpp"
#include "Color.hpp"
#pragma once

using namespace std;
namespace pandemic {
    class Board {
    public:
    	Board(){};
	map<City,int> mapofCube;
        bool is_clean();
        int &operator[](City c);
        friend ostream& operator << (ostream &os, const Board &b);
        void remove_cures();
        ~Board(){};
    };
}
