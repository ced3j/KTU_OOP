#include <iostream>
using namespace std;


class Employee{
    protected:
        string name;
        string mevki;
        int empNum;

    public:
        Employee(const string& n, const string& m, const int& num) : name(n), mevki(m), empNum(num){}

        void displayInfo(){
            cout << "Isim: " << name << endl;
            cout << "Rutbe: " << mevki << endl;
            cout << "Numara: " << empNum << endl;
        }

};

class Manager: public Employee{
    public:
        Manager(const string& n, const string& m, const int& num) : Employee(n, m, num){}

        void bonusSystem(){
            cout << "Bonus" << endl;
        }
};


class Intern : public Employee{
    private:
        int calismaSuresi;

    public: 
        
        Intern(const string& n, const string& m, const int& num, int calisma) : Employee(n, m, num), calismaSuresi(calisma){}

        void isSuresi(){
            cout << "Calisma suresi: " << calismaSuresi << endl;
        }
};


int main(){
    Manager* manager = new Manager("Ahmet", "manager", 1);

    Intern* intern = new Intern("Mehmet", "intern", 2, 10);

    intern->displayInfo();
    manager->displayInfo();
    manager->bonusSystem();

    delete manager;
    delete intern;


    return 0;
}