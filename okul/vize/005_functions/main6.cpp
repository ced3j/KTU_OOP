#include <iostream>
using namespace std;

// Fonksiyon çağrı sayısını sayan fonksiyon
void countCalls() {
    static int callCount = 0;  // Static değişken, her çağrıldığında aynı değeri korur
    callCount++;
    cout << "Fonksiyon " << callCount << " kez cagırıldı." << endl;
}

int main() {
    countCalls();  // 1. çağrı
    countCalls();  // 2. çağrı
    countCalls();  // 3. çağrı

    return 0;
}
