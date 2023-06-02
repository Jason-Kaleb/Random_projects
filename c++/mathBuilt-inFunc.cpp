#include <iostream>
#include <cmath>

/*
 * main - entry point
 * @description - working with math in-built functions
 * Return: 0 = always success
 *
 */

int main(void)
{
      // math built in functions, the cmath header should be included
      std::cout << sqrt(64) << "\n";
      std::cout << std::max(115, 10) << "\n";
      std::cout << std::min(1, 5) << "\n";
      std::cout << round(2.4636) << "\n";
      std::cout << floor(log(10)) << "\n";
      std::cout << abs(-110) << "\n";
      std::cout << pow(3, 3) << "\n";

      return (0);
}
