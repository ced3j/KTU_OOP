#include <iostream>
using namespace std;

int main() {
    int num = 34235;
    int reversed = 0;

    while (num != 0) {
        int digit = num % 10;  // Son basamağı al
        reversed = reversed * 10 + digit;  // Basamakları ters sıraya ekle
        num /= 10;  // Sayıyı küçült
    }

    cout << "Reversed Number: " << reversed << endl;

    return 0;
}
