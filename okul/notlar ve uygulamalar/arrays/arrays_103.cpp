#include <iostream>
using namespace std;

void reverseArr(int arr[], int size){
    int start = 0; 
    int end = size - 1;

    while(end > start){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int main(){
    int arr[] = {1,2,3,4,5,6};
    int size = sizeof(arr)/sizeof(*arr);

    reverseArr(arr, size);

    for(int i = 0; i < size; i++){
        cout << arr[i] << endl;
    }

    return 0;
}