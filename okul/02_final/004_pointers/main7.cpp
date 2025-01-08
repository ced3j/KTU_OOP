#include <iostream>
using namespace std;

// Bir fonksiyonun int türünde bir pointer döndürmesi
int* createArray(int size) {
    // Dinamik olarak bellek ayırma
    int* arr = new int[size];

    // Diziye örnek veri ekleyelim
    for (int i = 0; i < size; i++) {
        arr[i] = i * 2;
    }

    // Pointer'ı döndürme
    return arr;
}

int main() {
    int size = 5;

    // Fonksiyondan dönen pointer'ı alalım
    int* myArray = createArray(size);

    // Array içeriğini ekrana yazdıralım
    for (int i = 0; i < size; i++) {
        cout << myArray[i] << " ";
    }

    cout << endl;

    // Dinamik belleği serbest bırakmak için delete kullanıyoruz
    delete[] myArray;

    return 0;
}
