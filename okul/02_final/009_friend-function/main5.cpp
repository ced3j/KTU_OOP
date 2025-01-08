#include <iostream>
using namespace std;


class Animal{
    private:
        string name;

    public:
        Animal(const string& n) : name(n) {}

        friend void showName(Animal a);
};



class Dog : public Animal{
    private: 
        int year;

    public:
        Dog(const string& n, const int& y) : Animal(n), year(y){}

};



class Cat : public Dog{
    public:
        Cat(const string& n, const int& y) : Dog(n, y){}
};



void showName(Animal a){
    cout << a.name << endl;
}



int main(){
    Dog kopek("Yesil", 10);
    Cat kediy("Mor", 4);
    Cat* yeniKediy = new Cat("Mavi", 3);


    showName(kopek);
    showName(kediy);
    showName(*yeniKediy);



    return 0;
}