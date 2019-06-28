// pointers store memory addresses are often found in old code & come from C
// use references instead of pointers whenever possible
#include <iostream>

int main()
{

    int power = 9000;

    // Create pointer that points tot he memory address of power
    int *ptr = &power; // &power is a memory address & NOT a reference in this context

    // Print ptr
    std::cout << ptr;
}