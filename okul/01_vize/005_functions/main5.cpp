#include <iostream>
using namespace std;

// Static fonksiyon tanımı
static void printMessage() {
    cout << "Bu fonksiyon sadece bu dosyada kullanılabilir!" << endl;
}

int main() {
    printMessage();  // Bu çağrı yapılabilir
    return 0;
}
