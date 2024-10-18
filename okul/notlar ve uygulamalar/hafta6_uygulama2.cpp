#include <iostream>
using namespace std;

void dizi_oku_yazdir(int* dizi);
void tek_cift_sayilari_bul(int arr[], int size, int tekSayilar[], int& tekSize, int ciftSayilar[], int& ciftSize);
void sayi_al(int arr[], int& size);
bool dizide_varmi(int num, int arr[], int size);
void diziye_sayiyi_ekle(int num, int arr[], int& size);

int main(){
    int arr[6];
    int tekSayilar[6], ciftSayilar[6]; // Tek ve çift sayıları tutacak diziler
    int tekSize = 0, ciftSize = 0; // Tek ve çift sayıları izleyen değişkenler
    int size = 5; // Başlangıçta dizideki eleman sayısı 5

    cout << "5 adet eleman girin: " << endl;
    for(int i = 0; i < 5; i++){
        int num;
        cin >> num;
        arr[i] = num;
    }

    sayi_al(arr, size); // Sayı alıp ekleme işlemi yapıyoruz

    // Tek ve çift sayıları bulma ve ayrı dizilere ekleme
    tek_cift_sayilari_bul(arr, size, tekSayilar, tekSize, ciftSayilar, ciftSize);

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

void tek_cift_sayilari_bul(int arr[], int size, int tekSayilar[], int& tekSize, int ciftSayilar[], int& ciftSize){
    for(int i = 0; i < size; i++){
        if(arr[i] % 2 == 0){
            ciftSayilar[ciftSize++] = arr[i]; // Çift sayıları ciftSayilar dizisine ekle
        } else {
            tekSayilar[tekSize++] = arr[i]; // Tek sayıları tekSayilar dizisine ekle
        }
    }

    // Tek sayıları yazdırma
    cout << "Tek sayilar: ";
    for(int i = 0; i < tekSize; i++){
        cout << tekSayilar[i] << " ";
    }
    cout << endl;

    // Çift sayıları yazdırma
    cout << "Cift sayilar: ";
    for(int i = 0; i < ciftSize; i++){
        cout << ciftSayilar[i] << " ";
    }
    cout << endl;
}
