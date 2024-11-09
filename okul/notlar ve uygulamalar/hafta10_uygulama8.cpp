#include <iostream>
using namespace std;

class Complex{
    private:
        int real, imag;
    
    public:
        Complex(): real(0), imag(0){}
        Complex(int r, int i): real(r), imag(i){}

        void print(Complex complexNum){
            cout << complexNum.real << " + " << complexNum.imag << "i" << endl;
        }

        Complex operator +(const Complex& other)const{
            return Complex(real + other.real, imag + other.imag);
        }
        
        Complex operator -(const Complex& other)const{
            return Complex(real - other.real, imag - other.imag);
        }


        // real = a
        // imag = b 
        // other.real = c
        // other.imag = d

        Complex operator *(const Complex& other)const{
            return Complex(real*other.real - imag * other.imag, real * other.imag + imag * other.real);
        }
        

        Complex operator /(const Complex& other)const{

            if((other.real * other.real + other.imag * other.imag) != 0 || (other.real * other.real + other.imag * other.imag) != 0){
                return Complex(real*other.real + imag * other.imag / other.real * other.real + other.imag * other.imag,  // reel
                            (imag * other.real - real * other.imag) / (other.real * other.real + other.imag * other.imag)); // sanal
            }
            return Complex();
        }
};



int main(){
    Complex obj1(3,2);
    Complex obj2(1,4);
    Complex sonuc;

    sonuc.print(obj1.operator+(obj2));
    sonuc.print(obj1.operator-(obj2));
    sonuc.print(obj1.operator*(obj2));
    sonuc.print(obj1.operator/(obj2));

    return 0;
}