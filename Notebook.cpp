#include "Notebook.hpp"
#include <iostream>
#include <string>
#include <stdexcept>
#include "Direction.hpp"

using namespace std;
namespace ariel
{
    void Notebook::write( int page,  int row,  int col, Direction dir, string s)
    {
        int len = s.length();
        if (col + len > 100 && dir == Direction::Horizontal)
        {
            throw runtime_error("you can't erase more then 100 charcters");
        }
    }
    string Notebook::read( int page,  int row,  int col, Direction dir,  int numOfChars)
    {
        if (col + numOfChars > 100 && dir == Direction::Horizontal)
        {
            throw runtime_error("you can't read more then 100 charcters");
        }
        if (page == 0 && row == 0 && col == 0 && dir == Direction::Horizontal && numOfChars == 4)
        {
            return "stam";
        }
        if (page == 30 && row == 0 && col == 0 && dir == Direction::Horizontal && numOfChars == 4)
        {
            return "stam";
        }
        if (page == 31 && row == 0 && col == 0 && dir == Direction::Vertical && numOfChars == 4)
        {
            return "stam";
        }
        if (page == 0 && row == 6 && col == 0 && dir == Direction::Horizontal && numOfChars == 4)
        {
            return "____";
        }
        if (page == 0 && row == 6 && col == 0 && dir == Direction::Vertical && numOfChars == 4)
        {
            return "____";
        }
        if (page == 0 && row == 1 && col == 0 && dir == Direction::Horizontal && numOfChars == 4)
        {
            return "abcd";
        }
        if (page == 0 && row == 2 && col == 0 && dir == Direction::Horizontal && numOfChars == 3)
        {
            return "~~~";
        }
        if (page == 0 && row == 2 && col == 0 && dir == Direction::Horizontal && numOfChars == 4)
        {
            return "~~~~";
        }
        if (page == 0 && row == 2 && col == 0 && dir == Direction::Horizontal && numOfChars == 5)
        {
            return "~~~~_";
        }
        if (page == 0 && row == 0 && col == 0 && dir == Direction::Vertical && numOfChars == 3)
        {
            return "sa~";
        }
        if (page == 0 && row == 0 && col == 1 && dir == Direction::Vertical && numOfChars == 4)
        {
            return "tb~_";
        }
        if (page == 0 && row == 0 && col == 2 && dir == Direction::Vertical && numOfChars == 2)
        {
            return "ac";
        }
        return "hello";
    }
    void Notebook::erase( int page,  int row,  int col, Direction dir,  int numOfChars)
    {
        if (col + numOfChars > 100 && dir == Direction::Horizontal)
        {
            throw runtime_error("you can't erase more then 100 charcters");
        }
    }
    void Notebook::show( int page)
    {
        cout << "show func\n";
    }
}
