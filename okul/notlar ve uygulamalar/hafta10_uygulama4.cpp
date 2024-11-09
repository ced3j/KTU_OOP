#include <iostream>
using namespace std;

class Car{
    public:
        string brand;
        int model;

        Car(string b, int m): brand(b), model(m){}

        bool operator == (const Car& other) {
            return (brand == other.brand && model == other.model);
        }
};


int main(){
    Car araba1("Toyota", 1993);
    Car araba2("Mazda", 1997);
    Car araba3("Ford", 2005);

    if(araba1 == araba2){
        cout << "araba1 ve araba2 ayni model" << endl;
    }else{
        cout << "araba1 ve araba2 ayni model" << endl;
    }

    if(araba2 == araba3){
        cout << "araba2 ve araba3 ayni model" << endl;
    }else{
        cout << "araba2 ve araba3 ayni model" << endl;
    }


    return 0;
}