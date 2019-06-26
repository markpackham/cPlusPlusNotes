#include <iostream>

#include "num_ops.hpp"

/*
Function Overloading is just the same as Polymorphism in Java
Same function name behaves differently depending on what arguments you pass it
so a string will behave differently from a double
*/

int main()
{

    std::cout << fancy_number(12, 3) << "\n";
    std::cout << fancy_number(12, 3, 19) << "\n";
    std::cout << fancy_number(13.5, 3.8) << "\n";
}