#include <iostream>
using namespace std;



class Address{
    private:
        string city;
        int plaka;

    public:
        Address(const string& c, const int& p) : city(c), plaka(p){}
        
        void display(){
            cout << "City name: " << city << endl;
            cout << "Plaka: " << plaka << endl;
        }
};



class Person{
    private:
        string name;
        Address address;
    public:
        Person(const string& n, const string& city, const int& plaka) : name(n), address(city, plaka){}


        void display(){
            cout << "Name: " << name << endl;
            address.display();
        }


};

int main(){
    Person ahmet1("Ahmet", "London", 14);

    ahmet1.display();


    return 0;
}