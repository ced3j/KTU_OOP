#include <iostream>
using namespace std;

double calculateAverage(int dizi[], int size);
void printAboveAverage(int dizi[], int size, double average);

int main() {
    const int size = 5;
    int numbers[size];

    cout << "Lutfen 5 sayi giriniz: " << endl;
    
    for (int i = 0; i < size; i++) {
        cout << "Sayi " << i + 1 << ": ";
        cin >> numbers[i];
    }

    // Ortalamayi hesapla
    double average = calculateAverage(numbers, size);
    cout << "Dizinin ortalamasi: " << average << endl;

    cout << "Ortalamadan buyuk olan sayilar: " << endl;
    printAboveAverage(numbers, size, average);
    
    return 0;
}

double calculateAverage(int dizi[], int size) {
    double toplam = 0;
    for (int i = 0; i < size; i++) {
        toplam += dizi[i];
    }
    return toplam / size; // Ortalamayı hesapla ve döndür
}

void printAboveAverage(int dizi[], int size, double average) {
    for (int i = 0; i < size; i++) {
        if (dizi[i] > average) {
            cout << dizi[i] << endl;
        }
    }
}
