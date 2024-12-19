#include <iostream>
using namespace std;

class Animal{
    protected:
        string species;
    
    public:
        Animal(string species = "Unknown"): species(species){}

        virtual void makeSound(){
            cout << "This animal makes a sound" << endl;
        }
};

class Lion : public Animal{
    public:
        Lion() : Animal("Lion") {}
        void makeSound() override{
            cout << "Roar" << endl;
        }
};


class Parrot : public Animal{
    public:
        Parrot() : Animal("Parrot"){}

        void makeSound() override {
                cout << "Squawk" << endl;
        }

};

int main(){
    Animal* zoo[2];
    zoo[0] = new Lion();
    zoo[1] = new Parrot();

    for(int i = 0; i < 2; i++){
        zoo[i]->makeSound();
    }

    for(int i = 0; i < 2; i++){
        delete zoo[i];
    }

    return 0;
}