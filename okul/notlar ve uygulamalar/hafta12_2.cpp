// Composition

// Composition, bir sınıfın başka bir sınıfın bir 
// nesnesini kullanarak daha büyük bir yapı oluşturmasıdır.


#include <iostream>
using namespace std;

class Engine{
    public:
        void start(){
            cout << "Engine started." << endl;
        }
};


class Car {
    private:
        Engine engine;

    public:
        void drive(){
            engine.start();
            cout << "Car is driving" << endl;
        }
};


int main(){
    Car myCar;
    myCar.drive();

    return 0;
}

/*

Bu örnekte, Car sınıfı bir Engine nesnesini içerir. 
Car, bileşim yoluyla Engine sınıfının özelliklerini kullanır.



*/