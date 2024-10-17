#include <iostream>
using namespace std;

int main(){

    int* p;
    int sayi;
    sayi = 78;
    p = &sayi;
    
    cout << p << endl;          // 0xb6437ffc84     p'nin tuttuğu adres
    cout << sayi << endl;       // 78               sayi'nın tuttuğu değer
    cout << &sayi << endl;      // 0xb6437ffc84     sayi'nın adresi
    cout << &p << endl;         // 0xb6437ffc88     p'nin adresi
    cout << *p << endl;         // 78               p'nin tuttuğu adresteki değer

    *p = 24;                    // 78 idi 24 oldu   p'nin adresindeki değer değişti

    cout << sayi << endl;       // 24

    
    return 0;
}







/*      ---------------- EXAMPLE 1 ----------------

#include <iostream>
using namespace std;


double OrtalamaBulDouble(int *dizi, int boyut){
    int top = 0;
    double ort;

    for(size_t i = 0; i < boyut; i++){
        top += *(dizi+i);
    }

    ort = double(top)/boyut;
    return ort;
}


int OrtalamaBulInt(int* dizi, int boyut){
    int top = 0, ort = 0;

    for(size_t i = 0; i < boyut; i++){
        top += *(dizi+i);
    }
    return (top/boyut);
}



int main(){
    int arr[] = {1,3,4,5,6,78,9};
    int size = sizeof(arr)/sizeof(arr[0]);
    double ortDouble = OrtalamaBulDouble(arr, size);
    int ortInteger = OrtalamaBulInt(arr, size);

    cout << "Double ortalama sonuc: " << ortDouble << endl;
    cout << "Integer ortalama sonuc: " << ortInteger << endl;


    return 0;
}



*/









/* ---------------- EXAMPLE 2 ----------------



#include <iostream>
using namespace std;

int main(){
    double r[] = {3.0, 5.1, 62.12, 53.2, 11.4};
    double *p;

    p = r;

    for(size_t i = 0; i < 5; i++){
        cout << "Double eleman[" << i << "] : " << *(p + i) << endl;
    }


    int a[] = {1,2,3,4,5,6,7,8,9};
    int *p1;
    p1 = a;

    for(size_t i = 0; i < 9; i++){
        cout << "Int eleman[" << i << "] : " << *(p1 + i) << endl;
    }

    
    return 0;
}





*/










/*


#include <iostream>
using namespace std;

int main(){


    
    return 0;
}



*/