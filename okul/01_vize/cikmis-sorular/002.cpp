/*

1. Tek bir constructor hangi durumda birden çok sayıda constructor gibi işlev görebilir?
Bir constructor, default argument kullanılarak farklı parametre kombinasyonlarını destekleyecek şekilde tasarlanabilir. Bu sayede birden fazla constructor yazmak yerine tek bir constructor, birçok durumu yönetebilir.

*/

#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int age;

public:
    // Tek constructor, farklı parametre kombinasyonlarını destekler
    Student(string n = "Unknown", int a = 0) : name(n), age(a) {}

    void display() const {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    Student s1;               // Default değerlerle
    Student s2("Ali");        // Sadece isim verildi
    Student s3("Ahmet", 21);  // Hem isim hem yaş verildi

    s1.display();
    s2.display();
    s3.display();

    return 0;
}
