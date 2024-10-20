#include <iostream>
using namespace std;

void dizi_oku_yazdir(int* dizi);
void tek_cift_sayilari_bul(int arr[], int size);
void sayi_al(int arr[], int& size);
bool dizide_varmi(int num, int arr[], int size);
void diziye_sayiyi_ekle(int num, int arr[], int& size);


int main(){
    int arr[6];
    int size = 5; // Başlangıçta dizideki eleman sayısı 5

    cout << "5 adet eleman girin: " << endl;
    for(int i = 0; i < 5; i++){
        int num;
        cin >> num;
        arr[i] = num;
    }

    sayi_al(arr, size); // Sayı alıp ekleme işlemi yapıyoruz

    tek_cift_sayilari_bul(arr, size); // Tek ve çift sayıları kontrol ediyoruz

    return 0;
}


void sayi_al(int arr[], int& size){
    cout << "Bir sayi girin: " << endl;
    int num;
    cin >> num;

    if(dizide_varmi(num, arr, size)){
        cout << "Dizide zaten mevcut" << endl;
    }else{
        diziye_sayiyi_ekle(num, arr, size);
    }
}


bool dizide_varmi(int num, int arr[], int size){
    for(int i = 0; i < size; i++){
        if(arr[i] == num){
            return true; // dizide var
        }
    }
    return false;
}

void diziye_sayiyi_ekle(int num, int arr[], int& size){
    if(size < 6){ // Eğer dizide 6'dan fazla eleman yoksa ekle
        arr[size] = num;
        size++; // Dizinin boyutunu güncelle
    } else {
        cout << "Dizi zaten dolu." << endl;
    }

    dizi_oku_yazdir(arr); 
}


void dizi_oku_yazdir(int dizi[]){
    cout << "Dizinin guncel hali: " << endl;
    for(int i = 0; i < 6; i++){
        cout << dizi[i] << " ";
    }
    cout << endl;
}


void tek_cift_sayilari_bul(int arr[], int size){
    cout << "Tek ve cift sayilar: " << endl;
    for(int i = 0; i < size; i++){
        if(arr[i] % 2 == 0){
            cout << "Cift: " << arr[i] << " ";
        }
        else{
            cout << "Tek: " << arr[i] << " ";
        }
    }
    cout << endl;
}