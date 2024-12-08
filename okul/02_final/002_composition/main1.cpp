#include <iostream>
using namespace std;


class Animal{
    public:
        void eat(){
            cout << "eating... (animal class)" << endl;
        }
};

class Dog{
    private:
        Animal hayvan;
    public:
        void yemekYe(){
            hayvan.eat();
            cout << "Hayvan yemegi yedi... :)"<< endl;
        }
};

int main(){
    Dog myDog;
    myDog.yemekYe();

    return 0;
}