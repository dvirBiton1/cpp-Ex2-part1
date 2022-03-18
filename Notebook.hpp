#include <iostream>
#include <string>
#include <stdexcept>

using namespace std;

namespace ariel{
  class Notebook {
    double re, im;

public:
    Notebook() {  re = im  = 999; }    // inline constructor
    Notebook(double re, double im);  // "outline" constructor

    string to_string() {           // inline method  
        return std::to_string(re)+"+"+std::to_string(im)+"i";
    }
    Notebook sum(Notebook b);        // "outline" method
};


// "outline" constructor implementation:
Notebook::Notebook(double re1, double im1) { 
    re = re1;
    //this.re = 1;   // compile error
    (*this).re = re1;
    this->im = im1; 
}   

// "outline" method implementation:
Notebook Notebook::sum(Notebook b) {  
    return Notebook(re+b.re, im+b.im);
}  
};