/*

static_cast: Bir değişkenin türünü başka bir türe dönüştürmek için kullanılan bir operatördür. 
    Örneğin, bir int değişkenini double türüne dönüştürmek için kullanılır.

cin.get: cin fonksiyonunun bir üyesi olan get fonksiyonu, klavyeden bir karakter okumak için kullanılır.

setw: iomanip kütüphanesinde bulunan setw fonksiyonu, çıktı 
    akımındaki bir değişkenin genişliğini ayarlamak için kullanılır.

getline: string kütüphanesinde bulunan getline fonksiyonu, 
    klavyeden bir satır okumak için kullanılır.

filestream özellikleri: Dosya akışı özellikleri, dosyaları okumak ve yazmak için kullanılan fonksiyonlardır. 
    Örneğin, fstream kütüphanesinde bulunan open, close, read, write gibi fonksiyonlar.

pointers: İşaretçiler, bellekteki bir adresi tutan değişkenlerdir. 
    Bir değişkenin adresini tutarak, o değişkenin değerine erişmek için kullanılır.
*/



#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

int main(){

    // Dosya akışı özellikleri
    ofstream dosya("veri.txt");
    if(!dosya.is_open()){
        cerr << "Dosya acilamadi! " << endl;
        return 1;
    }

    
    // Klavyeden veri almak
    string ad, soyad;
    cout << "Adinizi giriniz: " << endl;
    cin >> ad;
    cout << "Soyadinizi giriniz: " << endl;
    cin >> soyad;

    // Dosyaya veri yazalım
    dosya << "Ad: " << ad << endl;
    dosya << "Soyad: " << soyad << endl;

    dosya.close();

    // Dosyadan veri okuyalım

    ifstream dosyaOku("veri.txt");
    if(!dosyaOku.is_open()){
        cerr << "Dosya acilamadi! " << endl;
        return 1;
    } 

    string satir;
    while(getline(dosyaOku, satir)){
        cout << satir << endl;
    }


    // Çıktı akımını ayarlamak
    cout << setw(10) << left << "Isim" << setw(10) << "Soyisim" << endl;
    cout << setw(10) << left << ad << setw(10) << soyad << endl;


    int sayi = 10;
    double sayiDouble = static_cast<double>(sayi);

    cout << "Sayinin double degeri: " << sayiDouble << endl;

    char karakter;
    cout << "Bir karakter girin: " << endl;
    cin.get(karakter);
    cout << "Girilen karakter: " << karakter << endl;
    
    return 0;
}

