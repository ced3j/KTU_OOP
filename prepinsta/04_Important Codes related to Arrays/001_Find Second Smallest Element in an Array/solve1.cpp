// Second smallest

#include <iostream>
using namespace std;

#define SIZEOF(arr) sizeof(arr) / sizeof(*arr)


int main(){
    int arr[] = {350,993,34,53,5,315,31,43,24,324,325,25,316,4};
    int size = SIZEOF(arr);
    int smallest = arr[0];
    int sec_smallest = arr[0];

    
    for(size_t i = 0; i < size; i++){
        if(smallest > arr[i]){
            smallest = arr[i];
        }
    }

    for(size_t i = 0; i < size; i++){
        if(arr[i] != smallest && arr[i] < sec_smallest){
            sec_smallest = arr[i];
        }
    }


    cout << "The first smallest num is : " << smallest << endl;
    cout << "The second smallest num is : " << sec_smallest << endl;


    return 0;
}

/*
önce sıralama yapılabilir
Şöyle yapalım pointer ile sorting yapak?


*/