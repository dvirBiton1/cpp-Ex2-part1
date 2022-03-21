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

/**
 * Returns the input string without the whitespace characters: space, newline and tab.
 * Requires std=c++2a.
 */
string nospaces(string input) {
	std::erase(input, ' ');
	std::erase(input, '\t');
	std::erase(input, '\n');
	std::erase(input, '\r');
	return input;
}


TEST_CASE("Good input") {
	ariel::Notebook n;
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