#include <iostream>
#include<string>
#include <fstream>
#include <sstream> // stringstream için
#include <iomanip>


using namespace std;
#define SIZE 500


class Ogrenciler
{
   
    private:
        string* Ad;
        string* Ogr_no;
        float* Ara_sinav;
        float* Ikinci_sinav;
        float* Odev;
        float* Final;
        int* Devam_Sayisi;


    public:
        string a;
        Ogrenciler();
        ~Ogrenciler();
        void readFromTXT();
        float Ortalama(int);
        void print();
        void print(bool);
        void print(int ,string);
        int kayitli_kullanici_sayisi();
     

};

void basliklar()
{

        cout << left
        << setw(20) << "Ad"
        << setw(15) << "Ogr_no"
        << setw(15) << "Ara Sinav"
        << setw(15) << "Ikinci Sinav"
        << setw(15) << "Odev"
        << setw(15) << "Final"
        << setw(15) << "Devam Sayisi"
        << setw(15) << "Ortalama" << endl;
        cout << string(119, '-') << endl;

}





// Constructor

Ogrenciler::Ogrenciler() {
    Ad = new string[SIZE];
    Ogr_no = new string[SIZE];
    Ara_sinav = new float[SIZE];
    Ikinci_sinav = new float[SIZE];
    Odev = new float[SIZE];
    Final = new float[SIZE];
    Devam_Sayisi = new int[SIZE];
    readFromTXT();
}

// Destructor

Ogrenciler::~Ogrenciler() {
    delete[] Ad;
    delete[] Ogr_no;
    delete[] Ara_sinav;
    delete[] Ikinci_sinav;
    delete[] Odev;
    delete[] Final;
    delete[] Devam_Sayisi;
}

int Ogrenciler::kayitli_kullanici_sayisi()
{

    int k = 0;
    ifstream satir_sayisi("C:\\Users\\dalki\\Desktop\\ders\\OOP_\\girdi.txt");
    while (satir_sayisi.ignore(numeric_limits<streamsize>::max(), '\n'))  // ignore(numeric_limits<streamsize>::max() okumadan atla satırı
    {                                                                     // bu sayede bellekte yer kaplamamış olucak ve satır sayısını elde etmiş oluruz
        k++;  // Satır sayısını artır
    }
    satir_sayisi.close();
    return k;

}

// Degerleri Oku


void Ogrenciler::readFromTXT() {
    string satir;
    string kelime;
    int i = 0;  // Sütun sayısını takip etmek için
    int sayac = 0;  // Öğrencileri takip etmek için
    ifstream girdiler("C:\\Users\\dalki\\Desktop\\ders\\OOP_\\girdi.txt");

    if (!girdiler.is_open()) {
        cerr << "Dosya açılamadı!" << endl;
        return;
    }

    // Satır satır okuma işlemi
    while (getline(girdiler, satir)) {
        stringstream ss(satir);
        string kelime;

        // Her bir satırdaki sütunları virgülle ayır
        while (getline(ss, kelime, ',')) {
            if (kelime.empty()) {
                kelime = "0"; // Boş değer varsa "0" ata
            }

            if (i == 0) {
                Ad[sayac] = kelime; // Ad dizisine ekleme
            }
            else if (i == 1) {
                Ogr_no[sayac] = kelime; // Öğrenci numarasına ekleme
            }
            else if (i == 2) {
                Ara_sinav[sayac] = stof(kelime); // Ara sınav puanını float olarak ekle
            }
            else if (i == 3) {
                Ikinci_sinav[sayac] = stof(kelime); // İkinci sınav puanını float olarak ekle
            }
            else if (i == 4) {
                Odev[sayac] = stof(kelime); // Ödev notunu float olarak ekle
            }
            else if (i == 5) {
                Final[sayac] = stof(kelime); // Final notunu float olarak ekle
            }
            else if (i == 6) {
                Devam_Sayisi[sayac] = stof(kelime); // Devam sayısını float olarak ekle
                sayac++;  // Yeni öğrenciye geç
                i = -1;   // Sütun sayısını sıfırla
            }
            i++;
        }
    }


    girdiler.close();
}
void menu()
{
    Ogrenciler k1;
    char p;
    string dosya_Adi;
    string z;

    while (true) {
        cout << "Lutfen bir secim yapiniz." << endl;
        cout << "1)Ortalamalari Gor." << endl;
        cout << "2)Gecenleri Goster." << endl;
        cout << "3)Kalanlari Goster." << endl;
        cout << "4)Kalanlari Kaydet." << endl;
        cout << "5)Gecenleri Kaydet." << endl;
        cout << "--Cikmak icin 0(sifir) basin." << endl;
        cin >> p;

        switch (p) {
        case '1':
            system("cls");
            k1.print();
            cout << "\nMenuye donmek icin Y, Cikmak icin herhangi bir tusa basiniz:";
            cin >> z;
            if (z != "y" && z != "Y") return; // Menüden çıkış
            system("cls");
            break;

        case '2':
            system("cls");
            k1.print(1);
            cout << "\nMenuye donmek icin Y, Cikmak icin herhangi bir tusa basiniz:";
            cin >> z;
            if (z != "y" && z != "Y") return; // Menüden çıkış
            system("cls");
            break;

        case '3':
            system("cls");
            k1.print(0);
            cout << "\nMenuye donmek icin Y, Cikmak icin herhangi bir tusa basiniz:";
            cin >> z;
            if (z != "y" && z != "Y") return; // Menüden çıkış
            system("cls");
            break;

        case '4':
            system("cls");
            cout << "Lutfen kaydetmek istediginiz dosyanin adini giriniz:";
            cin >> dosya_Adi;
            k1.print(0, dosya_Adi + ".txt");
            system("cls");
            cout << "Liste olusturuldu.";
            cout << "\nMenuye donmek icin Y, Cikmak icin herhangi bir tusa basiniz:";
            cin >> z;
            if (z != "y" && z != "Y") return; // Menüden çıkış
            system("cls");
            break;

        case '5':
            system("cls");
            cout << "Lutfen kaydetmek istediginiz dosyanin adini giriniz:";
            cin >> dosya_Adi;
            k1.print(1, dosya_Adi + ".txt");
            system("cls");
            cout << "Liste olusturuldu.";
            cout << "\nMenuye donmek icin Y, Cikmak icin herhangi bir tusa basiniz:";
            cin >> z;
            if (z != "y" && z != "Y") return; // Menüden çıkış
            system("cls");
            break;

        case '0':
            return; // Programdan çıkış

        default:
            system("cls");
            
            break;
        }
    }
}

void Ogrenciler::print() {
    basliklar();

    for(int i = 0; i < kayitli_kullanici_sayisi(); i++) {
        if (Ad[i].empty()) break;


        cout << left
            << setw(20) << Ad[i]
            << setw(15) << Ogr_no[i]
            << setw(15) << Ara_sinav[i]
            << setw(15) << Ikinci_sinav[i]
            << setw(15) << Odev[i]
            << setw(15) << Final[i]
            << setw(15) << Devam_Sayisi[i]
            << setw(15) << Ortalama(i) << endl;
    }
}
void Ogrenciler::print(bool o) {
    readFromTXT();
    basliklar();

    if (o == 0) {
        for (int i = 0; i < kayitli_kullanici_sayisi(); i++) {
            if (Ad[i].empty()) break;
            if (Ortalama(i)<50) {
                cout << left
                    << setw(20) << Ad[i]
                    << setw(15) << Ogr_no[i]
                    << setw(15) << Ara_sinav[i]
                    << setw(15) << Ikinci_sinav[i]
                    << setw(15) << Odev[i]
                    << setw(15) << Final[i]
                    << setw(15) << Devam_Sayisi[i]
                    << setw(15) << Ortalama(i) << endl;
            }
        }
    }
    else if (o == 1) {
        for (int i = 0; i < kayitli_kullanici_sayisi(); i++) {
            if (Ad[i].empty()) break;
            if (Ortalama(i) > 50) {
                cout << left
                    << setw(20) << Ad[i]
                    << setw(15) << Ogr_no[i]
                    << setw(15) << Ara_sinav[i]
                    << setw(15) << Ikinci_sinav[i]
                    << setw(15) << Odev[i]
                    << setw(15) << Final[i]
                    << setw(15) << Devam_Sayisi[i]
                    << setw(15) << Ortalama(i) << endl;
            }
        }
    }
    else
    {

        cout << "hatali giris";
        
    }
}


void Ogrenciler::print(int t, string file) {
    ofstream cikti;
    cikti.open(file);

    readFromTXT();
    if (t == 0) {
        // Başlık satırını yazdır
        cikti << left
            << setw(20) << "Ad"
            << setw(15) << "Ogr_no"
            << setw(15) << "Ara Sinav"
            << setw(15) << "Ikinci Sinav"
            << setw(15) << "Odev"
            << setw(15) << "Final"
            << setw(15) << "Devam Sayisi"
            << setw(15) << "Ortalama" << endl;

        // Ayrım çizgisi
        cikti << string(120, '-') << endl;

        for (int i = 0; i < kayitli_kullanici_sayisi(); i++) {
            if (Ad[i].empty()) break; // Eğer öğrenci adı boşsa, döngü sonlanır.

            // Ortalama 50'den düşük olan öğrencileri yazdır
            if (Ortalama(i) < 50) {


                // Öğrencinin verilerini yazdır
                cikti << left
                    << setw(20) << Ad[i]
                    << setw(15) << Ogr_no[i]
                    << setw(15) << Ara_sinav[i]
                    << setw(15) << Ikinci_sinav[i]
                    << setw(15) << Odev[i]
                    << setw(15) << Final[i]
                    << setw(15) << Devam_Sayisi[i]
                    << setw(15) << Ortalama(i) << endl;

                // Ayrım çizgisi
                cikti << string(120, '-') << endl;
            }
        }

    }
    else if (t == 1) {
        // Başlık satırını yazdır
        cikti << left
            << setw(20) << "Ad"
            << setw(15) << "Ogr_no"
            << setw(15) << "Ara Sinav"
            << setw(15) << "Ikinci Sinav"
            << setw(15) << "Odev"
            << setw(15) << "Final"
            << setw(15) << "Devam Sayisi"
            << setw(15) << "Ortalama" << endl;

        // Ayrım çizgisi
        cikti << string(120, '-') << endl;

        for (int i = 0; i < kayitli_kullanici_sayisi(); i++) {
            if (Ad[i].empty()) break; // Eğer öğrenci adı boşsa, döngü sonlanır.

            // Ortalama 50'den düşük olan öğrencileri yazdır
            if (Ortalama(i) > 50) {


                // Öğrencinin verilerini yazdır
                cikti << left
                    << setw(20) << Ad[i]
                    << setw(15) << Ogr_no[i]
                    << setw(15) << Ara_sinav[i]
                    << setw(15) << Ikinci_sinav[i]
                    << setw(15) << Odev[i]
                    << setw(15) << Final[i]
                    << setw(15) << Devam_Sayisi[i]
                    << setw(15) << Ortalama(i) << endl;

                // Ayrım çizgisi
                cikti << string(120, '-') << endl;
            }
        }

    }
    else
    {

        cout << "hatali giris";
    }
}


float Ogrenciler::Ortalama(int q) {
    
    return (Ara_sinav[q] * 0.2) + (Ikinci_sinav[q] * 0.2) + (Odev[q] * 0.2) + (Final[q] * 0.4);
}

int main()
{
   
   
    menu();
   
   
    
}