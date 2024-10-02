#include <iostream>

class Box {
public:
    double length, width, height;

    Box(double l, double w, double h) {
        length = l;
        width = w;
        height = h;
    }

    double calculateVolume() {
        return length * width * height;
    }
};

class Box1 : public Box {
public:
    Box1(double l, double w, double h) : Box(l, w, h) {}
};

class Box2 : public Box {
public:
    Box2(double l, double w, double h) : Box(l, w, h) {}
};

class Box3 : public Box {
public:
    Box3(double l, double w, double h) : Box(l, w, h) {}
};

int main() {
    Box1 box1(3, 4, 5);
    Box2 box2(2, 6, 2);
    Box3 box3(4, 4, 4);

    double volume1 = box1.calculateVolume();
    double volume2 = box2.calculateVolume();
    double volume3 = box3.calculateVolume();

    double maxVolume = std::max({volume1, volume2, volume3});

    if (maxVolume == volume1) {
        std::cout << "Box1 has the largest volume." << std::endl;
    } else if (maxVolume == volume2) {
        std::cout << "Box2 has the largest volume." << std::endl;
    } else {
        std::cout << "Box3 has the largest volume." << std::endl;
    }

    return 0;
}
