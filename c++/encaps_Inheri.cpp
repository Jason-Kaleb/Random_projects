#include <iostream>

/*
 * main - entry point
 * @description: covering encapsulation
 * which makes sure that sensitive data is
 * hidden from users
 * Return: 0 = always success
 */

class employee
{
        private:
                // private attribute
                int salary;

        public:
                // setter
                void setSalary(int s)
                {
                        salary = s;
                }
                // getter
                int getSalary()
                {
                        return (salary);
                }
};

class job: public employee
{
        private:
                std::string department;

        public:
                // setter
                void setDepartment(std::string d)
                {
                        department = d;
                }
                // getter
                std::string getDepartment()
                {
                        return (department);
                }
};

int main(void)
{
        job myJob;

        myJob.setDepartment("Senior Software Engineer");
        myJob.setSalary(500000);

        std::cout << "Job: " << myJob.getDepartment() << "\nSalary: R" << myJob.getSalary() << "\n";

        return (0);
}
