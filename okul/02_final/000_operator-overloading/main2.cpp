#include <iostream>
using namespace std;

class Point{
    private:
        double x,y;

    public:
        Point(double x = 0, double y = 0) : x(x), y(y){}

        Point operator *(const Point& otherPoint){
            return Point(this->x * otherPoint.x, this->y * otherPoint.y);
        }

        void showResults() const{
            cout << "x: " << x << ", y: " << y << endl; 
        }
};

int main(){
    Point p1(3.1, 4.2);
    Point p2(5.1, 6.2);
    Point p3 = p1 * p2;
    p3.showResults();


    return 0;
}