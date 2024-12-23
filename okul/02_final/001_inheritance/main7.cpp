#include <iostream>
using namespace std;




class Vehicle{
    private:
        string brand;
        int year;
    
    public:
        Vehicle(string b, int y): brand(b), year(y){}

        virtual void displayInfo(){
            cout << "Marka ve yil: " << this->brand << "--" << this->year << endl;
        }
};




class Car : public Vehicle{
    private:
        int numberOfDoors;
    
    public:
        Car(string b, int y, int d) : Vehicle(b, y), numberOfDoors(d){}

        void displayInfo() override{
            Vehicle::displayInfo();
            cout << "Number of doors: " << this->numberOfDoors << endl;
        }
};



class RacingCar : public Car{
    private:
        bool hasSunroof; 

    public:
        RacingCar(string b, int y, int d, bool h) : Car(b, y, d), hasSunroof(h){}

        void displayInfo() override{
            Car::displayInfo();
            cout << "Has sunroof: " << this->hasSunroof << endl;
        }

};





int main(){
    Vehicle* vehicleArr[2];

    vehicleArr[0] = new Car("Toyota", 1992, 4);
    vehicleArr[1] = new RacingCar("Mitsubishi", 1997, 2, true);

    for(int i = 0; i < 2; i++){
        vehicleArr[i]->displayInfo();
        cout << endl;
    }


    for(int i = 0; i < 2; i++){
        delete vehicleArr[i];
    }
    

    return 0;
}