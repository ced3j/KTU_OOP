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


    char karakter = 'A';
    double sonuc = static_cast<double>(static_cast<int>(karakter));
    // char'ı önce int' çevirir sonra int halini double'a çevirir
    // A karakterinin int değeri 65
    // Double = 65.0


    double kesirliSayi = 66.99;
    char karakter = static_cast<char>(static_cast<int>(kesirliSayi));
    // kesirli sayi önce int'e çevrildi sonra bu int char a çevrildi
    


    return 0;
}
