#include <iostream>
using namespace std;

class Student{
    private:
        string name;
        int age;

    public:
        Student(){}
        Student(string studentName, int studentAge){
            name = studentName;
            age = studentAge;
        }

        string getName(){
            return name;
        }

        void setName(string newName){
            name = newName;
        }

        int getAge(){
            return age;
        }

        void setAge(int newAge){
            age = newAge;
        }

        void introduce(){
            cout << "Merhaba benim adim: " << name << endl;
            cout << "ve yasim: " << age << endl;
        }
};

int main(){

    Student student1("Ali", 20);
    student1.introduce();

    student1.setAge(10);
    student1.setName("Elif");

    cout << "sadece yas: " << student1.getAge() << endl;

    student1.introduce();

    Student* student2 = new Student("Mehmet", 25);

    Student student3;
    

    return 0;
}