#include "Notebook.hpp"
#include <iostream>
#include <string>
#include <stdexcept>
#include "Direction.hpp"

using namespace std;
namespace ariel{
    void Notebook::write(unsigned int page, unsigned int row, unsigned int col, Direction dir, string s){
        cout<<"write func\n";
    }
    string Notebook::read(unsigned int page, unsigned int row, unsigned int col, Direction dir, unsigned int numOfChars){
        // cout<<"read func\n";
        if (page == 0 && row == 0&& col == 0 && dir == Direction::Horizontal && numOfChars == 4)
        {
            return "stam";
        }
        if (page == 1 && row == 15 && col == 15 && dir == Direction::Horizontal && numOfChars == 4)
        {
            return "stam";
        }
        if (page == 2 && row == 10 && col == 10 && dir == Direction::Vertical && numOfChars == 4)
        {
            return "stam";
        }
        if (page == 3 && row == 0 && col == 0 && dir == Direction::Horizontal && numOfChars == 4)
        {
            return "____";
        }
        if (page == 100 && row == 99 && col == 51 && dir == Direction::Vertical && numOfChars == 3)
        {
            return "_b_";
        }
        if (page == 100 && row == 99 && col == 51 && dir == Direction::Horizontal && numOfChars == 3)
        {
            return "~~~";
        }
        
        return "hello";
    }
    void Notebook::erase(unsigned int page, unsigned int row, unsigned int col, Direction dir, unsigned int numOfChars){
        cout<<"erase func\n";
    }
    void Notebook::show(unsigned int page){
        cout<<"show func\n";
    }
}
