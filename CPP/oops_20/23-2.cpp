// Lamborghini's Diablo model is a symbol of luxury and exclusivity, characterized by attributes including color, cubic capacity, number of seats, year of manufacture, engine number, frame number, and owner name. The color, cubic capacity, and number of seats remain the same for all Diablo vehicles.

// For a class implementation handling Lamborghini Diablo data, perform the following:

// Create a class for Lamborghini Diablo that includes a dynamic array for the owner's name.
// Instantiate an object named initialDiablo and assign values to all its attributes.
// Design a copy constructor that copies only the common attributes (color, cubic capacity, number of seats) from initialDiablo to a new object.
// Generate another object called secondaryDiablo by using the copy constructor from initialDiablo, ensuring that only the common attributes are copied. Assign your own values to the remaining attributes of secondaryDiablo.





#include <bits/stdc++.h>

class LAmbD {
private:
    static const char* color;
    static const int cubicCapacity;
    static const int numberOfSeats;
    int yearOfManufacture;
    std::string engineNumber;
    std::string frameNumber;
    char* ownerName;

public:
    LAmbD(int year, const std::string& engine, const std::string& frame, const char* owner) 
        : yearOfManufacture(year), engineNumber(engine), frameNumber(frame) {
        ownerName = new char[strlen(owner) + 1];
        strcpy(ownerName, owner);
    }

    LAmbD(const LAmbD& other) {
        ownerName = nullptr; // Not copying ownerName
    }

    // Destructor
    ~LAmbD() {
        delete[] ownerName;
    }

    // Display function
    void display() const {
        std::cout << "Lamborghini Diablo Details:\n";
        std::cout << "Color: " << color << "\n";
        std::cout << "Cubic Capacity: " << cubicCapacity << " cc\n";
        std::cout << "Number of Seats: " << numberOfSeats << "\n";
        std::cout << "Year of Manufacture: " << yearOfManufacture << "\n";
        std::cout << "Engine Number: " << engineNumber << "\n";
        std::cout << "Frame Number: " << frameNumber << "\n";
        std::cout << "Owner Name: " << ownerName << "\n";
    }

    // Setters for remaining attributes
    void setAttributes(int year, const std::string& engine, const std::string& frame, const char* owner) {
        yearOfManufacture = year;
        engineNumber = engine;
        frameNumber = frame;
        delete[] ownerName;
        ownerName = new char[strlen(owner) + 1];
        strcpy(ownerName, owner);
    }
};

// Initialize static members
const char* LAmbD::color = "Hot Red";
const int LAmbD::cubicCapacity = 5700; // Example value
const int LAmbD::numberOfSeats = 2;

int main() {
    // Instantiate initialDiablo
    LAmbD initialDiablo(2024, "ENG123456", "FRM654321", "John Doe");
    initialDiablo.display();

    // Generate secondaryDiablo using the copy constructor
    LAmbD secondaryDiablo(initialDiablo);
    secondaryDiablo.setAttributes(2025, "ENG654321", "FRM123456", "Jane Smith");
    secondaryDiablo.display();

    return 0;
}
