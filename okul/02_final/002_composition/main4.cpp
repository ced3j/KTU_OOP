#include <iostream>
#include <string>

using namespace std;

class Engine{
    private:
        int horsepower;
        string type;

    public:
        Engine(int hp, string t) : horsepower(hp), type(t){}

        void showEngineDetails(){
            cout << "Horsepower: " << horsepower << endl;
            cout << "Engine type: " << type << endl;
        }
};


class Car{
    private:
        string brand;
        string model;
        Engine engine;

    public:
        
        // Car oluşturulurken engine de oluşturuluyor
        Car(string b, string m, int hp, string t) : brand(b), model(m), engine(hp, t){}

        void showCarDetails(){
            cout << "Car brand: " << brand << endl;
            cout << "Car model: " << model << endl;
            engine.showEngineDetails();
        }
};


int main(){

    Car myCar("Toyota", "Corolla", 132, "Petrol");
    myCar.showCarDetails();

    return 0;
}