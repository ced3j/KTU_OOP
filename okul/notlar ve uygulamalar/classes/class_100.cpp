// ⚠️⚠️ Sınıf tanımı ve Constructor ⚠️⚠️


#include <iostream>
using namespace std;

class MyClass{
    public:
        int number;

        MyClass(){ // constructor
            number = 10;  // default num variable

        }

        void printNumber(){
            cout << "The number: " << number << endl;
        }

};

int main(){
    MyClass obj1;
    obj1.number = 8;
    obj1.printNumber();


    MyClass obj2;
    obj2.printNumber();  // default olan değeri kullanacak
    



    return 0;
}