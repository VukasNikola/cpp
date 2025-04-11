// Complete Guide to C++ Programming Foundations
// Exercise 04_10
// The String Class, by Eduardo Corpeño 

#include <iostream>
#include <string>//automatically does memory management.

int main(){
    // const size_t LENGTH = 50; string manages size 
    std::string racer1 = "Speedy";
    std::string racer2 = "Lightning";//instead of using strncpy we can initialize it here
    std::string raceResult;

    // strncpy(racer2, "Lightning", sizeof(racer2) - 1);
    // racer2[sizeof(racer2) - 1] = '\0';

    std::cout << "Racer 1: " << racer1 << std::endl;
    std::cout << "Racer 2: " << racer2 << std::endl;

    raceResult = "And the winner is " + racer1;

    std::cout << raceResult << std::endl;

    std::cout << std::endl << std::endl;
    return 0;
}
