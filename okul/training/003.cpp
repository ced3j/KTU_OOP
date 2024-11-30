#include <iostream>
using namespace std;



class Complex{
    private:
        int x, y;

    public:
        Complex(int x = 0, int y = 0) : x(x), y(y) {}

        Complex operator+(const Complex& other){
            return Complex(x + other.x, y + other.y);
        }

        void display(){
            cout << x << "+" << y << "i" << endl;
        }
};

int main(){
    
    Complex c1(3, 5);
    Complex c2(1, 2);

    Complex c3 = c1 + c2;
    
    cout << "C1: ";
    c1.display();

    cout << "C2: ";
    c2.display();

    cout << "C3: ";
    c3.display();

    return 0;
}