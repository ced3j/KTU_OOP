// DİKDÖRTGEN 

#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    cout << "Dikdörtgenin satır ve sütun sayısını giriniz (örnek: 3 5): ";
    cin >> rows >> cols;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}
