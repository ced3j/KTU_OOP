#include <iostream>
using namespace std;

int globalCounter = 0; // Global sayaç

void updateCounters(int value) {
    static int staticCounter = 0; // Statik local sayaç
    int localCounter = 0;         // Normal local sayaç

    globalCounter += value;
    staticCounter += value;
    localCounter += value;

    cout << "Global Counter: " << globalCounter << endl;
    cout << "Static Counter: " << staticCounter << endl;
    cout << "Local Counter: " << localCounter << endl;
}

int main() {
    updateCounters(5);
    updateCounters(10);
    updateCounters(20);

    return 0;
}
