// Class overloading

#include <iostream>
using namespace std;

class Box{
    private:
        double length, width, height;
    
    public:
        Box() : length(0), width(0), height(0){}

        Box(double l, double w, double h) : length(l), width(w), height(h){}

        void displayVolume(){
            cout << "Hacim: " << length * width * height << endl;
        }
};


int main(){
    Box box1;  // parametresiz constructor
    Box box2(3.5, 2.4, 5.1);

    box1.displayVolume();
    box2.displayVolume();



    return 0;
}