#include <iostream>
#include <chrono>

#include "night.hpp"

/*
An inline function is a function definition, usually in a header file, qualified by inline
Using inline advises the compiler to insert the function’s body where the function call is, which sometimes helps with execution speed (and sometimes hinders execution speed). 
If you do use it, we recommend testing how it affects the execution speed of your program. 
The bottom line is inline is something you’ll probably encounter, but may never use.

Probably best to never use it unless you're working with someone's code who loves using it
*/

int main()
{

    // Measure time taken for goodnight1():
    std::chrono::high_resolution_clock::time_point start = std::chrono::high_resolution_clock::now();

    std::cout << goodnight1("tulip");

    std::chrono::high_resolution_clock::time_point end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double, std::milli> time_span = end - start;

    // Print time taken for goodnight1():
    std::cout << "Time taken for goodnight1(): " << time_span.count() << " milliseconds.\n\n";

    std::cout << goodnight2("eraser", "ivy");
}