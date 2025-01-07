#include <iostream>
using namespace std;


class Car{
    private:
        int speed;

    public:
        Car(int s) : speed(s){}

        friend int setSpeed(Car c);
};

int setSpeed(Car c){
    return c.speed; 
}

int main(){

    Car araba(10);
    Car tren(200);

    cout << "Araba hizi: " << setSpeed(araba) << endl;
    cout << "Tren hizi: " << setSpeed(tren) << endl;

    return 0;
}