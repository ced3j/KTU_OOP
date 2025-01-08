#include <iostream>
using namespace std;

class Motor{
    public:
        void display(){
            cout << "Motor calisti." << endl;
        }
};


class Kanatlar{
    public:
        void display(){
            cout << "Kanatlar acildi." << endl;
        }
};


class Ucak{
    private:
        string name;
        Motor motor;
        Kanatlar kanat;

    public:
        Ucak(){
            motor.display();
            kanat.display();

        }
};


int main(){

    Ucak c1;
    


    return 0;
}