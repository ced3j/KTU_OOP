// TERS ÜÇGEN

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ters üçgenin yüksekliğini giriniz: ";
    cin >> n;

    for (int i = n; i > 0; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl; // Bir sonraki satıra geç
    }

    return 0;
}
