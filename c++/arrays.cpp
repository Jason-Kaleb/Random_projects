#include <iostream>

/*
 * main - entry point
 * return - 0 = success
 */

int main(void)
{
        int x;

        std::cout << "Enter the number of the fellow students in your class: ";
        std::cin >> x;

        std::string names[x];
        int z = sizeof(names) / sizeof(std::string);

        for (int i = 0; i < z; i++)
        {
               std::cout << "Name[" << i + 1 << "]: ";
               std::cin >> names[i];
        }

        std::cout << "Names entered successfully. Thank You!\n";
        std::cout << "\nBelow are the names entered: \n";

        for (int k; k < z; k++)
        {
                   std::cout << k + 1 << ". " << names[k] << "\n";
        }

        return (0);
}
