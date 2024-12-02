#include<bits/stdc++.h>

using namespace std;

class Entity
{

    public:
        float x,y;
        // here consturctor is used tfor initializing the values of x and y later we have to print it
        // if we dont use constructor then we have to initialize the values of x and y in main function
        // which is not a good practice
        // constructor is a function that is called when the object is created mtlb jab bhi object banega to ye function call hoga
        // destructor is a function that is called when the object is destroyed mtlb jab bhi object destroy hoga to ye function call hoga
        // constructor and destructor are called automatically

    Entity(){
        x=0.0f;
        y=0.0f;
    
    }

    void print(){
        cout<<x<<","<<y<<endl;
    }
    


};

int main(){
    Entity e;    

    // when the object e is created the constructor is called and the values of x and y are initialized to 0.0f
    e.print();
    // Destructor will be called automatically when the object goes out of scope
    // No need to explicitly call the destructor

    // encapsulation is the bundling of data with the methods that operate on that data, or the restricting of direct access to some of an object's components.
    //abstraction is the process of hiding the complex implementation details and showing only the necessary features of the object.
   
    // data hiding is the process of hiding the data from the user and only showing the necessary data to the user
    // data hiding is achieved by using access specifiers like private, public and protected
  
    //inheritance is the process of inheriting the properties of the parent class to the child class
  
    // polymorphism is the process of using the same function name for different purposes
    // polymorphism is achieved by using function overloading and function overriding

    // function overloading is the process of using the same function name for different purposes
    // function overriding is the process of using the same function name in the parent class and the child class
    // function overriding is achieved by using the virtual keyword in the parent class and the override keyword in the child class

    


}