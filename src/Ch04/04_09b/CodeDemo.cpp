// Complete Guide to C++ Programming Foundations
// Exercise 04_09
// C Strings, by Eduardo Corpeño 

#include <iostream>
#include <cstring>//c means that it came from c standard library

int main(){
    const size_t LENGTH = 50;//using size_t because that type is best for data sizes
    char racer1[] = "Speedy";//sequence of ascii characters ended by 0
    char racer2[LENGTH];
    char raceResult[LENGTH * 2];

    strncpy(racer2, "Lightning", sizeof(racer2)-1);//not maintainable... with LENGTH so we use sizeof().
    racer2[sizeof(racer2)-1] = '\0'; // since \0 is a char we have '' not " " like strings

    std::cout << "Racer 1: " << racer1 << std::endl;
    std::cout << "Racer 2: " << racer2 << std::endl;

    strncpy(raceResult, "And the winner is ", sizeof(raceResult)-1);
    raceResult[sizeof(raceResult)-1] = '\0';

    strncat(raceResult,racer1,sizeof(raceResult)- strlen(raceResult)-1);

    std::cout << raceResult << std::endl;

    std::cout << std::endl << std::endl;
    return 0;
}
