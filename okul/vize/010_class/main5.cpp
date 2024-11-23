/*

Public, Private ve Protected Farkları
Private: Sadece sınıfın içinden erişilebilir.
Public: Her yerden erişilebilir.
Protected: Yalnızca sınıfın içinden ve türetilen sınıflardan erişilebilir.



*/


#include <iostream>
using namespace std;

class Animal {
protected:
    string species;

public:
    void setSpecies(string s) {
        species = s;
    }
};

class Dog : public Animal {
public:
    void bark() {
        cout << "I am a " << species << ", and I bark!" << endl;
    }
};

int main() {
    Dog myDog;
    myDog.setSpecies("Dog");
    myDog.bark();

    return 0;
}
