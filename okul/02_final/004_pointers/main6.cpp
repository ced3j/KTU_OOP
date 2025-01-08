#include <iostream>
using namespace std;


class MyClass{
    public:
        int value;

        MyClass(int val) : value(val){}

        void increment(){
            value++;
        }

        void printValue() const{
            cout << "Value: " << value << endl;
        }
};


void modifyObject(MyClass* ptr, MyClass& ref){
    ptr->increment();
    ref.increment();
}


int main(){

    MyClass* ptr = new MyClass(10);
    MyClass obj(20);

    ptr->printValue();
    obj.printValue();

    modifyObject(ptr, obj);

    ptr->printValue();
    obj.printValue();

    delete ptr;

    return 0;
}