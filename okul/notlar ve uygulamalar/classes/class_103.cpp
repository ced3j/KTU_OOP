// ⚠️⚠️ Setter ve Getter ⚠️⚠️

#include <iostream>
using namespace std;

class MyClass{
    private:
        int number;

    public:
        MyClass(int n){
            number = n;
        }

        void setNumber(int num){
            number = num;
        }

        int getNum(){
            return number;
        }

        void printNumber(){
            cout << "Number: " << number << endl;
        }
};

int main() {
    MyClass obj(100);  // Başlangıçta number 100
    obj.printNumber(); // Number: 100 yazdırılır

    obj.setNumber(200); // number değiştirildi
    obj.printNumber();  // Number: 200 yazdırılır

    std::cout << "Get number: " << obj.getNum() << std::endl; // number 200
    return 0;
}
