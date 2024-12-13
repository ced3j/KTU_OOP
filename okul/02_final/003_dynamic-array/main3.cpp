#include <iostream>
using namespace std;


int main(){
    int size;
    cout << "Bir dizi boyutu gir: " << endl;
    cin >> size;

    int* dizi = new int[size];

    cout << "Diziye eleman atayin: " << endl;
    for(int i = 0; i < size; i++){
        cin >> dizi[i];
    }

    int enB = dizi[0];
    int enK = dizi[0];

    for(int i = 0; i < size; i++){
        if(dizi[i] < enK){
            enK = dizi[i];
        }

        if(dizi[i] > enB){
            enB = dizi[i];
        }
    }

    cout << "Min element: " << enK << endl;
    cout << "Max element: " << enB << endl;

    delete[] dizi;

    return 0;
}