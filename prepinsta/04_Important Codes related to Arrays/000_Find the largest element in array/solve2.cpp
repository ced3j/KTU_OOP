#include <iostream>
using namespace std;


void findMax(int* arr, int size, int* max){
    *max = *arr;
    for(size_t i = 1; i < size; i++){
        if(*max < *(arr + i)){
            *max = *(arr + i);
        }
    }
}

void displayArray(int* arr, int size){
    for(size_t i = 0; i < size; i++){
        cout << *(arr + i) << endl;
    }
}

int main(){

    int arr[] = {8,9,314,34,1,125,46,23,1,631,6};
    int size = sizeof(arr)/sizeof(arr[0]);
    int max;

    findMax(arr, size, &max);
    cout << "Max : " << max;
    // pointer ile işlem yaptığımız için burda direkt max yazabiliyoruz

    cout << endl << endl << endl;
    displayArray(arr, size);

    return 0;
}