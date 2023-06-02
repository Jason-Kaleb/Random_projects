#include <iostream>

/*
 * main - entry point
 * @description - prints all the data types
 * Return: 0 = always success
 */

int main(void)
{
        int num = 5;
        double myfloatnum = 6.32;
        char letter = 'J';
        std::string str = "Hello World!";
        bool myBool = true;

        std::cout << "Interger = " << num << "\n";
        std::cout << "Double = " << myfloatnum << "\n";
        std::cout << "Char = " << letter << "\n";
        std::cout << "String = " << str << "\n";
        std::cout << "Bool = " << myBool << "\n";

        return (0);
}
