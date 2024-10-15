#include <iostream>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5,6,124,53,3,16,7,84};
    int size = sizeof(arr)/sizeof(arr[0]);
    int max = arr[0];

    for(size_t i = 0; i < size; i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }

    cout << "Max: " << max << endl << endl << endl;


    // Display with pointers
    int* p = arr;
    for(size_t i = 0; i < size; i++){
        cout << *p << endl;
        p++;
    }

    

    return 0;
}