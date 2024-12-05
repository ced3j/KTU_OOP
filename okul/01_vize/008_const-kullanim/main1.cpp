#include <iostream>
using namespace std;

int main(){
    int a = 5;
    int b = 10;
    int* const ptr = &a;
    // pointer sabittir, sadece işaret ettiği değeri değiştirebiliriz

    *ptr = 20; // bu geçerlidir çünkü işaret ettiği değer *ptr

    

    return 0;
}