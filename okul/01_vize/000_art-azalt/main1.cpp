#include <iostream>
using namespace std;


void modifyValues(int &x, int &y){
    x++;
    y--;
    cout << "Fonksiyondan sonra: " << x << "--" << y << endl;
}


int main(){
    int x = 5, y = 5;
    cout << "x: " << x++ << " - Postfix" << endl;
    cout << "x yeni: " << x << endl;
    cout << "y: " << ++y << endl;

    modifyValues(x,y);

    cout << "x: " << x << endl;
    cout << "y: " << y << endl;

    return 0;
}