#include <iostream>
using namespace std;

class Author{
    private:
        string name;
        string dogumYil;

    public:

        Author(string n, string d) : name(n), dogumYil(d){}
        void showDetails(){
            cout << "Yazar adi: " << name << endl;
            cout << "Yazar dogum: " << dogumYil << endl;
        }
};

class Book{
    private:
        string name;
        string basim;
        Author yazar;

    public:
    Book(string n, string b, string y, string d) : name(n), basim(b), yazar(y, d) {}
        void showDetails(){
            cout << "Kitap adi: " << name << endl;
            cout << "Kitap basim yili: " << basim << endl;
            yazar.showDetails();
        }

};


int main(){
    Book kitap1("Okumak", "1994", "Altay", "1972");
    kitap1.showDetails();

    return 0;
}