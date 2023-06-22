#include <iostream>

/*
 * main - entry point
 *
 * Return: 0 = always success
 */

int main(void)
{
        // a pointer is a variable that stores the memory address as its value

        std::string name = "Jason";
        std::string* ptr = &name;

        //std::cout << name << "\n";
        std::cout << "Memory address: " << ptr << "\n";

        // you can use the pointer to get the value of the variable by using the * operator (deference op)

        std::cout << "Getting the name using the pointer: " << *ptr << "\n";

        // you can also change the pointers value but it will change the value of the original variable

        std::string food = "Burger";
        std::string* myPtr = &food;

        std::cout << "\n" << food << "\n";
        std::cout << myPtr << "\n";
        std::cout << *myPtr << "\n";

        *myPtr = "Pizza";

        std::cout << *myPtr << "\n";
        std::cout << food << "\n";
        std::cout << &food << "\n";
        std::cout << myPtr << "\n";

        return (0);
}
