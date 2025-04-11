// Complete Guide to C++ Programming Foundations
// Exercise 04_04
// Using Objects with Pointers, by Eduardo Corpeño 

#include <iostream>
#include <string>
#include <chrono>//contains classes to keep time

// Type aliases for chrono classes
using Clock = std::chrono::system_clock;
using TimePoint = std::chrono::time_point<Clock>; // clock class between angle brackets. <> is there because TimePoint and Duration are templates
using Duration = std::chrono::duration<double>;

int main(){
    TimePoint start, end; // declaring 2 objects of TimePoint class
    Duration elapsed_seconds; //duration object
    std::string input;

    start = Clock::now();//now function form the Clock

    std::cout << "Type 'start' as quickly as you can and hit ENTER: " << std::flush;
    std::cin >> input;

    end = Clock::now();
    elapsed_seconds = end - start;

    std::cout << "Reaction time: " << elapsed_seconds.count() << "s" << std::endl;
    
    std::cout << std::endl << std::endl;
    return 0;
}
