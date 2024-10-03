// Problem Statement
// Design a class hierarchy to represent different types of vehicles in a transportation system. You will create a base class called Vehicle and two derived classes: Car and Bike. Each vehicle has a name and a method to calculate its rental cost.

// Base Class: Vehicle

// Attributes:
// string name
// Methods:
// Vehicle(string name): Constructor to initialize the vehicle's name.
// virtual double calculateRentalCost(): A virtual method that returns the rental cost (default implementation returns 0).
// Derived Class: Car

// Attributes:
// double dailyRentalRate
// Methods:
// Car(string name, double dailyRentalRate): Constructor to initialize the name and daily rental rate.
// double calculateRentalCost(): Override the base class method to return the total cost based on the number of days rented.
// Derived Class: Bike

// Attributes:
// double hourlyRentalRate
// int hoursRented
// Methods:
// Bike(string name, double hourlyRentalRate, int hoursRented): Constructor to initialize the name, hourly rental rate, and hours rented.
// double calculateRentalCost(): Override the base class method to return the total cost based on hours rented.
// Instructions:
// Implement the classes as described above.
// In the main() function, create one car and one bike.
// Output their names and calculated rental costs using the calculateRentalCost() method.

#include<iostream>
#include<string>

using namespace std;

class Vehicle{
    protected:
        string name;
    public:
        Vehicle(string name) : name(name) {}
        virtual double calculateRentalCost() {
        return 0;
    }
        string getName() {
        return name;
    }
};
class Car : public Vehicle{
    private:
        double dailyRentalRate;
    public:
        Car(string name, double dailyRentalRate) : Vehicle(name), dailyRentalRate(dailyRentalRate) {}
        double calculateRentalCost() override {
        return dailyRentalRate;
    }
};

class Bike : public Vehicle{
    private:
        double hourlyRentalRate;
        int hoursRented;
    public:
        Bike(string name, double hourlyRentalRate, int hoursRented) : Vehicle(name), hourlyRentalRate(hourlyRentalRate), hoursRented(hoursRented) {}
        double calculateRentalCost() override {
        return hourlyRentalRate * hoursRented;
    }
};

int main(){
    Car c("Toyota", 50);
    Bike b("Honda", 10, 5);
    cout << c.getName() << " " << c.calculateRentalCost() << endl;
    cout << b.getName() << " " << b.calculateRentalCost() << endl;
    return 0;
}