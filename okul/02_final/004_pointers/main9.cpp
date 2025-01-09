#include <iostream>
using namespace std;

int main(){

    int dizi[] = {1,2,3,4,5};

    int* p = dizi;
    cout << *p << endl;

    cout << *++p << endl;
    cout << *p++ << endl;
    cout << *p << endl;

    cout << *(p++) << endl;
    cout << *p << endl;

    cout << *p-- << endl;
    cout << *p << endl;


    return 0;
}