// Complete Guide to C++ Programming Foundations
// Exercise 01_02
// Hello World, by Eduardo Corpeño 

#include <iostream> 
/*
Compiler directive starts with #, tells compiler operations to do on the source code, here we want the compiler to include the code of the header file iostream. This header file is a library that contains objects and functions to help with reading and writing...

In C++ every line of executable code must be part of a function!!!

 The main function is where execution begins and typically includes calls to other functions.
*/

int main(){
    std::cout << "Hi There!" << std::endl;

    std::cout << std::endl << std::endl;
    return 0;
}
/*
Function defined with return type, name and parameters, every c++ must have a main.

All statements end with ;

In C++, the << operator is used to send data to the output stream, std::cout. When you use std::cout << "Hi there" << std::endl;, the << operator first sends the string "Hi there" to std::cout, and then it sends std::endl to std::cout. Each << operator pushes its right-hand operand to the left-hand stream sequentially. So, both the string and std::endl are pushed to std::cout, but they are separate operations.

For functions you use the name of the function followed by () where arguments are added.

Command line program:

int main(int argc, char* argv[]){
    std::cout << "Hi There!" << std::endl;

    std::cout << std::endl << std::endl;
    return 0;
}

This time the main function takes 2 arguments, argc is integer that represents the number of command line arguments passed to the program. argv is an array of c style strings containing these arguments!!!! This is for handling arguments withing the terminal.
*/ 
