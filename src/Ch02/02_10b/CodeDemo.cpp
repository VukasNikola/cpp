// Complete Guide to C++ Programming Foundations
// Exercise 02_10
// Type Casting, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

int main(){
    float target_x; //used to store the location calculated
    int32_t sprite_x;
    uint32_t player_x;

    target_x = -123.45; //double because it doesn't have an f at the end. You can assign a double to a float... Here the double is being implicitly converted to float.
    sprite_x = target_x; // implicit or casting, value gets truncated so we expect -123
    player_x = sprite_x;

    std::cout << "Target X (float): " << target_x << std::endl;
    std::cout << "Sprite X (int32_t): " << sprite_x << std::endl;
    std::cout << "Player X (uint32_t): " << static_cast<int32_t>(player_x) << std::endl; // IMPORTANT


    std::cout << std::endl << std::endl;
    return 0;
}
