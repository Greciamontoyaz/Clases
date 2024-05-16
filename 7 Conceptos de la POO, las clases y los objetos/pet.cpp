#include <iostream>
#include <string>

using namespace std;

class VirtualPet {
private:
    string name;
    int hunger;
    int happiness;

public:
    VirtualPet(const string & petName, int initialHunger, int initialHappiness)
        : name(petName), hunger(initialHunger), happiness(initialHappiness) {}

    void feed(int food) {
        hunger -= food;
        if (hunger < 0) hunger = 0;
    }

    void play(int fun) {
        happiness += fun;
        if (happiness > 100) happiness = 100;
    }

    void printStatus() const {
        cout << "Name: " << name << endl;
        cout << "Hunger: " << hunger << endl;
        cout << "Happiness: " << happiness << endl;
    }
};

int main() {
    VirtualPet pet("Mushu",50,50);
    cout <<   ">^.^<" <<endl;

    pet.feed(20);
    pet.play(30);
    pet.printStatus();

    return 0;
}