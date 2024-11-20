// namespace kavramı

/*

İsim Çakışmalarını Önler: Farklı kod parçalarında aynı isimde değişken veya fonksiyon varsa, 
namespace kullanarak bu isimlerin birbirine karışmasını engelleyebiliriz.
Kod Düzenini Sağlar: Kodunuzu namespace’ler içinde gruplandırarak 
daha düzenli bir hale getirebilirsiniz.


*/

#include <iostream>
using namespace std;

namespace Matematik{
    
    int topla(int a, int b){
        return a+b;
    }

    int carp(int a, int b){
        return a*b;
    }

    void printThis(){
        cout << "Hello World" << endl;
    }

    void printVariables(int a, int b){
        cout << "Carpim: " << a << endl;
        cout << "Toplam: " << b << endl;
    }
}

namespace printIslemleri{
    void bunuYazdir(){
        cout << "Hello World 2" << endl;
    }
}


namespace disAlan{
    namespace icAlan{
        void katmanliNamespace(){
            cout << "ic ice gecmis namespace yazdirma" << endl;
        }
    }
}

int main() {
    int carpimSonuc = Matematik::carp(10,20);
    int toplamSonuc = Matematik::topla(10,20);

    Matematik::printVariables(carpimSonuc, toplamSonuc);

    Matematik::printThis();




    using namespace printIslemleri;
    bunuYazdir();   // using sayesinde direkt olarak printIslemleri isim uzayına eriştim

    disAlan::icAlan::katmanliNamespace();

    return 0;
}
