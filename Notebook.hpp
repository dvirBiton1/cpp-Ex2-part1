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
        void write(unsigned int page, unsigned int row, unsigned int col, Direction dir, string s);
        string read(unsigned int page, unsigned int row, unsigned int col, Direction dir, unsigned int numOfChars);
        void erase(unsigned int page, unsigned int row, unsigned int col, Direction dir, unsigned int numOfChars);
        void show(unsigned int page);
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