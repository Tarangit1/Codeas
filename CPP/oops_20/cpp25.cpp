#include <iostream>
#include <string>

class Computer {
protected:
    std::string brand;
    std::string processor;
    int ramSize;

public:
    Computer(std::string b, std::string p, int r) : brand(b), processor(p), ramSize(r) {}

    virtual void showSpecifications() {
        std::cout << "Brand: " << brand << "\nProcessor: " << processor << "\nRAM Size: " << ramSize << "GB\n";
    }
};

class Laptop : public Computer {
private:
    int batteryLife;

public:
    Laptop(std::string b, std::string p, int r, int bl) : Computer(b, p, r), batteryLife(bl) {}

    void showSpecifications() override {
        Computer::showSpecifications();
        std::cout << "Battery Life: " << batteryLife << " hours\n";
    }
};

class Desktop : public Computer {
private:
    std::string formFactor;

public:
    Desktop(std::string b, std::string p, int r, std::string ff) : Computer(b, p, r), formFactor(ff) {}

    void showSpecifications() override {
        Computer::showSpecifications();
        std::cout << "Form Factor: " << formFactor << "\n";
    }
};

int main() {
    Laptop myLaptop("Dell", "Intel i7", 16, 10);
    Desktop myDesktop("HP", "AMD Ryzen 5", 32, "Tower");

    std::cout << "Laptop Specifications:\n";
    myLaptop.showSpecifications();

    std::cout << "\nDesktop Specifications:\n";
    myDesktop.showSpecifications();

    return 0;
}