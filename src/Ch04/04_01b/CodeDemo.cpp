// Complete Guide to C++ Programming Foundations
// Exercise 04_01
// Arrays, by Eduardo Corpeño 

#include <iostream>

// #define LEVEL_COUNT 4 //macros have no scope. Doesn't need a ; 

int main(){
    const size_t LEVEL_COUNT = 4; //recommended instead of macros; instead of int we use a more appropriate type for sizes which is size_t
    int enemies[LEVEL_COUNT]; //capacity of array is in []
    float levelDifficulty[] = {1.0, 3.5, 6.0, 10.5};//here compiler can safely compile double to float so it is not terrible, auto doesn't work here

    enemies[0] = 10;
    enemies[1] = 15;
    enemies[2] = 20;
    enemies[3] = 25;

    std::cout << "The game has 4 levels" << std::endl;
    std::cout << "Level 1: " << enemies[0] << " enemies" << std::endl;
    std::cout << "Level 2: " << enemies[1] << " enemies" << std::endl;
    std::cout << "Level 3: " << enemies[2] << " enemies" << std::endl;
    std::cout << "Level 4: " << enemies[3] << " enemies" << std::endl;
    std::cout << std::endl;

    std::cout << "Level difficulties:" << std::endl;
    std::cout << "Level 1: " << levelDifficulty[0] << std::endl;
    std::cout << "Level 2: " << levelDifficulty[1] << std::endl;
    std::cout << "Level 3: " << levelDifficulty[2] << std::endl;
    std::cout << "Level 4: " << levelDifficulty[3] << std::endl;
    std::cout << std::endl;


    std::cout << std::endl << std::endl;
    return 0;
}
