#include <iostream>
using namespace std;


void printValue(const int value){
    cout << "Deger: " << value << endl;
    // value degerini yazdırabiliriz ama değiştiremeyiz
    // value = 10; // hata verir
}


// void printArray(const int* arr, int size)
// değerler okunabilir ama değiştirilemez

int main(){
    int a = 5;
    printValue(a);

    return 0;
}