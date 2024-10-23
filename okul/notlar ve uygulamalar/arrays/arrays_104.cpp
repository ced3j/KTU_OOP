#include <iostream>
using namespace std;
#define SIZEOF(arr) sizeof(arr)/sizeof(*arr)

void ortakElemanBul(int arr1[], int arr2[], int sizeArr1, int sizeArr2, int commonArr[], int& commonSize){
    commonSize = 0;
    

    for(int i = 0; i < sizeArr1; i++){
        for(int j = 0; j < sizeArr2; j++){
            if(arr1[i] == arr2[j]){
                commonArr[commonSize] = arr1[i];
                commonSize++;
            }
        }
    }

    
}



int main(){
    int arr1[] = {1,2,3,4,5,6};
    int arr2[] = {2,3,4,5,6};
    
    int ortakArr[5];
    int CommonSize = 0;

    int sizeArr1 = SIZEOF(arr1);
    int sizeArr2 = SIZEOF(arr2);

    ortakElemanBul(arr1, arr2, sizeArr1, sizeArr2, ortakArr, CommonSize);

    for(int i = 0; i < 5; i++){
        cout << ortakArr[i] << endl;
    }
    
    return 0;
}