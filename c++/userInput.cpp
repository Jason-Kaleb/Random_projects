#include <iostream>

/*
 * main - entry point
 * @description - gets user input
 * Return: 0 = always success
 *
 */

int main(void)
{
        int x, z;
        int sum, product, subtraction;

//        std::cout << "Enter a number of choice: ";
//        std::cin >> x;
//        std::cout << "The number your entered is: " << x << "\n";
// Simple Calculator

        std::cout << "Enter a number of choice: ";
        std::cin >> x;
        std::cout << "Enter another number of choice: ";
        std::cin >> z;

        sum = x + z;
        product = x * z;
        subtraction = x - z;

        std::cout << "The Sum of the two numbers = " << sum << "\n";
        std::cout << "The Product of the two numbers = " << product << "\n";
        std::cout << "The Substraction of the two numbers = " << subtraction << "\n";

        return (0);
}
