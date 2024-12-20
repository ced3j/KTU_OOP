// Ornek1.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
using namespace std;

//Bir fonksiyon tüm veri türleri için çalışır.
//Operatör '>' aşırı yüklenmişse, kullanıcı 
//tanımlı türler için bile çalışabilir

template <typename T> 
T enBuyuk(T x, T y)
{
	return (x > y) ? x : y;
}
int enBuyuk(int x, int y)
{
	return (x > y) ? x : y;
}

int main()
{
	//int değerler için fonksiyonu çağrımı
	cout << enBuyuk<int>(8, 2) << endl;
	//double değerler için fonksiyon çağrımı
	cout << enBuyuk<double>(2.0, 9.0) << endl;
	//char türü için fonksiyon çağrımı
	cout << enBuyuk<char>('b', 'h') << endl;

	return 0;
}
