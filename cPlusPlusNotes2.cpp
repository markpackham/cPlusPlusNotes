// Output first & last name
#include <iostream>
// Define introduction() here:
void introduction(std::string first_name, std::string last_name)
{
    std::cout << last_name << ", " << first_name << " " << last_name << "\n";
}
int main()
{
    introduction("Beyonce", "Knowles"); //Knowles, Beyonce Knowles
}

//
//
// Average
#include <iostream>

// Define average() here:
double average(double num1, double num2)
{
    return ((num1 + num2) / 2);
}

int main()
{
    std::cout << average(42.0, 24.0) << "\n";
    std::cout << average(1.0, 2.0) << "\n";
}

//
//
// Power of 10
#include <iostream>
#include <cmath>

// Define tenth_power() here:
int tenth_power(int num)
{
    return pow(num, 10);
}

int main()
{

    std::cout << tenth_power(0) << "\n";
    std::cout << tenth_power(1) << "\n";
    std::cout << tenth_power(2) << "\n";
}

//
//
// First three multiples
#include <iostream>
#include <vector>

// Define first_three_multiples() here:
std::vector<int> first_three_multiples(int num)
{

    std::vector<int> multiples{num, num * 2, num * 3};

    return multiples;
}

int main()
{

    for (int element : first_three_multiples(8))
    {
        std::cout << element << "\n"; // 8 16 24
    }
}

//
//
// Condiational statements
#include <iostream>

// Define needs_water() here:
std::string needs_water(int days, bool is_succulent)
{

    if (days > 3 && is_succulent == false)
    {
        return "Time to water the plant.";
    }
    else if (days < 13 && is_succulent)
    {
        return "Don't water the plant!";
    }
    else if (days >= 13 && is_succulent)
    {
        return "Go ahead and give the plant a little water.";
    }
    else
    {
        return "Don't water the plant!";
    }
}

int main()
{

    std::cout << needs_water(10, false) << "\n";
}

//
//
// Palindrome boolean check
#include <iostream>

// Define is_palindrome() here:
bool is_palindrome(std::string text)
{

    std::string reversed_text = "";

    // create verse version of text
    for (int i = text.size() - 1; i >= 0; i--)
    {
        reversed_text += text[i];
    }

    if (reversed_text == text)
    {
        return true;
    }

    return false;
}

int main()
{

    std::cout << is_palindrome("111222111") << "\n";            // 1 true
    std::cout << is_palindrome("abcIamNotAPalindrome") << "\n"; // 0 false
}