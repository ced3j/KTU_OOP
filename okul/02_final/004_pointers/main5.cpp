#include <iostream>
using namespace std;

class MyClass{
    public:
        int value;

        MyClass(int val) : value(val){}

        void increment(){
            value++;
        }

        void printValue(){
            cout << "Value: " << value << endl;
        }
};


// Referans ile nesneyi fonksiyona geçirme
void modifyObject(MyClass& obj){
    obj.increment();  // obj üzerinden increment fonksiyonu çağrılır
}

int main(){
    MyClass obj(10);
    obj.printValue();
    
    modifyObject(obj);
    obj.printValue();

    
    return 0;
}