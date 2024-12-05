#include <iostream>
using namespace std;


struct Student{
    string name;
    int age;
    double grade;
};


void printStudentInfo(const Student& student){
    cout << "Ogrencinin adi: " << student.name << endl;
    cout << "Ogrencinin yasi: " << student.age << endl;
    cout << "Ogrencinin notu: " << student.grade << endl;
}

int main(){

    Student student1;
    student1.name = "Ferhat";
    student1.age = 7;
    student1.grade = 87.12;


    cout << "Ogrencinin adi: " << student1.name << endl;
    cout << "Ogrencinin yasi: " << student1.age << endl;
    cout << "Ogrencinin notu: " << student1.grade << endl;


    Student student2;
    student2.name = "Betel";
    student2.age = 15;
    student2.grade = 90.0;

    printStudentInfo(student2);

    Student student3 = {"Ahmet", 10, 92.4};
    printStudentInfo(student3);


    return 0;
}