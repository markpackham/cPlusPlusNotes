// suppose we don’t know where we are pointing to, we can use a null pointer.
// nullptr is a new keyword introduced in C++11. It provides a typesafe pointer value repsenting an empty pointer.
// In older C/C++ code, NULL was used for this purpose. nullptr is meant as a modern replacement to NULL.
#include <iostream>

int main()
{

    int power = 9000;

    // Create a null pointer (THIS IS DANGEROUS "int* ptr;" YOU ALWAYS WANT TO GIVE A POINTER A LOCATION EVEN IF IT IS NULL OR CHAOS ERRUPTS)
    int *ptr = nullptr;

    // Later in the program...
    ptr = &power;

    // Print ptr
    std::cout << ptr << "\n";
}