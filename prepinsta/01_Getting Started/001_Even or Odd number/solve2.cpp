#include <iostream>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5,6,7};
    size_t size = sizeof(arr)/sizeof(arr[0]);

    for(size_t i = 0; i < size; i++){
        if(arr[i] % 2 == 0){
            cout << arr[i] << " Cift sayi\n";
        }else{
            cout << arr[i] << " Tek sayi\n";
        }
    } 

    return 0;
}