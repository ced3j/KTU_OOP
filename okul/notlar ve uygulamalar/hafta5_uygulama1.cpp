#include <iostream>
#include <iomanip>

using namespace std;


/*
Girilen sayıya kadar olan tüm sayıların mükemmel sayı olup olmadığını hesaplayan program
*/


int main(){
    
    int num;
    cout << "Sayi gir: ";
    cin >> num;
    cout << "Bolenler ve mukemmel sayilar: " << endl;


    for(size_t i = 1; i <= num; i++){
        int toplam = 0;
        for(size_t x = 1; x <= i/2; x++){
            if(i % x == 0){
                toplam += x;
            }
        }
        if(toplam == i){
            cout << "Sayi:" << right << setw(3) << i << " | Tam bolenler: " << endl;
            cout << right << setw(19) << "| Toplam: " << toplam << " | " << "Bu mukemmel sayidir" << endl;
        }
        else{
            cout << "Sayi:" << right << setw(3) << i << " | Tam bolenler: " << endl;
            cout << right << setw(19) << "| Toplam: " << toplam << endl;
        }
        
        
    }


    return 0;
}