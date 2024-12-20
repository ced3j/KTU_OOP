/*

template <typename T = int>
class Sample {
    // Varsayılan tür int olarak kabul edilir.
};






Birden fazla tür kullanılabilir

    template <typename T1, typename T2>
    class Pair {
        T1 first;
        T2 second;
    };


*/


#include <iostream>
using namespace std;


template <typename T>
class Box{
    private:
        T value;
    public:
        void setValue(T v){
            value = v;
        }

        T getValue(){
            return value;
        }
};



template <typename T>
T add(T a, T b){
    return a + b;
}


int main(){
    cout << add(5, 3) << endl;
    cout << add(2.5, 1.5) << endl;


    Box<int> intBox;
    intBox.setValue(10);

    cout << "Integer: " << intBox.getValue() << endl;

    Box<double> doubleBox;
    doubleBox.setValue(3.14);
    cout << "Double: " << doubleBox.getValue() << endl;

    return 0;
}