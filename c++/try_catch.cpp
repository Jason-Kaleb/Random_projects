#include <iostream>

/*
 * main - entry point
 *
 * Return: 0 = always success
 */

int main(void)
{
        try
        {
                int age;

                std::cout << "Please enter your Age: ";
                std::cin >> age;

                if (age >= 18)
                {
                        std::cout << "You are eligible to vote\n";
                }
                else
                {
                        throw(age);
                }
        }
        catch (int x)
        {
                std::cout << "You are not eligible to vote\n";
                std::cout << "Reason: Age is " << x << ", Only people 18 and above can vote.\n";
        }

        // handle any type of exceptions(...)
/*
        try
        {
                int newAge;

                std::cout << "Please enter your Age: ";
                std::cin >> newAge;

                if (newAge >= 18)
                {
                        std::cout << "You are eligible to vote\n";
                }
                else
                {
                        throw(newAge);
                }
        }
        catch (...)
        {
                std::cout << "You are not eligible to vote\n";
        }
*/

        return (0);
}
