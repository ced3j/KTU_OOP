#include <iostream>
using namespace std;

int main() {
    int sayi = 10;
    double sonuc = static_cast<double>(sayi);

    cout << "int to double: " << sonuc << endl; // Çıktı: 10.0


    double kesirliSayi = 12.75;
    int tamSayi = static_cast<int>(kesirliSayi);

    char karakter = 'A';
    int asciiDeger = static_cast<int>(karakter);

    cout << "char to int: " << asciiDeger << endl;

    int asciiDeger = 56;
    char harf = static_cast<char>(asciiDeger);

    return 0;
}
