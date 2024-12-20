#include <iostream>
using namespace std;


template<typename T = int>
class DefaultBox{
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

int main(){

    DefaultBox<> box; // <> içini boş bıraktık ama yukarıda zaten int yazmıştık, default tip = int
    box.setValue(52);
    cout << "Default box value: " << box.getValue() << endl;

    DefaultBox<double> doubleBox; // Bu sefer default olarak int'i kullanmadık double tipini gönderdik
    doubleBox.setValue(3.14);
    cout << "Double box value: " << doubleBox.getValue() << endl;     
    return 0;
}