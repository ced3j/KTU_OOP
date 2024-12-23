#include <iostream>
using namespace std;

class Shape{
    public:
        virtual double area() const = 0;
        virtual void draw() const = 0;
};

class Circle : public Shape{
    private:
        double radius;
    public:
        Circle(double r) : radius(r) {}

        double area() const override{
            return 3.14 * radius * radius;
        }

        void draw() const override{
            cout << "Drawing a circle!" << endl;
        }
};

int main(){
    Shape* shape = new Circle(5);
    cout << "Area of circle: " << shape->area() << endl;
    shape->draw();

    delete shape;

    
    return 0;
}