// Ogrenci not ortalamasi projesi

#pragma once
#include <iostream>


class Ogrenci {
private:
	int notlar[3]; 
	int notSayisi;
public:
	Ogrenci() {
		notSayisi = 0;
	}

	void notEkle(int notDegeri);
	float ortalamaHesapla() const;

};


void Ogrenci::notEkle(int notDegeri) {
	if (notSayisi < 3) {
		notlar[notSayisi] = notDegeri;
		notSayisi++;
	}
	else {
		std::cout << "3 not zaten girildi! " << std::endl;
	}
}


float Ogrenci::ortalamaHesapla() const{
	int toplam = 0;
	for (size_t i = 0; i < 3; i++) {
		toplam += notlar[i];
	}

	return static_cast<float>(toplam) / notSayisi;

}