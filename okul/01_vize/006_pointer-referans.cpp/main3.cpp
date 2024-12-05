#include <iostream>
using namespace std;


void modifyValues(int* ptr, int& ref){
    *ptr = 50;
    ref = 100;
}

int main(){
    int a = 10, b = 20;

    cout << "a'nin degeri: " << a << "- b'nin degeri: " << b << endl;

    modifyValues(&a, b);
    
    cout << "a'nin yeni degeri: " << a << "- b'nin yeni degeri: " << b << endl;

    return 0;
}