#include <iostream> // this is a header file for c++ and iostream is stand for input Output stream
// We included iostream because we have to use cout and cout is declare in iostream lib

// There are two types of header files:
// 1. System header files: It comes with the compiler
// 2. User defined header files: It is written by the you
// #include "this.h" //--> This will produce an error if this.h is no present in the current directory

int main() // here the int main is the entry point for any program the execution any program always begin with main only and int means it return a integer.
{
    std::cout << "Hello World"; // here the std::is the scope operator, It tells the compiler which class/namespace to look in for an identifier. std:: cout tells the compiler that you want the cout identifier and that is in the "std" naespace.
    return 0;                   // here return zero means successfull compilation of program.
}

// Preprocessor pre process our code, it take our code and generate a cpp code, what it does it replace the line which start with # with it code.

// Semicolon is marker for compiler that its end of line.
