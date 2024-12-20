// Ornek2.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
using namespace std;

//Bubble sort için bir template uygulaması verilmektedir
//Template türünden bir fonksiyon olarak yazıldı

template <class T> 
void bubbleSort(T dizi[], int n)
{
	for (int i = 0; i < n - 1; i++)
		for (int j = n - 1; i < j; j--)
			if (dizi[j] < dizi[j - 1])
				swap(dizi[j], dizi[j - 1]);
}

int main()
{
	int intDizisi[5] = { 10, 50, 30, 40, 20 };
	double doubleDizisi[5] = {10.5, 24.3, 5.1, 60.4, 32.7};
	int diziBoyutu = 5;

	// calls template function
	bubbleSort<int>(intDizisi, diziBoyutu);

	cout << "int dizinin siralanmis sekli: ";
	for (int i = 0; i < diziBoyutu; i++)
		cout << intDizisi[i] << " ";
	cout << endl;

	bubbleSort<double>(doubleDizisi, diziBoyutu);
	cout << "double dizinin siralanmis sekli: ";
	for (int i = 0; i < diziBoyutu; i++)
		cout << doubleDizisi[i] << " ";
	cout << endl;
	return 0;
}
