// C++ program to create a global function as a friend
// function of some class
#include <iostream>
using namespace std;

class base {
private:
    int private_variable;

protected:
    int protected_variable;

public:
    base()
    {
        private_variable = 10;
        protected_variable = 99;
    }
    
      // friend function declaration
    friend void friendFunction(base& obj);
};


// friend function definition
void friendFunction(base& obj)
{
    cout << "Private Variable: " << obj.private_variable
         << endl;
    cout << "Protected Variable: " << obj.protected_variable;
}

// driver code
int main()
{
    base object1;
    friendFunction(object1);

    return 0;
}

// Passing Object as an argument (by value, by reference, 
// by address) in C++

// C++ program to demonstrate passing object as an argument
// by value, by reference, by address
#include <iostream>
using namespace std;

class Distance {
public:
    // Member Object
    int feet, inch;

    // Constructor to initialize the object's value
    Distance()
    {
        this->feet = 0;
        this->inch = 0;
    }

    // function to display object's value
    void displayDistance()
    {
        cout << "Feet: " << this->feet << " Inch: " << this->inch << endl;
    }
};

// function to take object as an argument
void addTwoDistance(Distance d1, Distance d2)
{
    Distance d3; // local object to store the sum of two distances

    // Perform addition of feet and inches
    d3.feet = d1.feet + d2.feet;
    d3.inch = d1.inch + d2.inch;

    // If inch is greater than equal to 12, changing it to feet.
    if (d3.inch >= 12) {
        d3.inch = d3.inch - 12;
        ++d3.feet;
    }

    // Display the result
    d3.displayDistance();
}

// Driver Code
int main()
{
    Distance d1, d2; // Declaring two objects of class Distance

    // First object
    d1.feet = 2;
    d1.inch = 3;

    // Second object
    d2.feet = 2;
    d2.inch = 3;

    addTwoDistance(d1, d2);

    return 0;
}
