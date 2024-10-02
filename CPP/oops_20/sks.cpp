#include <iostream>

int fibonacci(int n) {
    if (n <= 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int numBalloons;
    std::cout << "Enter the number of balloons shot by the player: ";
    std::cin >> numBalloons;

    int score = 0;
    for (int i = 1; i <= numBalloons; i++) {
        score += fibonacci(i);
    }

    std::cout << "Player's score: " << score << std::endl;

    return 0;
}
