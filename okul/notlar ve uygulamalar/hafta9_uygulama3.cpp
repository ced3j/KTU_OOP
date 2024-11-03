/*
###################   ENUM GIRIS  ###################



#include <iostream>
using namespace std;

enum Gun{
    Pazartesi,
    Sali,
    Carsamba,
    Persembe,
    Cuma,
    Cumartesi,
    Pazar
};


int main(){
    Gun bugun = Sali;

    if(bugun == Sali){
        cout << "Bugun Sali!" << endl;
    }
    
    return 0;
}

*/




/*


#include <iostream>
using namespace std;


enum Renk {KIRMIZI, YESIL, MAVI};

int main(){

    Renk favoriRenk = YESIL;

    switch(favoriRenk){
        case KIRMIZI:
            cout << "Favori renk: kirmizi" << endl;
            break;
        case YESIL:
            cout << "Favori renk: yesil" << endl;
            break;
        case MAVI:
            cout << "Favori renk: mavi" << endl;
            break;
    }

    return 0;
}



*/




#include <iostream>
using namespace std;


enum Gun{
    Pazartesi,          //      0
    Sali,           //      1
    Carsamba,           //      2
    Persembe,           //      3
    Cuma,           //      4
    Cumartesi,          //      5
    Pazar,          //      6
    GunSayisi //  7    Gün sayısını belirlemek için
};

int main(){
    // etkinlikler adında bir string dizisi ve GunSayisi da 7. indiste olduğu için değeri 7dir
    string etkinlikler[GunSayisi] = {
        "Ders calis",   
        "Yuruyus",  
        "Boks", 
        "Kodlama",  
        "Kitap oku",    
        "BJJ",  
        "Kur'an oku"    
    };

    cout << "Cumartesi etkinligi: " << etkinlikler[Cumartesi] << endl;
    return 0;
}