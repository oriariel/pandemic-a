#include "Player.hpp"
using namespace std;

namespace pandemic{
    class Researcher : public Player{
    public:
        Researcher(Board& b, City c): Player(b, c, "Res") {}
        Player& discover_cure(Color c) override;
    };

}
