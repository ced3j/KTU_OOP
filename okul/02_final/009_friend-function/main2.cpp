#include <iostream>
using namespace std;

class B; // ileriye dönük bildirim

class A{
    private:
        int valueA;
    public:
        A(int v): valueA(v){}

        friend void printSum(const A& a, const B& b);
};

class B{
    private:
        int valueB;

    public:
        B(int v) : valueB(v){}

        friend void printSum(const A& a, const B& b);
};


// friend function tanımı
void printSum(const A& a, const B& b){
    cout << "Sum: " << (a.valueA + b.valueB) << endl;
}

int main(){
    A objA(10);
    B objB(20);
    
    // iki sınıfın özel üyelerine friend function ile erişim
    printSum(objA, objB);

    return 0;
}