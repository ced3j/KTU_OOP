/*

In C++, operator overloading allows you to redefine how operators like +, -, *, etc., 
work for user-defined types (like classes). 
We can make these operators work with objects the way they work with built-in types.



*/

#include <iostream>
using namespace std;


class Point{
    private:
        int x,y;

    public:
    Point(int x = 0, int y = 0) : x(x), y(y){}
        Point operator +(const Point& other){
            cout << x;
            cout << "-" << y << endl;
            return Point(this->x + other.x, this->y + other.y);
        }

    void display() const{
        cout << "(" << x << ", " << y << ")" << endl;
    }
};


int main(){
    Point p1(1,2);
    Point p2(3,4);
    
    Point p3 = p1 + p2;


    return 0;
}