// Complete Guide to C++ Programming Foundations
// Challenge 01_09
// Terminal Interaction, by Eduardo Corpeño 

#include <iostream>
#include <string>

int main(){
    std::string name;
    std::cout << "Enter your name: " << std::flush;// flush means output is completely sent to terminal before waiting for user input
    std::cin >> name; //cin only works for single words!!!
    std::cout << "Your name is: " << name << std::endl;

    std::cout << std::endl << std::endl;
    return 0;
}