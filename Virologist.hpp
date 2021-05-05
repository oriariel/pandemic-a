#include "Player.hpp"

namespace pandemic{

    class Virologist : public Player{
    	public:
      	Virologist(Board& b, City c): Player(b, c, "Viro") {}
        Player& treat(City c);
       };
};
