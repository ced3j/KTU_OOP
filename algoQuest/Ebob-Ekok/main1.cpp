// EBOB 

#include <iostream>
using namespace std;

int findGCD(int a, int b) {
    int gcd = 1; // En küçük EBOB değeri 1'dir
    int smaller = (a < b) ? a : b; // Küçük olan sayıyı belirle

    for (int i = smaller; i >= 1; i--) {
        if (a % i == 0 && b % i == 0) { // Ortak bölen bulunduğunda
            gcd = i;
            break; // En büyük ortak böleni bulduğumuzda döngüyü sonlandır
        }
    }

    return gcd;
}

int main() {
    int num1, num2;

    cout << "Birinci sayiyi girin: ";
    cin >> num1;

    cout << "Ikinci sayiyi girin: ";
    cin >> num2;

    int gcd = findGCD(num1, num2);

    cout << "EBOB(" << num1 << ", " << num2 << ") = " << gcd << endl;

    return 0;
}

