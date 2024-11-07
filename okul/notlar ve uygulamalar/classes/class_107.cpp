#include <iostream>
using namespace std;

class BankaHesabi{
    public:
        string sahip;
        double bakiye;

    public:
        BankaHesabi() : bakiye(0.0){} // Başlangıçta bakiye 0.0
        void bakiyeSorgula();
};

void BankaHesabi::bakiyeSorgula(){
    cout << sahip << " adli kisinin bakiyesi: " << bakiye << endl;
}

class Bankamatik{
    private:
        BankaHesabi musteriler[100];
        int musteriCount;

    public:
        Bankamatik() : musteriCount(0){} // Başlangıçta müşteri sayısı 0
        void musteriEkle(const BankaHesabi& hesap);
        void findCustomerByName(const BankaHesabi& hesap);
        void bilgiGoruntule(int musteriIndex);
        void paraYatir(int musteriIndex, double paraMiktari);
        void paraCek(int musteriIndex, double paraMiktari);
};

void Bankamatik::musteriEkle(const BankaHesabi& hesap){
    if(musteriCount < 100){
        musteriler[musteriCount] = hesap;
        musteriCount++;
    }else{
        cout << "Kapasite dolu!" << endl;
    }
}

void Bankamatik::findCustomerByName(const BankaHesabi& hesap) {
    bool found = false; // Müşteri bulunup bulunmadığını kontrol etmek için bir flag

    for (int i = 0; i < musteriCount; i++) {
        if (musteriler[i].sahip == hesap.sahip) { // Sadece isimle arama yapılır
            cout << "Aranan musteri bulundu: " << endl;
            cout << "Hesap sahibi: " << musteriler[i].sahip << endl;
            cout << "Bakiye: " << musteriler[i].bakiye << endl;
            found = true;
            break;  // Müşteri bulundu, döngüyü sonlandır
        }
    }

    if (!found) { // Müşteri bulunmazsa
        cout << "Musteri bulunamadi!" << endl;
    }
}

void Bankamatik::bilgiGoruntule(int musteriIndex){
    if (musteriIndex < musteriCount) {
        cout << "Hesap sahibi: " << musteriler[musteriIndex].sahip << 
        ", bakiye: " << musteriler[musteriIndex].bakiye << endl;
    } else {
        cout << "Geçersiz müşteri indeksi!" << endl;
    }
}

void Bankamatik::paraYatir(int musteriIndex, double paraMiktari){
    musteriler[musteriIndex].bakiye += paraMiktari;
}

void Bankamatik::paraCek(int musteriIndex, double paraMiktari){
    musteriler[musteriIndex].bakiye -= paraMiktari;
}

int main(){
    Bankamatik atm;
    
    BankaHesabi musteri1;
    musteri1.sahip = "Ahmet Kardag";
    musteri1.bakiye = 5000;
    atm.musteriEkle(musteri1);

    BankaHesabi musteri2; // Buradaki hatayı düzelttim
    musteri2.sahip = "Derin Kardag"; // doğru müşteri bilgileri
    musteri2.bakiye = 100;
    atm.musteriEkle(musteri2);

    BankaHesabi sorgulamaHesabi;
    sorgulamaHesabi.sahip = "Ahmet Kardag"; // Bu ismi doğru girmelisiniz
    atm.findCustomerByName(sorgulamaHesabi);  // "Ahmet Kardag" bilgilerini gösterir

    return 0;
}
