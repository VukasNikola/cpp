// Complete Guide to C++ Programming Foundations
// Exercise 04_04
// Using Objects with Pointers, by Eduardo Corpeño 

#include <iostream>
#include <string>
#include <chrono>

// Type aliases for chrono classes
using Clock = std::chrono::system_clock;
using TimePoint = std::chrono::time_point<Clock>;
using Duration = std::chrono::duration<double>;

int main(){
    TimePoint *start, *end;
    Duration *elapsed_seconds = new Duration();//Returns a pointer to the alocated memory where the object is located 
    std::string input;

    start = new TimePoint(Clock::now());//because start and end are pointers you need to add new because no memory has been assigned to the object.

    std::cout << "Type 'start' as quickly as you can and hit ENTER: " << std::flush;
    std::cin >> input;

    end = new TimePoint(Clock::now());
    *elapsed_seconds = *end - *start; // without pointers you would subtract the adresses where we are pointing to.

    std::cout << "Reaction time: " << elapsed_seconds->count() << "s" << std::endl;// or (*elapsed_seconds).count() because .count() has presedence you have to first dereference.

    delete start;
    delete end;
    delete elapsed_seconds; //delete is the oposite to new.

    std::cout << std::endl << std::endl;
    return 0;
}
