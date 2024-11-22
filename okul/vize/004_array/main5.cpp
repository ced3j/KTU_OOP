#include <iostream>
using namespace std;

void print(int* dizi, int size) {
    for (int i = 0; i < size; i++) {
        cout << dizi[i] << endl; // Pointer ile dizi elemanlarına erişim
    }
}


int main(){
    int arr[] = {1,2,3,4,5};
    int size = 5;
    print(arr, size);
    return 0;
}