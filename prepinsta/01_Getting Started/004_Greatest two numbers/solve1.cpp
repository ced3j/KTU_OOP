#include <iostream>
using namespace std;


int main(){
    int num1 = 10, num2 = 24;
    int* ptr1 = &num1;
    int* ptr2 = &num2;

    if(*ptr1 > *ptr2){
        cout << *ptr1 << " is bigger than " << *ptr2 << "\n";
    }else{
        cout << *ptr2 << " is bigger than " << *ptr1 << "\n";
    }

    return 0;
}