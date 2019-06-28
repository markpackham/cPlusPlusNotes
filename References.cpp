#include <iostream>

int main()
{

    int soda = 99;
    // & is used for references
    int &pop = soda;
    pop++;
    std::cout << soda << "\n";
    std::cout << pop;
    // both give 100
}

/*
using references as parameters allows us to modify the the arguments’ values.

This allows us to:
Modify the value of the function arguments.
Avoid making copies of a variable/object for performance reasons.

 */

//
//
//
#include <iostream>
// we pass by reference
int triple(int &i)
{

    i = i * 3;

    return i;
}

int main()
{

    int num = 1;

    std::cout << triple(num) << "\n"; // gives 3
    std::cout << triple(num) << "\n"; // gives 9 (we passed by reference rather than value so previous answer of 3 * 3)
}

//
//
// Passing By Reference with Const makes a lot of sense for parameter
// You don't want the Parameter to change & using a reference improves performance
// this saves the computational cost of making a copy of the argument
#include <iostream>

int square(int const &i)
{

    return i * i;
}

int main()
{

    int side = 5;

    std::cout << square(side) << "\n";
}