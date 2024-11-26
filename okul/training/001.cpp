#include <iostream>
using namespace std;


class Student{
    private:
        char* name;
        int* grades;
        int gradeCount;

    public:

        Student(const char* studentName, int numberOfGrades){
            int length = 0;
            while(studentName[length] != '\0'){
                length++;
            }


            name = new char[length + 1]; 
            for(int i = 0; i <= length; i++){
                name[i] = studentName[i];
            }

            gradeCount = numberOfGrades;
            grades = new int[gradeCount];


            for(int i = 0; i < gradeCount; i++){
                grades[i] = 0;  // set default grade to 0
            }
        }


        ~Student(){
            delete[] name;
            delete[] grades;
        }

        void setGrade(int index, int grade){
            if(index >= 0 && index < gradeCount){
                grades[index] = grade;
            }
        }


        void printStudentInfo(){
            cout << "Student Name: " << endl;
            for(int i = 0; name[i] != '\0'; i++){
                cout << name[i];
            }

            cout << endl;

            cout << "Grades: ";

            for(int i = 0; i < gradeCount; i++){
                cout << grades[i] << " ";
            }
            cout << endl;
        }
};



int main(){

    Student student("John Doe", 5);
    student.setGrade(0,85);
    student.setGrade(1,53);
    student.setGrade(2,64);
    student.setGrade(3,16);
    student.setGrade(4,77);

    student.printStudentInfo();
    

    return 0;
}