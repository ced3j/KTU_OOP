// iki sayıyı takas etme


#include <iostream>
using namespace std;

void degistir(int &a, int &b){
    int temp = b;
    b = a;
    a = temp;
}


int main(){
    int num1 = 5;
    int num2 = 10;

    cout << "Degistirmeden once: " << num1 << " " << num2 << endl;

    degistir(num1, num2);

    cout << "Degistirdikten sonra: " << num1 << " " << num2 << endl;

    return 0;
}



/*

degistir fonksiyonunda, biz değişkenleri referans 
(adresleri değil, referansları) olarak gönderiyoruz, ve 
bu yüzden fonksiyonun içinde artık o değişkenlerin orijinal 
hallerine direkt ulaşabiliyoruz. Yani fonksiyon içinde, 
değişkenlerin kendileri ile çalışıyoruz, kopyalarıyla değil.

*/