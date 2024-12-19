#include <iostream>
using namespace std;

class Vehicle{
    private:

    public:

        void showType(){
            cout << "This is a vehicle!" << endl;
        }
};


class Car : public Vehicle{
    public:
        void showType(){
            cout << "This is a car!" << endl;
        }
};


class Bike : public Vehicle{
    public:
        void showType(){
            cout << "This is a bike!" << endl;
        }
};


int main(){
    Vehicle v1;
    v1.showType();

    Car c1;
    c1.showType();

    Bike b1;
    b1.showType();
    return 0;
}