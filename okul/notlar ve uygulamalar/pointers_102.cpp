// Bir sayı çift mi tek mi bulalım

#include <iostream>
using namespace std;


void checkEvenOdd(int* num);


int main(){
    int arr[] = {0,1,2,3,4,5,6,7,8,9,10};
    
    for(size_t i = 0; i < sizeof(arr)/sizeof(arr[0]); i++){
        checkEvenOdd(&(arr[i]));
    }


    return 0;
}


void checkEvenOdd(int* num){
    if(*num % 2 == 0){
        cout << *num << " cift sayi\n";
    }else{
        cout << *num << " tek sayi\n";
    }
}
