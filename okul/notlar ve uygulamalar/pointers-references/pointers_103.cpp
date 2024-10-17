// iki sayıdan en büyük olanı pointer ile bulalım

#include <iostream>
using namespace std;

void findGreatest(int* num1, int* num2);

int main(){
    int arr[] = {30,23,12,35,41,53,6,71,85,32};
    int size = sizeof(arr)/sizeof(arr[0]);

    for(size_t i = 0; i < size-1; i++){
        findGreatest(&arr[i], &arr[i+1]);
    }

    return 0;
}

void findGreatest(int* num1, int* num2){
    if(*num1 > *num2){
        cout << *num1 << " > " << *num2 << endl; 
    }else{
        cout << *num1 << " < " << *num2 << endl;
    }
}