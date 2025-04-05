// Complete Guide to C++ Programming Foundations
// Exercise 02_05
// Using Variables, by Eduardo Corpeño 

#include <iostream>

int a,b = 5; /*global variables: because they are outside of the main(same level of indentation as main function), can be accessed by all parts of code, the memory is managed statically by the compoiler, once the program ends the memory is freed. Variables can be local in their scope. Once the execution exits the scope they are deleted. Located in the stack segment of memory(temporary), called automatic. */


int main(){
    bool my_flag; /*/local, should avoid global for multiple reasons*/
    a = 7;
    my_flag = false;

    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
    std::cout << "flag = " << my_flag << std::endl;
    my_flag = true;
    std::cout << "flag = " << my_flag << std::endl;
    std::cout << "a + b = " << a + b << std::endl;
    std::cout << "b - a = " << b - a << std::endl;

    unsigned int positive;
    positive = b - a;
    std::cout << "b - a (unsigned) = " << positive << std::endl; // 2^32 - 2. binary is the same but the number is different.

    std::cout << std::endl << std::endl;
    return 0;
}
