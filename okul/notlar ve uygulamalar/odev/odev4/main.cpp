#include <iostream>
using namespace std;

class personType {
    private:
        string firstN;
        string lastN;
        int age;

    public:
        void print() {
            cout << "Employee's name: " << firstN << " " << lastN;
        }

        void setName(string first, string last) {
            firstN = first;
            lastN = last;
        }

        void setAge(int a){
            age = a;
        }

        int getAge(){
            return age;
        }

        personType(string first, string last, int age){
            firstN = first;
            lastN = last;
            this->age = age;
        }

        personType(){
            firstN = " ";
            lastN = " ";
            age = 18; 
        } 
};

class partTimeEmployee : public personType {
    public:
        void print();
        double calculatePay();
        void setNameRateHours(string first, string last, int age, double rate, double hours);
        partTimeEmployee(string first, string last, int age, double rate, double hours);
        partTimeEmployee();

        double getHoursWorked() {
            return hoursWorked;
        }

        double getPayRate() {
            return payRate;
        }

    private:
        double payRate;
        double hoursWorked;
    };

    void partTimeEmployee::print() {
        personType::print(); 
        cout << ", Age: " << getAge();
        cout << ", Pay Rate: " << payRate;
        cout << ", Hours Worked: " << hoursWorked;
        cout << ", Total Wages: " << calculatePay() << endl;
}

double partTimeEmployee::calculatePay() {
    return (payRate * hoursWorked);
}

void partTimeEmployee::setNameRateHours(string first, string last, int age, double rate, double hours) {
    personType::setName(first, last);
    personType::setAge(age);
    payRate = rate;
    hoursWorked = hours;
}

partTimeEmployee::partTimeEmployee(string first, string last, int age, double rate, double hours) : personType(first, last, age) {
    payRate = rate;
    hoursWorked = hours;
}

partTimeEmployee::partTimeEmployee() : personType("", "", 18) {
    payRate = 0;
    hoursWorked = 0;
}

int main() {
    string first, last;
    double rate, hours;
    int age;

    cout << "Enter employee's first name: ";
    cin >> first;
    cout << "Enter employee's last name: ";
    cin >> last;
    cout << "Enter employee's age: ";
    cin >> age;
    cout << "Enter hourly pay rate: ";
    cin >> rate;
    cout << "Enter hours worked: ";
    cin >> hours;

    partTimeEmployee employee(first, last, age, rate, hours);
    employee.print();
    employee.setNameRateHours("Test1", "Test2", 20, 10.0, 5.2);
    employee.print(); 


    partTimeEmployee employee2("John", "Doe", 30, 10.0, 2.5);
    employee2.print();



    return 0;
}
