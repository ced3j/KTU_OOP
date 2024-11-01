#pragma once

#include <iostream>
using namespace std;

class Ogrenci {
private:
	int notlar[5];
	int notSayisi;
public:
	Ogrenci() {
		notSayisi = 0;
	}

	void notEkle(int note);
	void notlariGoster();
	void tekrarlayanNotlariSil();
	float ortalamaBul();
};


void Ogrenci::notEkle(int note) {
	if (notSayisi < 5) {
		notlar[notSayisi] = note;
		notSayisi++;
	}
	else {
		cout << "3 adet not girilmis! " << endl;
	}
}


void Ogrenci::notlariGoster() {
	for (int i = 0; i < notSayisi; i++) {
		cout << "Not" << i << " : " << notlar[i] << endl;
	}
}


float Ogrenci::ortalamaBul() {
	int toplam = 0;
	for (int i = 0; i < notSayisi; i++) {
		toplam += notlar[i];
	}

	return static_cast<float>(toplam) / notSayisi;
}


void Ogrenci::tekrarlayanNotlariSil() {
	for (int i = 0; i < notSayisi; i++) {
		for (int j = i + 1; j < notSayisi; j++) {
			if (notlar[i] == notlar[j]) {
				// Bir kopya bulduk, j indisini kaydýrarak silelim
				for (int k = j; k < notSayisi - 1; k++) {
					notlar[k] = notlar[k + 1];
				}
				notSayisi--; // Dizi boyutunu azalt
				j--; // Ayný j konumunu tekrar kontrol et
			}
		}
	}

}