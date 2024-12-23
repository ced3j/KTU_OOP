/*

Polimorfizm, bir nesnenin farklı biçimlerde davranabilmesi anlamına gelir. Bu, genellikle bir temel 
sınıfın (base class) sanal bir metodunun alt sınıflar (derived class) 
tarafından geçersiz kılınmasıyla gerçekleştirilir. 
Polimorfizm, aynı arayüzle farklı davranışlar sergilemek için kullanılır.

*/

#include <iostream>
using namespace std;

class Animal{
    public:
        virtual void makeSound() const{
            cout << "Animal makes a sound!" << endl;
        }

        virtual ~Animal(){} // sanal destructor
};


class Dog : public Animal{
    public:
        void makeSound() const override{
            cout << "Hav hav!" << endl; 
        }
};

class Cat : public Animal{
    public:
        void makeSound() const override{
            cout << "Miyav!" << endl;
        }
};


int main(){
    Animal* animalArr[2];
    animalArr[0] = new Dog();
    animalArr[1] = new Cat();


    for(int i = 0; i < 2; i++){
        animalArr[i]->makeSound();
        delete animalArr[i];
    }

    return 0;
}