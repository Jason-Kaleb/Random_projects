#include <iostream>

/*
 * main - entry point
 *
 * Return: 0 = always success
 */

int sum(int k);

int main(void)
{
        int result = sum(10);

        std::cout << result;

        return (0);
}

int sum(int k)
{
        if (k > 0)
        {
                return k + sum(k - 1);
        }
        else
        {
                return (0);
        }
}
