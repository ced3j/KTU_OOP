#include <iostream>
using namespace std;



class Shape{
    private:
        string name;
    public:
        Shape(string n) : name(n){}
        virtual void area() const = 0;

/*
        
Pure Virtual Function (Saf Sanal Fonksiyon)
Bir fonksiyonu saf sanal olarak işaretlemek için = 0 kullanılır. 
Bu, o fonksiyonun sadece bir arayüz olduğunu ve doğrudan o sınıf 
içinde implement (uygulanmış) edilmemesi gerektiğini belirtir. 
Alt sınıflarda bu fonksiyonun implement edilmesi zorunludur.

Saf Sanal Fonksiyonun Amacı
Saf sanal fonksiyonlar, bir sınıfı soyut hale getirir. Yani, 
o sınıf direkt olarak örneklendirilemez. Bu, genellikle bir 
temel (abstract) sınıf oluşturmak ve bu sınıfın işlevlerini 
alt sınıflara bırakmak amacıyla kullanılır. Bir sınıfın soyut 
olabilmesi için en az bir saf sanal fonksiyon içermesi gerekir

*/
        virtual string getName() const{
            return this->name;
        }
};

class Circle: public Shape{
    private:
        int yariCap;
    public:
        Circle(string n, int r): Shape(n), yariCap(r){}

        void area() const override{
            cout << 3.14 * yariCap * yariCap << endl;
        }

        string getName() const override{
            return Shape::getName(); 
        }
};


class Rectangle : public Shape{
    private:
        int width, height;
    public:
        Rectangle(string n, int w, int h) : Shape(n), width(w), height(h){}

        void area() const override{
            cout << "Rectangle area: " << width * height << endl;
        }

        string getName() const override{
            return Shape::getName();
        }
};


int main(){
    Circle c1("daire", 5);
    c1.area();
    cout << c1.getName() << endl;


    Shape* rectang = new Rectangle("rect", 10, 20);
    rectang->area();
    cout << rectang->getName() << endl;
    // Pointer olarak tanımladığımız için -> kullandık

    delete rectang;


    return 0;
}