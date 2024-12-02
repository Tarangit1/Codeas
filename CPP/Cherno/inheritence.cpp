#include <bits/stdc++.h>

using namespace std;

//inheritance is the process of inheriting the properties of the parent class to the child class
//syntax for inheritance
// class child_class_name:access_specifier parent_class_name    
// {
//     //properties of the child class
// };
// access_specifier can be public, private or protected
// public: all the properties of the parent class will be inherited as public
// private: all the properties of the parent class will be inherited as private
// protected: all the properties of the parent class will be inherited as protected that means the properties of the parent class will be accessible in the child class but not in the main function

//if the access specifier is not mentioned then by default it is private
//if the access specifier is public then the properties of the parent class will be inherited as public



class Entity
{
    public:
        float x,y;
        // here consturctor is used tfor initializing the values of x and y later we have to print it
        // if we dont use constructor then we have to initialize the values of x and y in main function
        void move(float xa,float ya){
            x+=xa;
            y+=ya;

        }

};

class Player:public Entity{
    public:
        const string Name;
        float x,y;

        void PrintName(){
            cout << Name <<endl;

        }
};


int main(){
    Player player;
    player.x=2;
    player.y=3;
    player.move(1,1);
    player.PrintName();
    

    cout<<player.x<<","<<player.y<<endl;


}