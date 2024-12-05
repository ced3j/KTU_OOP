#include <iostream>
using namespace std;
int main(){
    
    int a = 10;
    int b = 20;
    int &ref1 = a;
    int &ref2 = b;

    ref1 = ref2;
    ref2 += 5;

    cout << "a: " << a << endl;
    cout << "b: " << b << endl;


    return 0;
}

