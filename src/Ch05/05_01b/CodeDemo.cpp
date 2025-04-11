// Complete Guide to C++ Programming Foundations
// Exercise 05_01
// If Statements, by Eduardo Corpeño 

#include <iostream>

int main(){
    int score = 1023;
    bool gamePaused = false;
    char action = 'x';
    if(score > 1000)
        std::cout << "Your score is over 1000." << std::endl;//curly brackets not needed if the statement is one line

    if(score % 2)//comparing to 0 is the same as comparing to false
        std::cout << "Number is odd" << std::endl;

    else
        std::cout << "Number is even" << std::endl;
    

    std::cout << "The action '" << action << "' is ";
    if (action != 'a' && action != 'w' && action != 'd' && action != 's' &&
        action != 'A' && action != 'W' && action != 'D' && action != 'S')
        std::cout << "not ";
    std::cout << "a movement key." << std::endl;

    if(gamePaused) 
        std::cout << "The game is paused!" << std::endl;
    else
        std::cout << "The game is running!" <<std::endl;
        


    std::cout << std::endl << std::endl;
    return 0;
}
