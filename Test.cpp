#include "doctest.h"
#include "Board.hpp"
#include "Researcher.hpp"
#include "Scientist.hpp"
#include "FieldDoctor.hpp"
#include "GeneSplicer.hpp"
#include "OperationsExpert.hpp"
#include "Dispatcher.hpp"
#include "Medic.hpp"
#include "Virologist.hpp"

#include <iostream>
#include <stdexcept>

using namespace pandemic;
using namespace std;

Board board;
TEST_CASE("First Test"){
	CHECK(board.is_clean() == true);		
	board[City::Atlanta] = 1;
	board[City::Miami] = 2;
	board[City::Sydney] = 3;
	CHECK(board.is_clean() == false);
}
TEST_CASE("Second Test"){
	OperationsExpert OE{board, City::NewYork};
	CHECK(OE.role() == "OperationsExpert");
	Virologist vir{board,City::Atlanta};
	CHECK(OE.role() == "Virologist");
	Researcher res{board, City::Sydney};
	CHECK(OE.role() == "Researcher");
	Dispatcher dis{board, City::Taipei};
	CHECK(OE.role() == "Dispatcher");
	Medic med{board, City::Miami};
	CHECK(OE.role() == "Medic");
	FieldDoctor FD{board, City::Cairo};
	CHECK(OE.role() == "FieldDoctor");
	GeneSplicer GS{board, City::Baghdad};
	CHECK(OE.role() == "GeneSplicer");
	}

TEST_CASE("Third Test"){
	Virologist player{board, City::Atlanta};
	CHECK_THROWS(player.drive(City::Chicago));
	CHECK_THROWS(player.drive(City::Sydney));
	CHECK_THROWS(player.fly_direct(City::Sydney));
	CHECK_THROWS(player.take_card(City::Sydney));
	CHECK_THROWS(player.fly_shuttle(City::Algiers));
	CHECK_NOTHROW(player.fly_shuttle(City::Algiers));
	CHECK_THROWS(player.fly_charter(City::MexicoCity));
	CHECK_THROWS(player.take_card(City::Algiers));
	CHECK_THROWS(player.build());
	CHECK_THROWS(player.take_card(City::MexicoCity));
	player.take_card(City::Miami);
	player.take_card(City::SaoPaulo);
	player.take_card(City::BuenosAires);
	player.take_card(City::Johannesburg);
	player.take_card(City::Lagos);
	CHECK_THROWS(player.discover_cure(Color::Blue));
	CHECK_THROWS(player.drive(City::NewYork));
	player.take_card(City::StPetersburg);
	player.take_card(City::Milan);
	CHECK_THROWS(player.discover_cure(Color::Red));
}

