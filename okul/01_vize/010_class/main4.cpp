#include <iostream>
using namespace std;

class Circle{
    private:
        double radius;
    
    public:
        Circle(double r){
            radius = r;
            cout << "Circle is created with radius: " << radius << endl;
        }

        ~Circle(){
            cout << "Circle with radius" << radius << " is destroyed." << endl;
        }

        double calculateArea(){
            return 3.14 * radius * radius;
        }
};

int main(){
    Circle c1(5.0);
    cout << "Area: " << c1.calculateArea() << endl;
    
    return 0;
}