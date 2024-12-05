// KARE

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Karenin boyutunu giriniz: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "* ";
        }
        cout << endl; // Bir sonraki satıra geç
    }

    return 0;
}
