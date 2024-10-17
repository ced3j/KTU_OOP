#include <iostream>
#define SIZEOF(arr) sizeof(arr)/sizeof(*arr);

int main(){
    int arr[] = {1,2,4,352,3,532,4,23,32,32,532,632,11};
    int size = SIZEOF(arr);

    // Dinamik array
    int* newArr = new int[size];

    
    int* ptr = &arr[size-1];
    for(size_t i = 0; i < size; i++){
        newArr[i] = *ptr;
        ptr--;
    }

    
    for(size_t i = 0; i < size; i++){
        std::cout << newArr[i] << std::endl;
    }

    return 0;
}