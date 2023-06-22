#include <iostream>

/*
 * main - entry point
 *
 * Return: 0 = always success
 */


class car
{
        public:
          std::string brand;
          std::string model;
          int year;

          // method/function declaration
          //void forSale();

          // inside class definition
          void carSale()
          {
                  std::cout << brand << " " << model << " in excellent condition for sale\n\n";
          }
          int speed(int maxSpeed)
          {
                  return (maxSpeed);
          }
};

// outside class definition
/*void car::forSale()
{
        std::cout << brand << " " << model << " in excellent condition for sale\n\n";
}
*/

int main(void)
{
        car myCar;

        myCar.brand = "Toyota";
        myCar.model = "Supra";
        myCar.year = 2002;

        car myCar_1;

        myCar_1.brand = "BMW";
        myCar_1.model = "M4";
        myCar_1.year = 2023;

        std::cout << "Car for sale: \n\n";
        std::cout << "1. " << myCar.brand << " " << myCar.model << " " << myCar.year << ", Max speed: " << myCar.speed(260) << " km/h\n";
        myCar.carSale();

        std::cout << "2. " << myCar_1.brand << " " << myCar_1.model << " " << myCar_1.year << ", Max speed: " << myCar.speed(240) << " km/h\n";
        myCar_1.carSale();

        return (0);
}
