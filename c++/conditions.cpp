#include <iostream>

/*
 * main - entry point
 * @description - focusing on conditions
 * Return : 0 always
 */

int main(void)
{
        int mark;

        std::cout << "Please enter your mark to see whether you have passed or not: ";
        std::cin >> mark;

        if (mark < 0)
        {
                std::cout << "Please enter a valid positive integer mark!.\n";

                return (0);
        }
        if (mark <= 100 && mark >= 80)
        {
                std::cout << "Distinction Passed. Excellent!!\n";
        }
        else if (mark <= 80 && mark >= 30)
        {
                std::cout << "Moderately Passed. Well Done!!\n";
        }
        else
        {
                std::cout << "Failed.\n";
        }

        int time;

        std::cout << "\nPlease enter the time of day: ";
        std::cin >> time;

        std::string result = (time < 18) ? "Good day." : "Good evening.";

        std::cout << result << "\n";

        return (0);
}
