// Ornek3.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include<iostream>
using namespace std;

template <typename T>
class Dizi 
{
private:
    T* veri;
    int boyut;
public:
    Dizi(int boyut);
    ~Dizi();
    void ElemanEkle(int index, T eleman);
    T ElemanAl(int index);
};

template <typename T>
Dizi<T>::Dizi(int boyut) 
{
    this->boyut = boyut;
    veri = new T[boyut];
}

template <typename T>
Dizi<T>::~Dizi() 
{
    delete[] veri;
}

template <typename T>
void Dizi<T>::ElemanEkle(int index, T eleman) 
{
    if (index >= 0 && index < boyut)
    {
        veri[index] = eleman;
    }
}

template <typename T>
T Dizi<T>::ElemanAl(int index)
{
    if (index >= 0 && index < boyut)
    {
        return veri[index];
    }
    return T();
}

int main()
{
    Dizi<int> intDizi(5);
    intDizi.ElemanEkle(0, 10);
    intDizi.ElemanEkle(1, 20);
    intDizi.ElemanEkle(2, 30);
    cout << intDizi.ElemanAl(0) << endl;
    cout << intDizi.ElemanAl(1) << endl;
    cout << intDizi.ElemanAl(2) << endl;

    Dizi<char> charDizi(3);
    charDizi.ElemanEkle(0, 'A');
    charDizi.ElemanEkle(1, 'B');
    charDizi.ElemanEkle(2, 'C');
    cout << charDizi.ElemanAl(0) << endl;
    cout << charDizi.ElemanAl(1) << endl;
    cout << charDizi.ElemanAl(2) << endl;

}