// The “address of” operator, "&", is used to get the memory address, the location in the memory, of an object.
#include <iostream>

int main()
{

    int power = 9000;

    // Print power
    std::cout << power << "\n";

    // Print &power to show us where it is stored on the computer
    std::cout << &power << "\n";
}

/*
The double meaning of the & symbol can be tricky at first, so make sure to note:

When & is used in a declaration, it is a reference operator.
When & is not used in a declaration, it is an address operator.

 */