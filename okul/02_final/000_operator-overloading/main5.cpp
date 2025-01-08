#include <iostream>
using namespace std;

class Complex{
    private:
        double real, imag;
    
    public:
        Complex(double r = 1.0, double i = 1.0) : real(r), imag(i){}

        Complex operator+(const Complex& other){
            return (real + other.real, imag + other.imag);
        }

        void display(){
            cout << real << imag << "i" << endl;
        }
};

int main(){
    Complex c1(4.2, 5.1);
    Complex c2(5.1, 6.1);
    Complex c3 = c1 + c2;

    c3.display();

    return 0;
}