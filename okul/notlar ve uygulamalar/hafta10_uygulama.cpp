// Operator overloading 

#include <iostream>
using namespace std;


class Complex{
    public:
        int real, imag;

        Complex(int r = 0, int i = 0): real(r), imag(i){}

        // '+' operatörünü aşırı yükleyelim

        Complex operator + (const Complex& obj){
            Complex temp;
            temp.real = real + obj.real;
            temp.imag = imag + obj.imag;
            return temp;
        }

        void display(){
            cout << real << " + " << imag << "i" << endl;
        }
};

int main(){

    Complex c1(3,4);
    Complex c2(1,5);
    // Burada + operatörü aşırı yüklendiği için iki karmaşık sayı toplanabilir
    Complex c3 = c1 + c2; 

    c3.display();

    return 0;
}