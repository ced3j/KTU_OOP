// Hafta 8 için örnek

#include <iostream>
using namespace std;

class quiz{
    public:
        quiz(string);
        string DersAdiAl() const;
        void MesajGoruntule() const;
        void OrtalamaBul() const;

    private:
        string dersAdi;

};


int main(){
    quiz obj1("OOP");
    obj1.DersAdiAl();
    obj1.MesajGoruntule();
    obj1.OrtalamaBul();

    return 0;
}




quiz::quiz(string name){
    dersAdi = name;
}

string quiz::DersAdiAl() const{
    return dersAdi;
}

void quiz::MesajGoruntule() const{
    cout << DersAdiAl() << " dersi icin notlar: " << endl;
}

void quiz::OrtalamaBul() const{
    int toplam = 0;
    int sayac = 1;
    while(sayac <= 10){
        cout << "Notu giriniz: " << endl;
        int quizNotu;
        cin >> quizNotu;
        toplam = toplam + quizNotu;
        sayac += 1;
    }
    
    int ortalama = toplam / 10;
    cout << "Girilen 10 notun toplami : " << toplam << endl;
    cout << "Sinif not ortalamasi : " << ortalama << endl;
}