// Fonksiyon overloading
// üstüne yazma

#include <iostream>
using namespace std;

namespace yazdir{
    void print(int value){
        cout << "Tam sayi: " << value << endl;
    }

    void print(double value){
        cout << "Ondalik sayi: " << value << endl;
    }

    void print(string value){
        cout << "Metin: " << value << endl;
    }

    int turCevirici(char value){
        return static_cast<int>(value);
    }
}


int main(){
    yazdir::print(10);
    yazdir::print(10.5);
    yazdir::print("Merabayin World!");

    cout << yazdir::turCevirici('A') << endl;


    return 0;
}