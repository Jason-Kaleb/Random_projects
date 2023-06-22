#include <iostream>

/*
 * main - entry point
 *
 * Return: 0 = always success
 */

// named structures

struct car
{
        std::string brand;
        std::string model;
        int year;
};

int main(void)
{
        // Structures are a way to group several related variables into one place
        // unlike an array, a structure can contain many different data types

        struct                // structure declaration
        {
                int age;    // Member (int variable)
                std::string name;    // Member (string variable)

        } Person, Person_1;        // Structure variable/name

        // first structure
        Person.age = 20;
        Person.name = "Jason";
        // second structure
        Person_1.age = 17;
        Person_1.name = "Snow";

        std::cout << "Hello " << Person.name << ". You are " << Person.age << " years old.\n";
        std::cout << "Hello " << Person_1.name << ". You are " << Person_1.age << " years old.\n";


        car car_1;
        car_1.brand = "Nissan";
        car_1.model = "Skyline R32";
        car_1.year = 2002;

        car car_2;
        car_2.brand = "BMW";
        car_2.model = "X5";
        car_2.year = 1999;

        car car_3;
        car_3.brand = "Ford";
        car_3.model = "Mustang";
        car_3.year = 1969;

        std::cout << "\nCars listed below for sale: \n\n";
        std::cout << car_1.brand << " " << car_1.model << " " << car_1.year << "\n";
        std::cout << car_2.brand << " " << car_2.model << " " << car_2.year << "\n";
        std::cout << car_3.brand << " " << car_3.model << " " << car_3.year << "\n";

        return (0);
}
