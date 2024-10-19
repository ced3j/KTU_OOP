#include <iostream>
using namespace std;

void faktoriyel(int &n, int &sonuc){
    sonuc = 1;
    for(int i = 0; i <= n; i++){
        sonuc *= i;
    }
}

int main(){
    int sayi = 5;
    int sonuc;

    faktoriyel(sayi, sonuc);

    cout << sayi << "sayisinin faktoriyeli: " << sonuc << endl;

    return 0;
}



/*

Referans kullanmanın kazandırdığı:
    Değişiklik yapılınca doğrudan değişkene yansır aracı değişkenler kullanmayız

    Daha Az Kod: Return kullanmadan birden fazla değeri fonksiyon 
    içinde değiştirebiliriz. Referanslarla, bir fonksiyon birden 
    fazla parametreyi doğrudan değiştirebilir.


*/


/*
POINTER KULLANARAK:

    void faktoriyel(int n, int* sonuc){
        *sonuc = 1;
        for(int i = 0; i <= n; i++){
            *sonuc *= i;
        }
    }


    int main(){

        int sayi = 5;
        int sonuc;

        faktoriyel(sayi, &sonuc);
        cout << sayi << " sayisinin faktoriyeli: " << sonuc << endl;
        return 0;
    }
*/

