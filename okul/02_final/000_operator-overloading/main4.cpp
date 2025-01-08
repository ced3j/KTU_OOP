#include <iostream>
using namespace std;

class Box{
    private:
        int value;

    public:
        Box(int v = 0) : value(v){}

        friend Box operator==(const Box& b1, const Box& b2);
        friend Box operator+(const Box& b1, const Box& b2);

        void display();
};

void Box::display(){
    cout << "Value: " << value << endl;
}

Box operator==(const Box& b1, const Box& b2){
    if(b1.value == b2.value){
        return true;
    }
    return false;
}

Box operator+(const Box& b1, const Box& b2){
    return (b1.value + b2.value);
}

int main(){
    Box box1(10);
    Box box2(10);

    Box box3 = box1 == box2;
    box3.display();

    Box box4 = box1 + box2;
    Box box5 = box2 == box4;
    box5.display();


    return 0;
}