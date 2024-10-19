#include <iostream>
using namespace std;


#define SIZEOF(arr) sizeof(arr)/sizeof(*arr)


void tekCift(int &a){
    if(a % 2 == 0){
        cout << a << " -- sayisi cift" << endl; 
    }else{
        cout << a << " -- sayisi tek" << endl;
    }
}

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int size = SIZEOF(arr);

    for(size_t i = 0; i < size; i++){
        tekCift(arr[i]);
    }
    return 0;
}