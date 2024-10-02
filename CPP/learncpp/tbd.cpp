// Problem Statement: Design a class hierarchy to represent different types of employees in a company. You will create a base class called Employee and two derived classes: FullTimeEmployee and PartTimeEmployee. Each employee has a name and a method to calculate their salary. Base Class: Employee Attributes: string name Methods: Employee(string name): Constructor to initialize the employee's name. virtual double calculateSalary(): A virtual method that returns the salary (default implementation returns 0). Derived Class: FullTimeEmployee Attributes: double monthlySalary Methods: FullTimeEmployee(string name, double monthlySalary): Constructor to initialize the name and monthly salary. double calculateSalary() override: Override the base class method to return the monthly salary. Derived Class: PartTimeEmployee Attributes: double hourlyWage int hoursWorked Methods: PartTimeEmployee(string name, double hourlyWage, int hoursWorked): Constructor to initialize the name, hourly wage, and hours worked. double calculateSalary() override: Override the base class method to return the total salary based on hours worked. Instructions: Implement the classes as described above. In the main() function, create one full-time employee and one part-time employee. Output their names and calculated salaries using the calculateSalary() method.




#include <iostream>
#include <string>
using namespace std;
class Employee {
    protected:
        string name;
    public:
        Employee(string name) {
            this->name = name;
        }
        virtual double calculateSalary() {
            return 0;
        }
};
