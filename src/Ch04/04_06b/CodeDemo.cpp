// Complete Guide to C++ Programming Foundations
// Exercise 04_06
// The Vector Class, by Eduardo Corpeño 

#include <iostream>
#include <string>
#include <vector>
//vectors are mutable unlike arrays, memory is managed for you. Can contain any type. Part of standard template library

int main(){
    std::vector<std::string> checkpoints = {"Start","Forest","Castle"}; //THIS IS A TEMPLATE SO WE MUST SPECIFY THE TYPE THIS IS WHY WE HAVE THE <>
//We add at the end.
    checkpoints.push_back("Cave");

    std::cout << checkpoints.size() << std::endl;
    std::cout << checkpoints[2] << std::endl;
    checkpoints[2] = "Something";
    std::cout << checkpoints[2] << std::endl;


    std::cout << std::endl << std::endl;
    return 0;
}
