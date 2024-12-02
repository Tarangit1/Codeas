#include <bits/stdc++.h>

using namespace std;

class Entity
{
    public:
        virtual string GetName() { //function to get the name of the entity
             return "Entity"; }
};

class Player : public Entity {
    private:
        string m_Name; //private variable to store the name of the player
    public:
        Player(const string& name) : m_Name(name) {
        //constructor to initialize the name of the player
        }

        string GetName() override { //function to get the name of the player
            return m_Name; }
    
};

void PrintName(Entity* entity) {
    cout << entity->GetName() << endl;
}

int main() {
    Entity* e = new Entity();
    PrintName(e);

    Player* p = new Player("Cherno");
    PrintName(p);

    return 0;
}

