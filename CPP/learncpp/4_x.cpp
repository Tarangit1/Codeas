#include <iostream>
#include <cmath>

// Function to calculate the height of the ball after x seconds
double getht(double height, int t) {
    const double g{9.8};
    double distfallen{0.5 * g * t * t};
    double currentht = height - distfallen;
    return (currentht > 0) ? currentht : 0;
}

int main() {
    double height;
    std::cout << "Enter the height of the tower in meters: ";
    std::cin >> height;

    for (int t = 0; t <= 5; ++t) {
        double currentheight{ getht(height, t) };
        if (currentheight > 0) {
            std::cout << "At " << t << " seconds, the ball is at height: " << currentheight << " meters" << std::endl;
        } else {
            std::cout << "At " << t << " seconds, the ball is on the ground." << std::endl;
        }
    }

    return 0;
}