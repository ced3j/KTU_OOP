#include <iostream>
using namespace std;

class ArrayB;

class ArrayA{
    private:
        int dizi[5];
        int boyut;
    
    public:
        ArrayA() : boyut(0){}

        void setBoyut(int s){
            boyut = s;
        }

        void Eleman_Al();
        void Goster() const;
        int getSize() const;
        int getValue(int index) const;
        ArrayA operator +(const ArrayB& arrB) const;

};


class ArrayB{
    private:
        int dizi[5];
        int boyut;
    
    public:
        ArrayB() : boyut(0){}

        void setBoyut(int s){
            boyut = s;
        }

        void Eleman_Al();
        void Goster() const;
        int getSize() const;
        int getValue(int index) const;
        ArrayB operator -(const ArrayA& arrA) const;

};



int ArrayA::getSize() const{
    return boyut;
}

int ArrayA::getValue(int index) const{
    return dizi[index];
}

void ArrayA::Eleman_Al(){
    cout << "Birinci dizinin elemanlarini giriniz: " << endl;
    for(int i = 0; i < boyut; i++){
        cout << "Eleman: [" << i << "]: ";
        cin >> dizi[i];
    }
}


void ArrayA::Goster() const{
    for(int i = 0; i < boyut; i++){
        cout << dizi[i] << endl;
    }
    cout << endl;
}


ArrayA ArrayA::operator+(const ArrayB& arrB) const{
    ArrayA result;
    result.setBoyut(boyut);
    for(int i = 0; i < boyut; ++i){
        result.dizi[i] = dizi[i] + arrB.getValue(i);
    }
    return result;
}


int ArrayB::getSize() const{
    return boyut;
}

int ArrayB::getValue(int index) const{
    return dizi[index];
}

void ArrayB::Eleman_Al(){
    cout << "Ikinci dizinin elemanlarini giriniz: " << endl;
    for(int i = 0; i < boyut; i++){
        cout << "Eleman: [" << i << "]: ";
        cin >> dizi[i];
    }
}



void ArrayB::Goster() const{
    for(int i = 0; i < boyut; i++){
        cout << dizi[i] << endl;
    }
    cout << endl;
}


ArrayB ArrayB::operator-(const ArrayA& arrA) const{
    ArrayB result;
    result.setBoyut(boyut);
    for(int i = 0; i < boyut; ++i){
        result.dizi[i] = dizi[i] - arrA.getValue(i);
    }
    return result;
}


int main(){

    int size;
    cout << "Dizinin boyutunu giriniz: ";
    cin >> size;

    ArrayA nesne1;
    ArrayB nesne2;
    nesne1.setBoyut(size);
    nesne2.setBoyut(size);

    nesne1.Eleman_Al();
    nesne2.Eleman_Al();

    cout << endl << "Dizi 1 : " << endl;
    nesne1.Goster();

    cout << endl << "Dizi 2 : " << endl;
    nesne2.Goster();

    ArrayA toplamSonuc = nesne1 + nesne2;
    cout << endl << "Birinci dizinin elemanlari + ikinci dizinin elemanlari: " << endl;
    toplamSonuc.Goster();


    ArrayB farkSonuc = nesne2 - nesne1;
    cout << endl << "Ikinci dizinin elemanlari - birinci dizinin elemanlari: " << endl;
    farkSonuc.Goster();  

    return 0;
}