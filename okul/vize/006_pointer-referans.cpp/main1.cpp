#include <iostream>
using namespace std;



// parametresine adres gönderilmeli
void changeValue(int* p){ 
    *p = 20; // p'nin işaret ettiği yerin değerini değiştirdik
}

int main(){
    int a = 5;
    int* ptr = &a; // ptr, a'nın adresini tutuyor
    cout << "a'nin degeri: " << a << endl;

    *ptr = 10;

    cout << "a'nin yeni degeri: " << a << endl;


    // *********************************


    int x = 5;
    cout << "x'in degeri: " << x << endl;
    changeValue(&x);
    cout << "x'in degeri: " << x << endl;

    return 0;
}