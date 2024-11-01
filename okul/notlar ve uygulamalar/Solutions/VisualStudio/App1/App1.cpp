#include <iostream>
#include "header.h"

using namespace std;

int main(){

    Ogrenci ogr1;
    ogr1.notEkle(100);
    ogr1.notEkle(85);
    ogr1.notEkle(92);
    
    cout << "ogr1 not ortalamasi: " << ogr1.ortalamaHesapla() << endl;

    return 0;
}
