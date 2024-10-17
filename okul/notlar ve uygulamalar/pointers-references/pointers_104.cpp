// Pointer döndüren fonksiyonlar

#include <iostream>
using namespace std;

int* findGreater(int* a, int* b);

int main(){
    int x = 10, y = 20;
    int *greaterNum = nullptr; 
    // fonksiyondan dönen değeri tutacağımız pointer değişkeni bu olacak
    // pointer olmalı çünkü fonksiyon da pointer değeri döndürecek

    greaterNum = findGreater(&x, &y);
    // Fonksiyon bizden adres beklediği için parametrelere adres yazdık
    // yani biz değil de ben aslında... neyse

    cout << "Sayi1: " << x << "\nSayi2: " << y << endl; 
    cout << "Buyuk olan sayi : " << *greaterNum << endl;
    cout << "Buyuk sayinin adresi: " << greaterNum << endl;

    return 0;
}

int* findGreater(int* a, int* b){
    if(*a > *b){
        return a;
    }else{
        return b;
    }
}