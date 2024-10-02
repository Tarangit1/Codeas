/**
 *  Explains the usage of the overloaded equal operator in the Point class.i
 * 
 * The overloaded equal operator in the Point class is used to compare two Point objects.
 * It checks if the x and y coordinates of the two points are equal.
 * If the coordinates are equal, the operator returns true; otherwise, it returns false.
 * 
 * Example usage:
 * 
 * Point p1(2, 3);
 * Point p2(2, 3);
 * 
 * if (p1 == p2) {
 *     // Code to execute if p1 and p2 are equal
 * } else {
 *     // Code to execute if p1 and p2 are not equal
 * }
 */
//how does the owevloaded equal operator work in the point class and how is it
// used to compare two point object in the provided code

#include <iostream>
class Point {
public:
    int x;
    int y;
    int z;

    Point(int x, int y, int z) : x(x), y(y), z(z) {}

    bool operator==(const Point& other) const {
        return (x == other.x) && (y == other.y) && (z == other.z);
    }
};

int main() {
    Point p1(2, 3, 4);
    Point p2(2, 3, 5);

    if (p1 == p2) {
        std::cout << "p1 and p2 are equal" << std::endl;
    } else {
        std::cout << "p1 and p2 are not equal" << std::endl;
    }

    return 0;

}

