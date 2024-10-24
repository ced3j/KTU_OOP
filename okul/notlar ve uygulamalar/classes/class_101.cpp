// ⚠️⚠️ Parametreli Constructor ⚠️⚠️

#include <iostream>
using namespace std;

class MyClass{
    public:

        int number;

        // parametreli constructor
        MyClass(int n){
            number = n;
        }

        void printNumber(){
            cout << "Number: " << number << endl;
        }

};


int main(){
    MyClass obj1(25);
    obj1.printNumber();

    return 0;
}