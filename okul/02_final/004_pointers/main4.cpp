#include <iostream>
using namespace std;

class MyClass{
    public:
        int value;

        MyClass(int val) : value(val){}

        void printValue(){
            cout << "Value: " << value << endl;
        }
};

int main(){

    MyClass* ptr = new MyClass(10); // Dinamik myClass nesnesi
    ptr->printValue();

    delete ptr;
    
    return 0;
}