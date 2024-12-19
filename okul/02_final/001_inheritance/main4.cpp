#include <iostream>
using namespace std;

class Employee{
    private:
        string name;

    public:
        Employee(string name = "default") : name(name){}
        void displayInfo(){
            cout << "Name: " << this->name << endl;
        }
};


class Manager : public Employee{
    private:
        int teamSize;

    public:
        Manager(string name = "default", int team = 0) : Employee(name), teamSize(team){}

        void displayInfo(){
            Employee::displayInfo();
            cout << "Team size: " << teamSize << endl;
        }
};

int main(){

    Manager m1("Ahmet", 5);
    m1.displayInfo();


    return 0;
}