#include <iostream>
#include <fstream>

/*
 * main - entry point
 *
 * Return: 0 = always success
 */

int main(void)
{
        // create and open a text file
        std::ofstream file("jason.txt");

        // writing to the file
        file << "This is my first time creating a file using c++ different from visual basic but fun.\n";
        file << "Apparently files can be tricky.\n";

        // close the file as it is considered good practice
        // it also cleans up unnecessary memory space
        file.close();

        // create a text string which is used to output the text file
        std::string txt;

        // read from the file
        std::ifstream myFileToRead("references.cpp");

        // use a while loop together with the getline() function to read the file line by line
        while (getline (myFileToRead, txt))
        {
                std::cout << txt << "\n";
        }

        //close the file
        myFileToRead.close();

        return (0);
}
