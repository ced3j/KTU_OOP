#include <iostream>
using namespace std;

class Rectangle {
private:
    double width;
    double height;

public:
    Rectangle(double w, double h) : width(w), height(h) {}

    // Friend function
    friend double calculateArea(Rectangle rect);
};

// Friend function: Rectangle sınıfının özel verilerine erişebiliyor
double calculateArea(Rectangle rect) {
    return rect.width * rect.height;  // width ve height değerlerine erişim sağlıyor
}

int main() {
    Rectangle myRectangle(5.0, 3.0);
    double area = calculateArea(myRectangle);
    cout << "Rectangle area: " << area << endl;
    return 0;
}