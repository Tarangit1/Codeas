#include<iostream>
#include<string>        
using namespace std;

class Employee {
protected:
    string name;
public:
    Employee(string name) : name(name) {}
    virtual double calculateSalary() {
        return 0;
    }
    string getName() {
        return name;
    }
};

class FullTimeEmployee : public Employee {
private:
    double monthlySalary;
public:
    FullTimeEmployee(string name, double monthlySalary) : Employee(name), monthlySalary(monthlySalary) {}
    double calculateSalary() override {
        return monthlySalary;
    }
};

class PartTimeEmployee : public Employee {
private:
    double hourlyWage;
    int hoursWorked;
public:
    PartTimeEmployee(string name, double hourlyWage, int hoursWorked) : Employee(name), hourlyWage(hourlyWage), hoursWorked(hoursWorked) {}
    double calculateSalary() override {
        return hourlyWage * hoursWorked;
    }
};

int main() {
    FullTimeEmployee ftEmployee("John Doe", 5000);
    PartTimeEmployee ptEmployee("Jane Smith", 20, 80);

    cout << "Full-Time Employee: " << ftEmployee.getName() << ", Salary: $" << ftEmployee.calculateSalary() << endl;
    cout << "Part-Time Employee: " << ptEmployee.getName() << ", Salary: $" << ptEmployee.calculateSalary() << endl;

    return 0;
}