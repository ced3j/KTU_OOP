// Array işlemleri


#include <iostream>
using namespace std;


void printArr(int dizi[], int size){
    for(int i = 0; i < size; i++){
        cout << dizi[i] << endl;
    }
}


void reverseArray(int dizi[], int size){
    int start = 0;
    int end = size-1;

    while(start < end){
        int temp = dizi[start];
        dizi[start] = dizi[end];
        dizi[end] = temp;
        start++;
        end--;
    }
}


void bubbleSort(int dizi[], int size){
    for(int i = 0; i < size - 1; i++){
        for(int j = 0; j < size -i -1; j++){
            if(dizi[j] > dizi[j+1]){
                int temp = dizi[j];
                dizi[j] = dizi[j + 1];
                dizi[j + 1] = temp;
            }
        }
    }
}



int main(){
    int dizi[] = {11,22,35,4,65,68,6};
    int size = sizeof(dizi)/sizeof(*dizi);

    reverseArray(dizi, size);
    printArr(dizi, size);

    bubbleSort(dizi, size);
    printArr(dizi, size);



    return 0;
}