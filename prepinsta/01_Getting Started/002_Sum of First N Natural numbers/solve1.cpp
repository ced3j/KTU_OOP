#include <iostream>

int main(){
    int num, sum = 0;
    std::cout << "Bir sayi gir: ";
    std::cin >> num;

    for(size_t i = 0; i <= num; i++){
        sum += i;
    }

    std::cout << "Sum: " << sum << std::endl;

    return 0;
}