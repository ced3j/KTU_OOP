/*

Erişim Türü	         Kendi    Sınıfı	Türetilmiş Sınıflar	Dış Kod
public	               ✔	    ✔	                ✔
protected	           ✔	    ✔	               ❌
private	               ✔	   ❌	              ❌


 */


#include <iostream>
using namespace std;


class Person{
    private:
        string name;
        int age;
    
    public:
        void setName(const string& newName){
            name = newName;
        }


        void setAge(const int& newAge){
            age = newAge;
        }

        string getName(){
            return name;
        }

        int getAge(){
            return age;
        }

        void displayInfo(){
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
        }
};



int main(){
    Person person;

    person.setName("Ahmet");
    person.setAge(21);


    person.displayInfo();


    return 0;
}