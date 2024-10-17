// Dizideki elemanların toplamını bulma

#include <iostream>
#define SIZEOF(arr) sizeof(arr)/sizeof(*arr)

using namespace std;

int main(){
    int arr[] = {1,23,4,53,5235,325,326,26,3,4324,3};
    int size = SIZEOF(arr);
    int* ptr = arr;
    int toplam = 0;

    for(size_t i = 0; i < size; i++){
        toplam += *ptr;
        ptr++;
    }

    cout << "Toplam : " << toplam;


    return 0;
}