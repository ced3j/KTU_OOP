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

// friend function
int calculateArea(const Rectangle& rect){
    return rect.width * rect.height;
}

int main(){
    Rectangle rect(5, 10);
    cout << "Area: " << calculateArea(rect) << endl;

    
    return 0;
}

