/*

3. Pointer'larla ilgili dizi sorusu
Aşağıdaki adımlar gereklidir:

Bir integer pointer'ı geri döndüren ve parametre almayan bir fonksiyon tanımlanır.
Başka bir pointer fonksiyonunun pointer'ını döndüren parametre almayan bir fonksiyon tanımlanır.
Bunları bir araya getirip bir pointer dizisi tanımlanır.



*/


#include <iostream>
using namespace std;

// Bir integer pointer döndüren, parametre almayan fonksiyon
int* returnIntPointer() {
    static int value = 42; // Statik, çünkü yerel değişkenlerin belleği korunmalı
    return &value;
}

// Pointer döndüren fonksiyonun pointer'ını döndüren bir fonksiyon
int* (*returnFunctionPointer())() {
    return returnIntPointer;
}

int main() {
    // 5 elemanlı pointer dizisi tanımlama
    int* (*arr[5])(); // Pointer dizisi: Her eleman bir fonksiyon pointer'ıdır

    // Dizi elemanlarına aynı fonksiyonu atayalım
    for (int i = 0; i < 5; i++) {
        arr[i] = returnFunctionPointer();
    }

    // Her elemanı çağırarak sonuçları göster
    for (int i = 0; i < 5; i++) {
        cout << "Result from arr[" << i << "]: " << *arr[i]() << endl;
    }

    return 0;
}
