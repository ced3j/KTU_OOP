#include <iostream>
using namespace std;

class Test {
private:
    int id;
public:
    Test(int i) : id(i) {
        cout << "Object " << id << " constructor runs" << endl;
    }
    ~Test() {
        cout << "Object " << id << " destructor runs" << endl;
    }
};

int main() {
    Test obj1(1);          // Object 1 oluşturuluyor
    {
        Test obj2(2);      // Object 2 oluşturuluyor (yerel scope)
        Test obj3(3);      // Object 3 oluşturuluyor (yerel scope)
        Test obj4(4);      // Object 4 oluşturuluyor
        Test obj5(5);      // Object 5 oluşturuluyor
        Test obj6(6);      // Object 6 oluşturuluyor
    } // Scope bitiyor, obj2, obj3, obj4, obj5, obj6 destructor çağrılıyor
    return 0;             // obj1 destructor çağrılıyor
}
