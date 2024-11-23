#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    const int num_students = 2; // Örnek olarak 2 öğrenci
    string names[num_students];
    int ages[num_students];
    string majors[num_students];

    cout << "Öğrenci bilgilerini giriniz: " << endl;

    for (int i = 0; i < num_students; i++) {
        cin.ignore(); // Önceki girişten kalan karakterleri temizler
        cout << "Öğrenci " << i + 1 << " adı: ";
        getline(cin, names[i]); // Tam isim almak için getline kullanılır

        cout << "Öğrenci " << i + 1 << " yaşı: ";
        cin >> ages[i];

        cin.ignore(); // Enter karakterini atlar
        cout << "Öğrenci " << i + 1 << " bölümü: ";
        getline(cin, majors[i]); // Tam bölüm adı almak için
    }

    // Bilgileri tablo formatında yazdır
    cout << endl << "Öğrenci Bilgileri:" << endl;
    cout << left << setw(20) << "Ad" 
         << setw(10) << "Yaş" 
         << setw(20) << "Bölüm" << endl;

    cout << string(50, '-') << endl; // Ayırıcı çizgi

    for (int i = 0; i < num_students; i++) {
        cout << left << setw(20) << names[i] 
             << setw(10) << ages[i] 
             << setw(20) << majors[i] << endl;
    }

    return 0;
}
