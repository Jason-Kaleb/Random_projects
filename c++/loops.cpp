#include <iostream>

/*
 * main - entry point
 * @description - intro to loops
 * Return : 0 always
 */

int main(void)
{
        // while loop

        int x = 1;

        while (x < 6)
        {
                if (x == 3)
                {
                        break;
                }
                std::cout << "Number: "<< x << "\n";
                x++;
        }

        // do/while loop

        std::cout << "\n";

        int z = 5;

        do
        {
                std::cout << "Number: " << z << "\n";
                z--;
        }
        while (z >= 1);

        // for loop

        std::cout << "\n";

        int y;

        for (y = 2; y <= 10; y += 2)
        {
                if (y == 6)
                {
                        continue;
                }
                std::cout << "Number: " << y << "\n";
        }

        // foreach

        std::cout << "\n";

        int myArr[] = {10, 20, 30, 40, 50};

        for (int i : myArr)
        {
                std::cout << i << "\n";
        }



        return (0);
}
