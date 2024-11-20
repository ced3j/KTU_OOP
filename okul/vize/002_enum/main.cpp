#include <iostream>
using namespace std;

int main(){
    
    enum Gunler{
        Pazartesi,
        Sali,
        Carsamba,
        Persembe,
        Cuma
    };

    Gunler bugun = Carsamba;

    if(bugun == Carsamba){
        cout << "Bugun Carsamba!" << endl;
    }



    /// -------------------

    enum Aylar{
        Mart = 3,
        Mayis = 5,
        Nisan = 4,
        Aralik = 12
    };


    Aylar buAy = Mart;
    cout << Mart << endl;  // 3 yazdırır

    


    return 0;
}