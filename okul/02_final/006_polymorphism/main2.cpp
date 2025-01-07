#include <iostream>
using namespace std;

class Animal{
    public:
        virtual void makeSound(){
            cout << "Hayvan bir ses cikardi" << endl;
        }
};


class Dog : public Animal{
    public:
        void makeSound() override{
            cout << "Kopek havladi" << endl;
        }
};

class Cat : public Animal{
    public: 
        void makeSound() override{
            cout << "Kedi miyavladi" << endl;
        }
};



int main(){
    Dog* kopke = new Dog();
    Cat* kedy = new Cat();

    kopke->makeSound();
    kedy->makeSound();

    delete kopke;
    delete kedy;
    
    return 0;
}