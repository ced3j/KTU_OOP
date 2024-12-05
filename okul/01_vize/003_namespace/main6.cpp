// static nedir?

/*

Bir fonksiyon içinde tanımlanan static değişkenler, fonksiyon her 
çağrıldığında aynı değeri korur ve sadece bir kez bellekte oluşturulur. 
Hayatta kalma süresi programın ömrü boyunca devam eder.


*/

#include <iostream>
using namespace std;

void counterFunction() {
    static int counter = 0; // Statik yerel değişken
    counter++;
    cout << "Counter: " << counter << endl;
}

int main() {
    counterFunction(); // 1
    counterFunction(); // 2
    counterFunction(); // 3
    return 0;
}

/*


Counter: 1
Counter: 2
Counter: 3

*/