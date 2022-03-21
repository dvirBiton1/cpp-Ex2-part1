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
        cout<<"read func\n";
        return "hello";
    }
    void Notebook::erase(unsigned int page, unsigned int row, unsigned int col, Direction dir, unsigned int numOfChars){
        cout<<"erase func\n";
    }
    void Notebook::show(unsigned int page){
        cout<<"show func\n";
    }
}
