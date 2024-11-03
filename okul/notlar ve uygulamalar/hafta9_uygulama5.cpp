#include <iostream>
using namespace std;


class TrafikIsik{

    public:
        enum Durum{
            Kirmizi,
            Sari,
            Yesil
        };

        TrafikIsik(Durum baslangicDurumu) : mevcutDurum(baslangicDurumu){}
            
            void durumDegistir(){
                switch(mevcutDurum){
                    case Kirmizi:
                        mevcutDurum = Yesil;
                        break;
                    case Yesil:
                        mevcutDurum = Sari;
                        break;
                    case Sari:
                        mevcutDurum = Kirmizi;
                        break;
                }
            }

            void durumYazdir() {
                switch (mevcutDurum) {
                    case Kirmizi:
                        cout << "Kirmizi isik!" << endl;
                        break;
                    case Sari:
                        cout << "Sari isik!" << endl;
                        break;
                    case Yesil:
                        cout << "Yeşil isik!" << endl;
                        break;
                }
            }
        

    private:
        Durum mevcutDurum;

};



int main(){
    TrafikIsik isik(TrafikIsik::Kirmizi);
    isik.durumYazdir();

    isik.durumDegistir();
    isik.durumYazdir();
    return 0;
}