#include <iostream>
using namespace std;

class ClassB;  // Ön bildirim (Forward Declaration)

class ClassA {
private:
    double x;

public:
    ClassA(double x) : x(x) {}

    double getX() const { return x; }

    double operator + (const ClassB& otherClass);

    void print() const {
        cout << "ClassA x degeri: " << x << endl;
    }
};

class ClassB {
private:
    double y;

public:
    ClassB(double y) : y(y) {}

    double getY() const { return y; }

    double operator * (const ClassA& otherClass);

    void print() const {
        cout << "ClassB y degeri: " << y << endl;
    }
};

double ClassA::operator + (const ClassB& otherClass) {
    return x + otherClass.getY();
}

double ClassB::operator * (const ClassA& otherClass) {
    return y * otherClass.getX();
}

void print(double result, char islem) {
    if(islem == '+') {
        cout << "+ overloading sonucu: " << result << endl;
    } else if(islem == '*') {
        cout << "* overloading sonucu: " << result << endl;
    }
}

int main() {
    ClassA obj1(106.13);
    ClassB obj2(53.17);

    double sumResult = obj1 + obj2;
    print(sumResult, '+');

    double mulResult = obj2 * obj1;
    print(mulResult, '*');

    return 0;
}
