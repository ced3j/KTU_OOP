#include <iostream>
using namespace std;

#define SIZEOF(arr) sizeof(arr)/sizeof(*arr)

// eger a cift ise 2'ye esitlensin, tek ise 1'e 
void degistir(int &a){
    if(a % 2 == 0){
        a = 2;
    }else{
        a = 1;
    }
}

int main(){
    int arr[] = {1,23,4,5,253,24,32,64,7,3};
    int size = SIZEOF(arr);

    for(size_t i = 0; i < size; i++){
        degistir(arr[i]);
    }


    cout << "Degistirilen array: " << endl;
    for(size_t i = 0; i < size; i++){
        cout << arr[i] << " ";
    }

    return 0;
}