#include <iostream>
using namespace std;

// Referans ile çalışan fonksiyon
void modifyValues1(int& a) {
    a += 10; // Gelen değeri 10 artır
    cout << "modifyValues1 sonucu = " << a << endl;
}

// Pointer ile çalışan fonksiyon
void modifyValues2(int* a) {
    *a += 10; // Pointer'ın gösterdiği değeri 10 artır
    cout << "modifyValues2 sonucu = " << *a << endl;
}

int main() {
    int b = 10;    // Bir tam sayı değişkeni tanımlandı
    int* a = &b;   // Pointer 'a', 'b'nin adresini tutuyor

    // Referans ile değişiklik
    modifyValues1(b); // b'nin değeri 10 artar
    cout << "b'nin yeni deger: " << b << endl;

    modifyValues1(*a); // *a da aslında b'yi temsil ettiği için b tekrar 10 artırılır.
    cout << "a: " << *a << endl;

    // Pointer ile değişiklik
    modifyValues2(a); // b'nin değeri 10 artar (pointer üzerinden)
    cout << "b'nin yeni deger: " << b << endl;

    // Pointer'ın adres ve değer kontrolü
    cout << "a'nin gosterdigi adres: " << a << endl;
    cout << "a'nin gosterdigi deger: " << *a << endl;

    return 0;
}
