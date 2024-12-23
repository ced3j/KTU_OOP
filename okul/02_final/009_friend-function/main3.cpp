#include <iostream>
using namespace std;


class Point{
    private:
        int x;
        int y;
    public:
        Point(int x = 10, int y = 10) : x(x), y(y){}

        friend int sumX(const Point& p1, const Point& p2);
        friend int sumY(const Point& p1, const Point& p2); 
};


int sumX(const Point& p1, const Point& p2){
    return (p1.x + p2.x);
}

int sumY(const Point& p1, const Point& p2){
    return (p1.y + p2.y);
}


int main(){
    Point p1(20, 40);
    Point p2(10, 20);

    cout << "Sum of x: " << sumX(p1, p2) << endl;
    cout << "Sum of y: " << sumY(p1, p2) << endl;
    return 0;
}