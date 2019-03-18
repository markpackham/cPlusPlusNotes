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

//srand, time * if/else
#include <iostream>
#include <stdlib.h>
#include <ctime>

int main()
{

    // Create a number that's 0 or 1

    srand(time(NULL));
    int coin = rand() % 2;

    // If number is 0: Heads
    // If it is not 0: Tails

    if (coin == 0)
    {

        std::cout << "Heads\n";
    }
    else
    {

        std::cout << "Tails\n";
    }

//Switch statement
#include <iostream>

    int main()
    {

        int number = 9;

        switch (number)
        {
        case 1:
            std::cout << "Bulbusaur\n";
            break;
        case 2:
            std::cout << "Ivysaur\n";
            break;
        case 3:
            std::cout << "Venusaur\n";
            break;
        default:
            std::cout << "Unknown\n";
            break;
        }
    }

//while Loop
#include <iostream>

    int main()
    {

        int pin = 0;
        int tries = 0;

        std::cout << "BANK OF CODECADEMY\n";

        std::cout << "Enter your PIN: ";
        std::cin >> pin;

        while (pin != 1234 && tries <= 3)
        {

            std::cout << "Enter your PIN: ";
            std::cin >> pin;
            tries++;
        }

        if (pin == 1234)
        {

            std::cout << "PIN accepted!\n";
            std::cout << "You now have access.\n";
        }
    }

//square example
#include <iostream>

    int main()
    {

        int i = 0;
        int square = 0;

        // Write a while loop here:
        while (i != 9)
        {

            std::cout << i << "  " << square << "\n";
            i++;
            square = i * i;
        }
    }

//for loop example
#include <iostream>

    int main()
    {

        for (int i = 0; i < 10; i++)
        {

            std::cout << "I will not throw paper airplanes in class.\n";
        }
    }

//decreasing for loop
#include <iostream>

    int main()
    {

        // Write a for loop here:

        for (int i = 99; i > 0; i--)
        {

            std::cout << i << " bottles of pop on the wall.\n";
            std::cout << "Take one down and pass it around.\n";
            std::cout << i - 1 << " bottles of pop on the wall.\n\n";
        }

        std::cout << "No more bottles of pop on the wall.\n";
        std::cout << "No more bottles of pop.\n";
        std::cout << "Go to the store and buy some more,\n";
        std::cout << "99 bottles of pop on the wall.\n";
    }

//vectors what I know as Arrays, we need to use #include <vector>
#include <iostream>
#include <vector>

    int main()
    {

        std::vector<double> subway_adult = {800, 1200, 1500};

        std::vector<double> subway_child = {400, 600, 750};

        // What number at index 2 of subway_child?
        std::cout << subway_child[2] << "\n";
    }

//.push_back (add to the Vector) whilst .pop_back() removes it (just like popping off an arrya in JS)
#include <iostream>
#include <vector>

    int main()
    {

        std::vector<std::string> last_jedi;

        // Add characters here:
        last_jedi.push_back("kylo");
        last_jedi.push_back("rey");
        last_jedi.push_back("luke");
        last_jedi.push_back("finn");

        std::cout << last_jedi[0] << " ";
        std::cout << last_jedi[1] << " ";
        std::cout << last_jedi[2] << " ";
        std::cout << last_jedi[3] << " ";
    }

//.size() of the Vector
#include <iostream>
#include <vector>

    int main()
    {

        std::vector<std::string> grocery = {"Hot Pepper Jam", "Dragon Fruit", "Brussel Sprouts"};

        // Add more
        grocery.push_back("Carrots");
        grocery.push_back("Lemons");
        std::cout << grocery.size() << "\n";
    }

    //calculate total values of a vector
#include <iostream>
#include <vector>

    int main()
    {

        std::vector<double> delivery_order;

        delivery_order.push_back(8.99);
        delivery_order.push_back(3.75);
        delivery_order.push_back(0.99);
        delivery_order.push_back(5.99);

        // Calculate the total using a for loop:
        double total;
        for (int i = 0; i < delivery_order.size(); i++)
        {

            total += delivery_order[i];
        }
        std::cout << total << "\n";
    }

//Random number example
#include <iostream>

    int main()
    {

        // This seeds the random number generator:
        srand(time(NULL));

        // Use rand() below to initialize the_amazing_random_number
        int the_amazing_random_number = rand() % 8; //anything from 0-7
        std::cout << the_amazing_random_number << "\n";
    }