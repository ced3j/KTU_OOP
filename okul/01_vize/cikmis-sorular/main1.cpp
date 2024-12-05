#include <iostream>
#include <string>
using namespace std;

void add(int& a, int& b, int& result) {
    result = a + b;
}

int main(){
    int a = 10;
    int b = 20;
    int result;

    add(a, b, result);
    cout << a << endl;
    cout << b << endl;
    cout << result << endl;
    return 0;    
}