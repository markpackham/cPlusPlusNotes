// asterisk sign * a.k.a. the dereference operator is used to obtain the value pointed to by a variable
/*
Like the "&" symbol "*" can have a double menaing
The double meaning of the * symbol can be tricky at first, so make sure to note:

When * is used in a declaration, it is creating a pointer.
When * is not used in a declaration, it is a dereference operator.
*/
#include <iostream>

int main()
{

    int power = 9000;

    // Create pointer
    int *ptr = &power;

    // Print ptr
    std::cout << ptr << "\n"; // outputs a memory location

    // Print *ptr
    std::cout << *ptr; // outputs 9000 which is the value of the power variable
}