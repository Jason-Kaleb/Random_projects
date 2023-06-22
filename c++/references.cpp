#include <iostream>

/*
 * main - entry point
 *
 * Return: 0 = always success
 */

int main(void)
{
        // a reference variable is a reference to an existing variable and is created with the & op

        std::string name = "Jason";
        std::string &Person = name;

        //std::cout << name << "\n";
        std::cout << Person << "\n";

        // & can also be used to get the memory address
        // memory address = location of where the var is stored on the computer

        std::cout << "Memory address: " << &Person << "\n";

        return (0);
}
