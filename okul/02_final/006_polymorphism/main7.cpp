#include <iostream>
using namespace std;

class Car{
    protected:
        string carName;

    public:
        virtual void startEngine(){
            cout << "Car engine starts" << endl;
        }
};

class SportsCar : public Car{
    public:
        void startEngine() override{
            cout << "Sports car engine starts" << endl;
        }
};

class ElectricCar : public Car{
    public: 
        void startEngine() override{
            cout << "Electric car engine starts" << endl;
        }
};

int main(){
    SportsCar* sCar = new SportsCar();
    sCar->startEngine();

    ElectricCar* eCar = new ElectricCar();
    eCar->startEngine();
    
    delete sCar;
    delete eCar;
    
    return 0;
}