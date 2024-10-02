#include <iostream>

class Vector2D {
private:
    int x, y;

public:
    // Constructor to initialize the vector with given coordinates
    Vector2D(int x, int y) : x(x), y(y) {}

    // Overload the + operator to add two vectors
    Vector2D operator+(const Vector2D& other) const {
        return Vector2D(this->x + other.x, this->y + other.y);
    }

    // Overload the - operator to subtract two vectors
    Vector2D operator-(const Vector2D& other) const {
        return Vector2D(this->x - other.x, this->y - other.y);
    }

    // Method to print the vector in the format "x, y"
    void print() const {
        std::cout << x << ", " << y << std::endl;
    }
};

int main() {
    // Example usage
    Vector2D vec1(3, 4);
    Vector2D vec2(1, 2);

    Vector2D sum = vec1 + vec2;
    Vector2D diff = vec1 - vec2;

    std::cout << "Sum: ";
    sum.print();

    std::cout << "Difference: ";
    diff.print();

    return 0;
}