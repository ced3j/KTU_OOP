// Pointer ile pozitif veya negatif sayı kontrolü


#include <iostream>
using namespace std;


void checkPositiveNegative(int* num);


int main(){
    int num;
    cout << "Please enter a number: " << endl;
    cin >> num;

    checkPositiveNegative(&num);

    return 0;
}

void checkPositiveNegative(int* num){
    if(*num > 0){
        cout << *num << " is a positive number" << endl;
    }else if(*num < 0){
        cout << *num << " is a negative number" << endl;
    }else{
        cout << *num << " is zero" << endl;
    }
}



