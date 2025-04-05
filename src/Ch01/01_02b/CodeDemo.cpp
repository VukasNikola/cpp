// Complete Guide to C++ Programming Foundations
// Exercise 01_02
// Hello World, by Eduardo Corpeño 
#include <iostream> //this is a library

//preprocessor directives dont end with a ;

//main is the function that is executed by defult and must return an integer
//main may receive nothing or strings that come from the command line
int main(){
    //c++ does not require indentation
    std::cout << "Hi!" << std::endl;
    //using an object form the iostream file which is a member of the standard library, cout is the object. We are sending to the object using the "<<"
    std::cout << std::endl << std::endl;
    return 0; //other values mean error codes... 0 because it returns an integer
}
//block of code is contained in {}

