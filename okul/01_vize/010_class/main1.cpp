#include <iostream>
using namespace std;

class Student{
    public:
        string name;
        int age;

        void introduce(){
            cout << "Merhaba benim adim: " << name << endl;
        }
};

int main(){
    Student student1;
    student1.name = "Ali";
    student1.age = 15;
    student1.introduce();

    return 0;
}