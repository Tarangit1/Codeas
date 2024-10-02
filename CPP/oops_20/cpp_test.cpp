// What will be the output of the program?
#include <iostream>
using namespace std;

int i;

int fun() {
    cout << "Hi";
    return 0;
}

int main() {
    while (i) {
        fun();
        main();
    }
    cout << "Hello" << endl;
    return 0;
}