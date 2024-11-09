#include <iostream>
using namespace std;

class Point{
    public:
        int x, y;

        Point(int xVal, int yVal) : x(xVal), y(yVal){}

        Point operator + (const Point& other){
            return Point(x + other.x, y + other.y);
        }
};

int main(){
    Point p1(12, 3);
    Point p2(5, 11);

    Point p3 = p1 + p2;

    cout << "p3.x: " << p3.x << "\np3.y: " << p3.y << endl;
    return 0;
}