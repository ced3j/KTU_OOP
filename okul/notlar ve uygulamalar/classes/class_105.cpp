#include <iostream>
using namespace std;

class Heat{
    private:
        double salary;
        string name;
        string department;
    
    public:
        Heat(): salary(0.0), name("Undefined"), department("Undefined"){}
        Heat(double s, string n, string d): salary(s), name(n), department(d){}

        void displayInfo();
        string getName();
        void setName(string n);
        void setSalary(double s);
        double getSalary();
        
        void setDepartment(string d);
        string getDepartment();

};


void Heat::displayInfo(){
    cout << "--------- INFO ---------" << endl;
    cout << "Name: " << name << endl;
    cout << "Department: " << department << endl;
    cout << "Salary: " << salary << endl;
}


void Heat::setSalary(double s){
    salary = s;
}

double Heat::getSalary(){
    return salary;
}

void Heat::setName(string n){
    name = n;
}

string Heat::getName(){
    return name;
}

void Heat::setDepartment(string d){
    department = d;
}

string Heat::getDepartment(){
    return department;
}


int main(){

    Heat employee1;

    employee1.displayInfo();

    Heat employee2(5000.0, "John", "CompSci");
    employee2.displayInfo();


    cout << endl;
    cout << endl;

    employee1.setSalary(10000);
    employee1.setName("Ahmet");
    cout << employee1.getName() << "'s new salary: " << employee1.getSalary() <<  endl;



    return 0;
}