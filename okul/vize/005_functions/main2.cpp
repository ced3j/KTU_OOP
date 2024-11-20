#include <iostream>
using namespace std;

// eğer c parametresine kullanıcı bi şey girmezse varsayılan değeri = 10
int add(int a, int b, int c = 10){
    return a + b + c;
}

int main(){

    cout << add(10,20) << endl;
    cout << add(5,10,15) << endl;

    return 0;
}


