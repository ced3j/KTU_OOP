/*
C++ dilinde, friend fonksiyonları, bir sınıfın özel
 (private) ve korumalı (protected) üyelerine erişim 
sağlamak için kullanılan özel fonksiyonlardır. 

*/

/*


Box sınıfında, length ve width gibi private üyeler var.
calculateArea fonksiyonu, friend olarak ilan edilmiştir. Bu sayede, 
fonksiyon Box sınıfının private üyelerine doğrudan erişebilir.
calculateArea fonksiyonu, Box sınıfının private 
verilerine erişerek bu verilerle işlem yapabilir.



*/




#include <iostream>
using namespace std;

class Box {
private:
    double length;  // Private data member
    double width;
    
public:
    Box(double l, double w) : length(l), width(w) {} // Constructor
    
    // Friend function declaration
    friend double calculateArea(Box b);
};

// Friend function definition
double calculateArea(Box b) {
    return b.length * b.width;  // Accessing private members directly
}

int main() {
    Box box(5.0, 3.0);  // Create an object of Box class
    cout << "Box Area: " << calculateArea(box) << endl;  // Calling friend function
    return 0;
}
