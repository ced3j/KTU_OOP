#include <iostream>
using namespace std;



class Shape{
    public:
        string color;

        Shape(){}
        Shape(string color){
            this->color = color;
        }

        void area(){
            cout << "Temel seklin alani yoktur..." << endl;
        }

        void displayInfo(){
            cout << "Shape Color: " << color << endl;
        }
};



class Circle : public Shape{
    public:
        double radius;

        Circle(string color, double radius){
            this->color = color;
            this->radius = radius;
        }

        double area(){
            return (3.14*radius*radius);
        }

        void displayInfo(){
            cout << "Circle -> Color: " << this->color <<
            ", Radius: " << this->radius << 
            ", Area: " << area() << endl;
        }
};


class Rectangle : public Shape{
    public:
        double length;
        double width;

        Rectangle(string color, double length, double width){
            this->color = color;
            this->length = length;
            this->width = width;
        }

        void displayInfo(){
            cout << "Rectangle -> Color : " << this->color <<
            ", Length: " << this->length <<
            ", Width: " << this->width << endl;
        }
};


class Triangle : public Shape{
    public:
        double base;
        double height;

        Triangle(string color, double base, double height){
            this->color = color;
            this->base = base;
            this->height = height;
        }

        double area(){
            return (0.5*base*height);
        }

        void displayInfo(){
            cout << "Triangle -> Color: " << this->color << 
            ", Base: " << this->base <<
            ", Height: " << this->height << endl;
        }
};




int main(){
    Circle circ("Black", 5);
    circ.displayInfo();

    Rectangle rect("Blue", 4.0, 6.0);
    rect.displayInfo();

    Triangle trian("Green", 3.0, 4.0);
    trian.displayInfo();

    return 0;
}











