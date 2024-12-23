#include <iostream>
using namespace std;

class Animal{
    private:
        string name;
        string power;
    public:
        Animal(string n, string p) : name(n), power(p){}
        
        void display(){
            cout << "Name: " << name << endl;
            cout << "Power: " << power << endl;
        }        
};


class Dog : public Animal{
    public:
        Dog(string n, string p) : Animal(n, p){}
};


int main(){

    Dog kopek1("XVC", "100");
    kopek1.display();

    return 0;
}