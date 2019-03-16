/*
Compile example for terminal giving the file a name
g++ hello.cpp -o hello

Execute the compiled file
./hello

data types
int: integer numbers
double: floating point numbers
char: individual characters
string: sequence of characters
bool: true/false values


int score = 0;
// score is 0
score = 4 + 2;
// it is now 6
score = 4 - 2;
// it is now 2
score = 4 * 2;
// it is now 8
score = 4 / 2;
// and now 2
score = 5 % 2;
// and now 1

*/

//Output message on new line
#include <iostream>

int main()
{
    std::cout << "Hello World!\n";

    return 0;
}

//Declare variable
#include <iostream>

int main()
{

    // Declare a variable
    int year = 2019;
}

//Output variable
#include <iostream>

int main()
{

    int score = 0;

    // Change score here:
    score = 1234 * 99;
    std::cout << score << "\n";
}

//User input
#include <iostream>

int main()
{

    int tip = 0;

    std::cout << "Enter tip amount: ";
    std::cin >> tip;
    std::cout << "You paid " << tip << "dollars\n";
}

//Output variables example & user input request
#include <iostream>

int main()
{

    //double tempf = 83.0;
    double tempf;
    double tempc;

    std::cout << "Enter the temperature in Fahrenheit:\n";
    std::cin >> tempf;

    tempc = (tempf - 32) / 1.8;

    std::cout << "The temp is " << tempc << " degrees Celsius.\n";
}
