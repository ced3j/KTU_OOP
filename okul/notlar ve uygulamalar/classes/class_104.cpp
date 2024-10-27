#include <iostream>
using namespace std;

class Employee { 
private:
    string name;
    double salaries[12];
    int monthCount;

public:
    Employee(string name) {
        this->name = name;
        monthCount = 0;
    }

    void addSalary(double salary);
    double calculateAnnualSalary();
    void printEmployeeInfo();
};

void Employee::addSalary(double salary) {
    if (monthCount < 12) {
        salaries[monthCount] = salary;
        monthCount++;
    }
    else {
        cout << "You can enter a maximum of 12 salaries in a year." << endl; 
    }
}

double Employee::calculateAnnualSalary() {
    double total = 0; 
    for (int i = 0; i < monthCount; i++) {
        total += salaries[i];
    }

    return total; 
}

void Employee::printEmployeeInfo() {
    cout << "Name: " << this->name << endl;
    cout << "Salaries: " << endl;
    for (int i = 0; i < monthCount; i++) {
        cout << salaries[i] << endl;
    }

    cout << "Total annual salary: " << calculateAnnualSalary() << endl; 
}

int main() {
    Employee employee1("Mehmet");

    employee1.addSalary(2500.0);
    employee1.addSalary(2600.0);
    employee1.addSalary(2700.0);
    employee1.addSalary(2800.0);

    employee1.printEmployeeInfo();

    return 0;
}
