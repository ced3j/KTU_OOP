// Enum ve pointerlar

/*



#include <iostream>
using namespace std;


enum Renk {
    Kirmizi,
    Yesil,
    Mavi
};


int main(){
    Renk r = Yesil;
    Renk* pRenk = &r;

    cout << "Renk: " << *pRenk << endl; 
    return 0;
}


*/




#include <iostream>
using namespace std;

enum Renk {
    Kirmizi,
    Yesil,
    Mavi
};

void renkYazdir(Renk renk) {
    switch (renk) {
        case Kirmizi:
            cout << "Renk: Kırmızı" << endl;
            break;
        case Yesil:
            cout << "Renk: Yeşil" << endl;
            break;
        case Mavi:
            cout << "Renk: Mavi" << endl;
            break;
    }
}

int main() {
    renkYazdir(Kirmizi); // "Renk: Kırmızı" yazdırır
    renkYazdir(Mavi);     // "Renk: Mavi" yazdırır

    return 0;
}

