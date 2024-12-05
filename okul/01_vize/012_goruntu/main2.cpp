// ÜÇGEN


#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Üçgenin yüksekliğini giriniz: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl; // Bir sonraki satıra geç
    }

    return 0;
}
