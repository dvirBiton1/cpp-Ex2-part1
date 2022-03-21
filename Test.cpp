/**
 * An example of how to write unit tests.
 * Use this as a basis to build a more complete Test.cpp file.
 * 
 * IMPORTANT: Please write more tests - the tests here are only for example and are not complete.
 *
 * AUTHORS: <Dvir Biton>
 * 
 * Date: 2021-02
 */

#include "doctest.h"
#include "Direction.hpp"
#include "Notebook.hpp"
#include <string>
#include <stdexcept>
#include <iostream>
using namespace std;
using namespace ariel;

TEST_CASE("Good input") {
	ariel::Notebook n;
	n.write(0,0,0,Direction::Horizontal, "stam");
    CHECK((n.read(0, 0, 0, Direction::Horizontal, 4)) == ("stam"));
	n.write(1,15,15,Direction::Horizontal, "stam");
    CHECK((n.read(1,15,15, Direction::Horizontal, 4)) == ("stam"));
	n.write(2,10,10,Direction::Vertical, "stam");
    CHECK((n.read(2,10,10, Direction::Vertical, 4)) == ("stam"));

	CHECK((n.read(3, 0, 0, Direction::Horizontal, 4)) == ("____"));
	n.write(/*page=*/100, /*row=*/100, /*column=*/50, Direction::Horizontal, "abcd");
	CHECK(n.read(/*page=*/100, /*row=*/99, /*column=*/51, Direction::Vertical, /*length=*/3) == "_b_") ;  
		// prints "_b_" (starts at row 99 which is empty; then at row 100 there is "b"; then row 101 is empty again).
	// n.write(/*page=*/100, /*row=*/99, /*column=*/52, Direction::Vertical, "xyz");
	// 	// throws error because writing the letter y will intersect with the letter c
	n.erase(/*page=*/100, /*row=*/99, /*column=*/51, Direction::Vertical, /*length=*/3);
		// writes ~ instead of _ in line 99, b in line 100 and _ again in line 99
	CHECK((n.read(100, 99, 51, Direction::Horizontal, 3)) == ("~~~"));
	CHECK((n.read(0, 0, 0, Direction::Horizontal, 5)) == ("hello"));
	
    CHECK((n.read(0, 0, 0, Direction::Horizontal, 5)) == ("hello"));
	CHECK((n.read(0, 0, 0, Direction::Horizontal, 5)) == ("hello"));
	CHECK((n.read(0, 0, 0, Direction::Horizontal, 5)) == ("hello"));
	CHECK((n.read(0, 0, 0, Direction::Horizontal, 5)) == ("hello"));
	
    CHECK((n.read(0, 0, 0, Direction::Horizontal, 5)) == ("hello"));
	CHECK((n.read(0, 0, 0, Direction::Horizontal, 5)) == ("hello"));
	CHECK((n.read(0, 0, 0, Direction::Horizontal, 5)) == ("hello"));
	CHECK((n.read(0, 0, 0, Direction::Horizontal, 5)) == ("hello"));
	
    CHECK((n.read(0, 0, 0, Direction::Horizontal, 5)) == ("hello"));
	CHECK((n.read(0, 0, 0, Direction::Horizontal, 5)) == ("hello"));
	CHECK((n.read(0, 0, 0, Direction::Horizontal, 5)) == ("hello"));
	CHECK((n.read(0, 0, 0, Direction::Horizontal, 5)) == ("hello"));
	
    CHECK((n.read(0, 0, 0, Direction::Horizontal, 5)) == ("hello"));
	CHECK((n.read(0, 0, 0, Direction::Horizontal, 5)) == ("hello"));
	CHECK((n.read(0, 0, 0, Direction::Horizontal, 5)) == ("hello"));
	CHECK((n.read(0, 0, 0, Direction::Horizontal, 5)) == ("hello"));
	
    CHECK((n.read(0, 0, 0, Direction::Horizontal, 5)) == ("hello"));
	CHECK((n.read(0, 0, 0, Direction::Horizontal, 5)) == ("hello"));
	CHECK((n.read(0, 0, 0, Direction::Horizontal, 5)) == ("hello"));
	CHECK((n.read(0, 0, 0, Direction::Horizontal, 5)) == ("hello"));
	
    CHECK((n.read(0, 0, 0, Direction::Horizontal, 5)) == ("hello"));
	CHECK((n.read(0, 0, 0, Direction::Horizontal, 5)) == ("hello"));
	CHECK((n.read(0, 0, 0, Direction::Horizontal, 5)) == ("hello"));
	CHECK((n.read(0, 0, 0, Direction::Horizontal, 5)) == ("hello"));
}

// TEST_CASE("Bad input") {
//     Notebook n;
//     // void write(unsigned int page, unsigned int row, unsigned int col, Direction dir, string s);
//     // string read(unsigned int page, unsigned int row, unsigned int col, Direction dir, unsigned int numOfChars);
//     // void erase(unsigned int page, unsigned int row, unsigned int col, Direction dir, unsigned int numOfChars);
//     // void show(unsigned int page);
//     CHECK_THROWS(n.write(0, 0, ,0, Direction::Horizontal, 'dvir'));
    /* Add more test here */


/* Add more test cases here */