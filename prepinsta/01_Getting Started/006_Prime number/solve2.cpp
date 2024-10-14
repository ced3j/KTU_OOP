#include <iostream>
using namespace std;

int main(){

    int num = 17;
    int* ptr = nullptr;
    int count = 0;
    ptr = &num;

    for(size_t i = 1; i <= *ptr; i++){
        if(*ptr % i == 0){
            count += 1;
            if(count > 2){
                break;
            }
        }
    }

    if(count == 0 || count == 1){
        cout << "The number " << num << " is not prime\n";
    }else if(count > 2){
        cout << "The number " << num << " is not prime\n";
    }else{
        cout << "The number " << num << " is prime\n";
    }
    return 0;
}