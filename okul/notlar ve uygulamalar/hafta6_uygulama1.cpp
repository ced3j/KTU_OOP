#include <iostream>
using namespace std;

void dizi_oku_yazdir(int* dizi);
void tek_cift_sayilari_bul(int arr[]);
void sayi_al(int arr[]);
bool dizide_varmi(int num, int arr[]);
void diziye_sayiyi_ekle(int num, int arr[]);


int main(){
    int arr[6];
    
    cout << "5 adet eleman girin: " << endl;
    for(int i = 0; i < 5; i++){
        int num;
        cin >> num;
        arr[i] = num;
    }

    sayi_al(arr);

    tek_cift_sayilari_bul(arr);

    return 0;
}


void sayi_al(int arr[]){
    cout << "Bir sayi girin: " << endl;
    int num;
    cin >> num;

    if(dizide_varmi(num, arr)){
        cout << "Dizide zaten mevcut" << endl;
    }else{
        diziye_sayiyi_ekle(num, arr);
    }
}


bool dizide_varmi(int num, int arr[]){
    for(int i = 0; i < 5; i++){
        if(arr[i] == num){
            return true; // dizide var
        }
    }
    return false;
}

void diziye_sayiyi_ekle(int num, int arr[]){
    arr[5] = num;
    dizi_oku_yazdir(arr); 
}


void dizi_oku_yazdir(int dizi[]){
    cout << "Dizinin guncel hali: " << endl;
    for(int i = 0; i < 6; i++){
        cout << dizi[i] << endl;
    }
}


void tek_cift_sayilari_bul(int arr[]){
    for(int i = 0; i < 6; i++){
        if(arr[i] % 2 == 0){
            cout << "Cift: " << arr[i] << " ";
        }
        else{
            cout << "Tek :" << arr[i] << " ";
        }
    }
}

