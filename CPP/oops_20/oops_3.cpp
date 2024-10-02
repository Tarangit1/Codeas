#include <iostream>

class Vector3D {
public:
    double x, y, z;

    // Parameterized constructor
    Vector3D(double x, double y, double z) : x(x), y(y), z(z) {}

    // Copy constructor
    Vector3D(const Vector3D& other) : x(other.x), y(other.y), z(other.z) {}

    // Display method
    void display() const {
        std::cout << "Vector3D: (" << x << ", " << y << ", " << z << ")" << std::endl;
    }
};

int main() {
    Vector3D v1(1.0, 2.0, 3.0);
    v1.display();

    // Copy constructor in action
    Vector3D v2(v1);
    v2.display();

    return 0;
}
