
#include "Board.hpp"
#include <map>
#include <iostream>
#include <string>
using namespace std;
namespace pandemic{

    bool Board::is_clean(){
        return true;
    }
    int &Board::operator[](City c) {
        return mapofCube[c];
    }
    ostream& operator<<(std::ostream& out, const Board& b){
    return out << "Output Test";
    }
    void Board::remove_cures(){
  }
  };  
