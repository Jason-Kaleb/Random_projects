#include <iostream>

/*
 * main - entry point
 *
 * Return: 0 = always success
 */

class person
{
        public:
                std::string name;
                std::string surname;
                int dateOfBirth;
                int currentYear;
                person(std::string x = "John", std::string y = "Doe", int i = 2005, int k = 2023);
                void age();

};

person::person(std::string x, std::string y, int i, int k)
{
        name = x;
        surname = y;
        dateOfBirth = i;
        currentYear = k;
}

void person::age()
{
        int personAge;
        personAge = currentYear - dateOfBirth;
        std::cout << personAge;
}


int main(void)
{
        person human_1("Jason", "Kaleb", 2002, 2023);
        person human_2("Tanjiro", "Kamada", 2000, 2023);
        person human_3("Mecca", "Alonso", 1977, 2023);
        person human_4;

        std::cout << human_1.name << " " << human_1.surname << ", Age: ";
        human_1.age();
        std::cout << "\n";
        std::cout << human_2.name << " " << human_2.surname << ", Age: ";
        human_2.age();
        std::cout << "\n";
        std::cout << human_3.name << " " << human_3.surname << ", Age: ";
        human_3.age();
        std::cout << "\n";
        std::cout << human_4.name << " " << human_4.surname << ", Age: ";
        human_4.age();
        std::cout << "\n";

        return (0);
}
