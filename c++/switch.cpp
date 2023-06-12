#include <iostream>

/*
 * main - entry point
 * @description - focusing on switch
 * Return : 0 always
 */

int main(void)
{
        int day;

        std::cout << "Enter the day of week to see day: ";
        std::cin >> day;

        switch (day)
        {
                case 1:
                        std::cout << "Sunday\n";
                break;
                case 2:
                        std::cout << "Monday\n";
                break;
                case 3:
                        std::cout << "Tuesday\n";
                break;
                case 4:
                        std::cout << "Wednesday\n";
                break;
                case 5:
                        std::cout << "Thursday\n";
                break;
                case 6:
                        std::cout << "Friday\n";
                break;
                case 7:
                        std::cout << "Saturday\n";
                break;
                default:
                        std::cout << "Enter a valid day of the week!";
        }

        return (0);
}
