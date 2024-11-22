/*

2. Member initializer kullanımına nerelerde ihtiyaç duyulur?
Member initializer list genellikle şu durumlarda kullanılır:

Const veya reference veri üyelerine değer atamak için (çünkü bunlara sadece ilk oluşturulduklarında değer atanabilir).
Base class constructor'larını çağırmak için.
Performans açısından (initializer list, doğrudan nesne oluşturur; atama yapmaz).



*/


#include <iostream>
using namespace std;

class Example {
private:
    const int constantValue;
    int &referenceValue;

public:
    // Member initializer list kullanımı
    Example(int c, int &r) : constantValue(c), referenceValue(r) {}

    void display() const {
        cout << "Constant: " << constantValue << ", Reference: " << referenceValue << endl;
    }
};

int main() {
    int x = 42;
    Example ex(10, x);
    ex.display();
    return 0;
}
