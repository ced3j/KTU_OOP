#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main() {
    // String tanımlama ve kullanım
    string isim = "Ali";
    cout << "Isim: " << isim << endl;

    // String uzunluğu
    cout << "Isim uzunlugu: " << isim.length() << endl;

    // String birleştirme
    string soyisim = "Veli";
    string tamIsim = isim + " " + soyisim;
    cout << "Tam isim: " << tamIsim << endl;

    // String'in bir karakterine erişim
    cout << "Ismin ilk harfi: " << isim[0] << endl;

    // char array tanımlama
    char kelime[] = "Merhaba";
    cout << "Kelime: " << kelime << endl;

    // char array uzunluğu (strlen kullanımı)
    cout << "Kelime uzunlugu: " << strlen(kelime) << endl;

    return 0;
}
