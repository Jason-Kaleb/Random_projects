#include <iostream>

/*
 * main - entry point
 *
 * Return: 0 = always success
 */

void person(std::string name, int age);
int add(int x, int y);
// Pass by reference
void swapNums(int &x, int &y);
// Pass arrays as function parameters
void arr(int myNum[5]);

int main(void)
{
        person("Jason", 20);
        person("Manson", 17);

        int z = add(3, 3);

        std::cout << "\n";
        std::cout << z << "\n\n";

        int firstNum = 10;
        int secondNum = 5;

        std::cout << "Before swap: " << "\n";
        std::cout << "First number: " << firstNum << ", Second Number: " << secondNum << "\n";

        swapNums(firstNum, secondNum);


        std::cout << "Second swap: " << "\n";
        std::cout << "First number: " << firstNum << ", Second Number: " << secondNum << "\n";

        int myNumbers[5] = {1, 2, 3, 4, 5};

        std::cout << "\n";
        arr(myNumbers);

        return (0);
}

void person(std::string name, int age)
{
        if (age < 18)
        {
                std::cout << "Hey there " << name << ", Given that you are " << age << " years old.";
                std::cout << " You are not eligible to vote\n";
        }
        else
        {
                std::cout << "Hey there " << name << ", Given that you are " << age << " years old.";
                std::cout << " You are eligible to vote\n";
        }
}

int add(int x, int y)
{
        return (x + y);
}

void swapNums(int &x, int &y)
{
        int z = x;
        x = y;
        y = z;
}

void arr(int myNum[5])
{
        for (int i = 0; i < 5; i++)
        {
                std::cout << myNum[i] << "\n";
        }
}
