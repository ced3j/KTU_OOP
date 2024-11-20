#include <iostream>
using namespace std;


double calculateAverage(int dizi[], int size);
int findMax(int dizi[], int size);
int findMin(int dizi[], int size);
void printAboveAverage(int dizi[], int size, double average);



int main(){
    const int size = 5;
    int notlar[size];

    cout << "Lutfen " << size << " ogrenci notunu giriniz: " << endl;
    
    for(int i = 0; i < size; i++){
        cout << "Not : " << i + 1 <<  ": ";
        cin >> notlar[i];
    }


    // notların ortalamasını hesapla:
    double average = calculateAverage(notlar, size);
    cout << "Notlarin ortalamasi: " << average << endl;

    // En yüksek ve en düşük notlar:
    int maxNote = findMax(notlar, size);
    int minNote = findMin(notlar, size);

    cout << "En yuksek not: " << findMax << endl;
    cout << "En dusuk not: " << findMin << endl;


    // Ortalamayi gecen notlar: 
    cout << "Ortalamayi gecen notlar: " << endl;
    printAboveAverage(notlar, size, average);




    return 0;
}


double calculateAverage(int dizi[], int size){
    double toplam = 0;
    for(int i = 0; i < size; i++){
        toplam += dizi[i];
    }

    return toplam / size;
}

int findMax(int dizi[], int size){
    int max = dizi[0];
    for(int i = 0; i < size; i++){
        if(max < dizi[i]){
            max = dizi[i];
        }
    }

    return max;
}

int findMin(int dizi[], int size){
    int min = dizi[0];
    for(int i = 0; i < size; i++){
        if(min > dizi[i]){
            min = dizi[i];
        }
    }

    return min;
}

void printAboveAverage(int dizi[], int size, double average){
    for(int i = 0; i < size; i++){
        if(dizi[i] > average){
            cout << dizi[i] << endl;
        }
    }

    cout << endl;
}

