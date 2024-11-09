/*

Friend Function (Arkadaş Fonksiyonu) Nedir?
Bir friend function (arkadaş fonksiyonu), bir sınıfa özel erişimi olan bir fonksiyondur. 
Normalde, bir sınıftaki private veya protected (özel veya korumalı) 
verileri sadece o sınıfın kendi fonksiyonları kullanabilir. 
Fakat, friend function özel verilere erişebilir.

Neden Friend Function Kullanılır?
Bazı durumlarda, iki sınıf veya fonksiyon birbirinin özel verilerini görmelidir.
Friend function, sınıfa ait olmadan, özel verilere erişmenin bir yolunu sağlar. 
Bu, daha güvenli bir şekilde iki sınıfın birlikte çalışmasını sağlar.



*/


#include <iostream>
using namespace std;

class MyClass {
private:
    int secretNumber;

public:
    MyClass(int number) : secretNumber(number) {}

    // showSecret fonksiyonunu friend (arkadaş) yapıyoruz
    friend void showSecret(MyClass obj);
};

// Bu fonksiyon bir friend (arkadaş) fonksiyon
void showSecret(MyClass obj) {
    // showSecret, MyClass'ın private verisine erişebiliyor
    cout << "Secret number is: " << obj.secretNumber << endl;
}

int main() {
    MyClass myObj(42);
    showSecret(myObj);  // friend fonksiyon sayesinde private veriye erişebiliyor
    return 0;
}

