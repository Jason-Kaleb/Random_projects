#include <iostream>

/*
 * main - entry point
 * @description - working with stringss
 * Return: 0 = always success
 *
 */

int main(void)
{
        std::string name;
        std::string firstname = "Jason";
        std::string surname = "Kaleb";
        std::string surname_0 = "Davids";
        std::string fullname = firstname + " " + surname;

        std::cout << "Firstname: " << firstname << "\n";
        std::cout << "Surname: " << surname << "\n";
        std::cout << "Fullname: " << fullname << "\n\n";

        //using append
        std::string secondFullname = firstname.append(surname_0);

        std::cout << "Fullname_0: " << secondFullname << "\n";
        std::cout << "Length of Fullname_0: " << secondFullname.length() << "\n";
        std::cout << "The first letter of Fullname_0 = \"" << secondFullname[0] << "\"\n";
        std::cout << "\nNow please enter your name: ";
        getline(std::cin, name);
        std::cout << "Thank you " << name << "\n";

        return (0);
}
