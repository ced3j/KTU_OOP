#include <iostream>
using namespace std;


class Animal{
    protected:
        string name;
        int age;

    public:
        Animal(const string& n, const int& a) : name(n), age(a){}

        void displayInfo() const{
            cout << "Name: " << name << ", Age: " << age << endl;
        }
};


class Cat: public Animal{
    public:
        Cat(const string& catName, const int& catAge) : Animal(catName, catAge){}

        void makeSound() const{
            cout << name << " miyavliyor." << endl;
        }
};

class Dog: public Animal{
    public:
        Dog(const string& dogName, const int& dogAge) : Animal(dogName, dogAge){}

        void makeSound() const{
            cout << name << " havliyor." << endl;
        }
};


int main(){

    Cat myCat("Paluk", 2);
    Cat myDog("Saribas", 3);

    myCat.displayInfo();
    myCat.makeSound();

    myDog.displayInfo();
    myDog.makeSound();

    return 0;
}