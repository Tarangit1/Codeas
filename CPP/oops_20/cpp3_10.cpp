// Problem Statement: Design a class hierarchy to represent different types ofVehicles in a company. You will create a base class calledVehicle and two derived classes: Car and Bike. EachVehicle has a name and a method to calculate their Amount. Base Class:Vehicle Attributes: string name Methods:Vehicle(string name): Constructor to initialize theVehicle's name. virtual double calculateAmount(): A virtual method that returns the Amount (default implementation returns 0). Derived Class: Car Attributes: double monthlyAmount Methods: Car(string name, double monthlyAmount): Constructor to initialize the name and monthly Amount. double calculateAmount() override: Override the base class method to return the monthly Amount. Derived Class: Bike Attributes: double hourlyWage int hoursWorked Methods: Bike(string name, double hourlyWage, int hoursWorked): Constructor to initialize the name, hourly wage, and hours worked. double calculateAmount() override: Override the base class method to return the total Amount based on hours worked. Instructions: Implement the classes as described above. In the main() function, create one full-timeVehicle and one part-timeVehicle. Output their names and calculated salaries using the calculateAmount() method.

#include<iostream>
#include<string>        
using namespace std;

class Vehicle{
    protected:
        string name;
    public:
       Vehicle(string name) : name(name) {}
        virtual double calculateAmount() {
        return 0;
    }
        string getName() {
        return name;
    }




};

class Car : public Vehicle{

    private:
        double monthlyAmount;
    public:
        Car(string name, double monthlyAmount) :Vehicle(name), monthlyAmount(monthlyAmount) {}
        double calculateAmount() override {
        return monthlyAmount;

    }

};

class Bike : public Vehicle{
    private:
        double hourlyWage;
        int hoursWorked;
    public:
        Bike(string name, double hourlyWage, int hoursWorked) :Vehicle(name), hourlyWage(hourlyWage), hoursWorked(hoursWorked) {}
        double calculateAmount() override {
        return hourlyWage * hoursWorked;

    }

};

int main(){
    Car fte("Honda", 5000);
    Bike pte("Toyta", 15, 40);
    cout << fte.getName() << " " << fte.calculateAmount() << endl;
    cout << pte.getName() << " " << pte.calculateAmount() << endl;
    return 0;

}