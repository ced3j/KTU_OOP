// Function overloading

#include <iostream>
using namespace std;

class Calculator{
    public: 

        int add(int a, int b){
            return a + b;
        }

        double add(double a, double b){
            return a + b;
        }
};

int main(){
    Calculator calc;
    
    cout << "int toplama: " << calc.add(3, 5) << endl;
    cout << "double toplama: " << calc.add(4.1, 55.1) << endl;

    return 0;
}