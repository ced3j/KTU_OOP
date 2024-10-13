#include <iostream>

int main(){
    int num;
    std::cout << "Bir sayi gir: ";
    std::cin >> num;

    int* p;
    p = &num;

    if(*p % 2 == 0){
        std::cout << *p << " cift sayi\n"; 
    }else{
        std::cout << *p << " tek sayi\n";
    }

    delete p;
    
    return 0;
}