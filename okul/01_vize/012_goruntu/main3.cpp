// PASCAL 

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Pascal üçgeninin yüksekliğini giriniz: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        int value = 1; // İlk değer 1
        for (int j = 0; j <= i; j++) {
            cout << value << " ";
            value = value * (i - j) / (j + 1); // Pascal üçgeni formülü
        }
        cout << endl;
    }

    return 0;
}
