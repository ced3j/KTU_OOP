// inheritance, public, private, protected
// composition

/*



#include <iostream>
using namespace std;


class Animal{
    public:
        void eat(){
            cout << "This animal eats food." << endl;
        }
};

class Dog : public Animal{
    public:
        void bark(){
            cout << "The dog barks." << endl;
        }
};



int main(){
    
    Dog myDog;
    myDog.eat(); // Dog classında eat fonksiyonu yok fakat 
                 // Dog - Animal'dan kalıtıldı dolayısıyla ondaki özelliklere sahip
    myDog.bark();  

    

    return 0;
}


*/



#include <iostream>
using namespace std;


class Person{
    private: // // Sadece bu sınıf erişebilir
        string name;
    protected: // Türetilmiş sınıflar erişebilir
        int age;
    public:
        void setName(string personName){
            name = personName;
        }

        string getName(){
            return name;
        }
};


// Türetilmiş sınıf sadece protected ve public öğelere erişebilir
/*

Student sınıfı name değişkenine doğrudan erişemez.
Ancak, Person sınıfının public bir fonksiyonunu 
çağırarak dolaylı yoldan (name değişkenine) erişebilir.

*/
class Student : public Person{
    public:
        void setAge(int studentAge){
            age = studentAge;
        }

        void displayInfo(){
            cout << "Name: " << getName() << ", Age: " << age << endl;
        }
};


int main(){
    Student stud1;
    
    stud1.setName("Ahmet");
    stud1.setAge(20);
    stud1.displayInfo();


    return 0;
}