// 1221 - Palindrome

#include <iostream>
using namespace std;


int usAl(int x){
    int result = 1;

    if(x == 1){
        return 1;
    }

    for(int i = 1; i < x; i++){
        result *= 10;
        
    }

    return result;
}



int main(){

    int number = 3456;
    int reversed = 0;
    int copyNum = number;
    int length = 0;

    while(copyNum != 0){
        copyNum /= 10;
        length++;
    }

    copyNum = number;

    while(copyNum != 0){
        int digit = copyNum % 10;
        copyNum /= 10;
        reversed += digit * usAl(length--);
        
    }

    cout << reversed << endl;

    if(number == reversed){
        cout << "The number is palindrome" << endl;
    }else{
        cout << "The number is not palindrome" << endl; 
    }

    return 0;
}