#include <iostream>
using namespace std;

class ClassB;  // Ön bildirim (Forward Declaration)

class ClassA {
private:
    int x;

public:
    int getX() const { return x; }

    void setX(int x){
        this->x = x;
    }

    int operator + (const ClassB& otherClass);

    void print() const {
        cout << "ClassA x degeri: " << x << endl;
    }
};

class ClassB {
private:
    int y;

public:
    int getY() const { return y; }
    void setY(int y){
        this->y = y;
    }

    int operator * (const ClassA& otherClass);

    void print() const {
        cout << "ClassB y degeri: " << y << endl;
    }
};

int ClassA::operator + (const ClassB& otherClass) {
    return x + otherClass.getY();
}

int ClassB::operator * (const ClassA& otherClass) {
    return y * otherClass.getX();
}

void print(int result, char islem) {
    if(islem == '+') {
        cout << "+ overloading sonucu: " << result << endl;
    } else if(islem == '*') {
        cout << "* overloading sonucu: " << result << endl;
    }
}

int main() {
    ClassA obj1;
    ClassB obj2;

    int objX, objY;
    cout << "obj1 icin X degeri girin: " << endl;
    cin >> objX;

    cout << "obj2 icin Y degeri girin: " << endl;
    cin >> objY;

    obj1.setX(objX);
    obj2.setY(objY);

    int sumResult = obj1 + obj2;
    print(sumResult, '+');

    int mulResult = obj2 * obj1;
    print(mulResult, '*');

    return 0;
}
