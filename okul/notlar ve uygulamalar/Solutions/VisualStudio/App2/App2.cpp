// Ogrencinin Tekrarlayan Notlarını Bulma

#include <iostream>
#include "header.h"

int main()
{
    Ogrenci ogr1;
    ogr1.notEkle(100);
    ogr1.notEkle(75);
    ogr1.notEkle(75);
    ogr1.notEkle(75);
    ogr1.notEkle(81);

    ogr1.notlariGoster();
    ogr1.ortalamaBul();

    cout << "\nTekrarlayan notlari sil: \n" << endl;
    ogr1.tekrarlayanNotlariSil();
    ogr1.notlariGoster();
    
    return 0;
}