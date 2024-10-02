#include <iostream>
#include <cstring>

using namespace std;

class LamborghiniDiablo {
private:
    static const char* commonColor;
    static const int commonCubicCapacity;
    static const int commonNumberOfSeats;
    char* ownerName;
    int yearOfManufacture;
    int engineNumber;
    int frameNumber;

public:
    LamborghiniDiablo(const char* owner, int year, int engine, int frame) {
        ownerName = new char[strlen(owner) + 1];
        strcpy(ownerName, owner);
        yearOfManufacture = year;
        engineNumber = engine;
        frameNumber = frame;
    }

    LamborghiniDiablo(const LamborghiniDiablo& other) {
        ownerName = new char[strlen(other.ownerName) + 1];
        strcpy(ownerName, other.ownerName);
        yearOfManufacture = other.yearOfManufacture;
        engineNumber = other.engineNumber;
        frameNumber = other.frameNumber;
    }

    ~LamborghiniDiablo() {
        delete[] ownerName;
    }

    void display() const {
        cout << "Color: " << commonColor << endl;
        cout << "Cubic Capacity: " << commonCubicCapacity << endl;
        cout << "Number of Seats: " << commonNumberOfSeats << endl;
        cout << "Owner Name: " << ownerName << endl;
        cout << "Year of Manufacture: " << yearOfManufacture << endl;
        cout << "Engine Number: " << engineNumber << endl;
        cout << "Frame Number: " << frameNumber << endl;
    }
};

const char* LamborghiniDiablo::commonColor = "Hot Red";
const int LamborghiniDiablo::commonCubicCapacity = 6500;
const int LamborghiniDiablo::commonNumberOfSeats = 2;

int main() {
    LamborghiniDiablo obj1("Prabhakar Kumar", 2024, 123456, 654321);
    LamborghiniDiablo obj2 = obj1;

    cout << "Object 1 details:" << endl;
    obj1.display();

    cout << "\nObject 2 details (copied):" << endl;
    obj2.display();
    
    return 0;
}