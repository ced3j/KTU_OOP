#include <iostream>
using namespace std;


int* resizeArray(int* oldArray, int oldSize, int newSize){
    int* newArray = new int[newSize];

    for(int i = 0; i < oldSize; i++){
        newArray[i] = oldArray[i];
    }

    delete[] oldArray;

    return newArray;
}



int main(){
    int size = 3;

    int* arr = new int[size] {1, 2, 3};

    cout << "Original Array: ";

    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }

    cout << endl;


    int newSize = 5;
    arr = resizeArray(arr, size, newSize);

    arr[3] = 4;
    arr[4] = 5;

    cout << "Resized array: ";

    for(int i = 0; i < newSize; i++){
        cout << arr[i] << " ";
    }

    cout << endl;

    delete[] arr;
    
    
    return 0;
}