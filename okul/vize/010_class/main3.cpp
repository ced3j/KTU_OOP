#include <iostream>
using namespace std;

class Rectangle{
    private:
        double width;
        double height;

    public:
        void setWidth(double w){
            width = w;
        }

        void setHeight(double h){
            height = h;
        }


        double getWidth(){
            return width;
        }

        double getHeight(){
            return height;
        }

        void calculateArea(double w, double h){
             cout << "Rect calculate area: " << w*h << endl;
        }
};


int main(){

    Rectangle rect;

    rect.setWidth(5.0);
    rect.setHeight(3.0);
    rect.calculateArea(rect.getWidth(), rect.getHeight());


    return 0;
}