// ⚠️⚠️ Private ve Public Üyeler ⚠️⚠️

#include <iostream>
using namespace std;

class MyClass{
    private: 
        int number;
    public:
        MyClass(int n){
            number = n;   // number'a sadece buradan erişilir
        }

        void printNumber(){
            cout << "Number: " << number << endl;
        }
};


int main(){
    MyClass obj(50);  // Number private olduğu için dışarıdan erişilmez
    obj.printNumber();


    return 0;
}