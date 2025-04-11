// Complete Guide to C++ Programming Foundations
// Exercise 04_03
// How Arrays and Pointers are Related, by Eduardo Corpeño 

#include <iostream>

int main(){
    int highScores[] = {850, 745, 1220, 990};  // High scores in various game stages
    int* scorePtr = highScores;   // Pointer initialized to the address of the array to the first element
    //Didn't need to add the address, this is how you could do this: 
    //&highScores[0] for when you want to point to a specific value in an array.

    std::cout << "Initial high score: " << *scorePtr << std::endl;  // Display the first high score using pointer; * this dereferences the pointer

    std::cout << "Second high score: " << *(scorePtr+1) << std::endl;//this gets the second value in array
    std::cout << "Third high score: " << scorePtr[2] << std::endl;//this gets the second value in array

    std::cout << std::endl << std::endl;
    return 0;
}
