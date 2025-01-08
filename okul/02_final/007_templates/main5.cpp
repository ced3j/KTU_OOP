#include <iostream>
using namespace std;



template <typename TESTETMEKISTERIM>
TESTETMEKISTERIM sum(TESTETMEKISTERIM a, TESTETMEKISTERIM b){
    return a + b;
}

int main(){

    int toplam1 = sum(10, 20);
    double toplam2 = sum(25.2, 10.5);


    cout << "Toplam1: " << toplam1 << endl;
    cout << "Toplam2: " << toplam2 << endl;


    return 0;
}