#include <iostream>
#include <string>

using namespace std;


class Student{
    private:
        string name;
        int age;
        double gpa;

    public:
        Student(){
            name = "Unknown";
            age = 0;
            gpa = 0.0;
            cout << "Default constructor called for : " << this->name << endl;
        }

        Student(const string& name){
            this->name = name;
            this->age = 0;
            this->gpa = 0;
        }

        Student(const string& name, int age, double gpa){
            this->name = name;
            this->age = age;
            this->gpa = gpa;
            cout << "Parameterized constructor called for: " << this->name << endl;
        }

        ~Student(){
            cout << "Destructor called for: " << this->name << endl;
        }


        // const anahtar kelimesi, fonksiyonun aldığı parametreyi 
        // değiştirmeyeceğini garanti eder.

        void setName(const string& name){
            this->name = name;
        }
        /*Burada, name parametresi bir referanstır. Eğer bu bir 
        referans olmasaydı, her çağrıldığında string kopyalanacaktı. 
        Büyük bir string için bu, performans kaybına yol açardı.*/


        int getAge() const{
            return this->age;
        }

        void setAge(const int& age){
            this->age = age;
        }

        double getGpa() const{
            return this->gpa;
        }

        void setGpa(double gpa){
            this->gpa = gpa;
        }

        void displayInfo() const {
            cout << "Student Name: " << this->name << endl;
            cout << "Age: " << this->age << endl;
            cout << "GPA: " << this->gpa << endl;
        }
        
};

int main(){

    Student student1;
    student1.displayInfo();

    Student student2("Ali", 20, 3.5);
    student2.displayInfo();

    student1.setName("Ayse");
    student1.setAge(22);
    student1.setGpa(3.2);
    student1.displayInfo();

    Student* student3 = new Student("Mehmet");
    student3->displayInfo();


    return 0;
}