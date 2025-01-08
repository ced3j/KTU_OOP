/*
Friend function (arkadaş fonksiyonu), C++'da bir sınıfın özel (private) ve korumalı (protected) üyelerine 
erişim hakkı verilen bir fonksiyondur. Normalde, sınıf dışındaki bir fonksiyon bu üyelere doğrudan erişemez, ancak bir fonksiyon 
"arkadaş" olarak tanımlanırsa, bu sınırlamayı aşabilir.

*/


#include <iostream>
using namespace std;



class Rectangle{
    private:
        int width, height;
    public:
        Rectangle(int w, int h) : width(w), height(h) {}
        friend int calculateArea(const Rectangle& rect);
};




class TestShape : public Rectangle{
    public:
        TestShape(int w, int h) : Rectangle(w, h){}
};



// friend function
int calculateArea(const Rectangle& rect){
    return rect.width * rect.height;
}



int main(){
    Rectangle rect(5, 10);
    TestShape shp(10, 20);
    TestShape* shp2 = new TestShape(10, 25);

    cout << "Area: " << calculateArea(rect) << endl;
    cout << "Area2: " << calculateArea(shp) << endl;
    cout << "Area3: " << calculateArea(*shp2) << endl;

    delete shp2;
    
    return 0;
}

