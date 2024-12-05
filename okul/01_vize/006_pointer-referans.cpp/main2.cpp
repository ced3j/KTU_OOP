// Referanslar

#include <iostream>
using namespace std;



int main(){
    int a = 5;
    int& ref = a;  // ref, a'nın bir referansıdır

    cout << "a'nin degeri: " << a << endl;
    cout << "ref'in degeri: " << ref << endl;

    ref = 10; // ref üzerinden a'nın değeri değişti
    cout << "a'nin degeri: " << a << endl;
    cout << "ref'in yeni degeri: " << ref << endl;

    return 0;
}