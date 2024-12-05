#include <iostream>
#include <string>

using namespace std;

namespace VehicleManagement{
    
    enum VehicleType{
        Car,
        Truck,
        Motorcycle,
        Undefined
    };

    class Vehicle{
        private:
            string brand;
            int year;
            VehicleType type;

        public:

            Vehicle(string b, int i, VehicleType t){
                brand = b;
                year = i;
                type = t;
                cout << "Vehicle created: " << brand << " (" << year << ")" << endl; 
            }

            ~Vehicle(){
                cout << "Vehicle destroyed: " << brand << endl;
            }

            void displayInfo() const{
                cout << "Brand: " << brand << ", Year: " << year << ", Type: " << getTypeName() << endl;
            }

            string getTypeName() const{
                switch(type){
                    case Car: return "Car";
                    case Truck: return "Truck";
                    case Motorcycle: return "Motorcycle";
                    default: return "Undefined";
                }
            }

    };
}


int main(){

    using namespace VehicleManagement;

    Vehicle car("Toyota", 2020, Car);
    Vehicle truck("Ford", 2018, Truck);
    Vehicle motorcycle("Yamaha", 2022, Motorcycle);

    cout << endl;

    car.displayInfo();
    truck.displayInfo();
    motorcycle.displayInfo();
}