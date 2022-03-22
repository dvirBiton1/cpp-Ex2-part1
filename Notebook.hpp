#include <iostream>
#include <string>
#include <stdexcept>
#include "Direction.hpp"

using namespace std;
using namespace ariel;
namespace ariel{
    class Notebook
    {
    private:
        /* data */
    public:
        Notebook(/* args */){
            return;
        }
        // ~Notebook();
        void write(int page,  int row,  int col, Direction dir, string s);
        string read( int page,  int row,  int col, Direction dir,  int numOfChars);
        void erase( int page,  int row,  int col, Direction dir,  int numOfChars);
        void show( int page);
    };
    
    // Notebook::Notebook(/* args */)
    // {
    //     return;
    // }
    
    // Notebook::~Notebook()
    // {
    //     return;
    // }
};