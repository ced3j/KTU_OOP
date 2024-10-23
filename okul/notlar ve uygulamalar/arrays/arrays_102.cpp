#include <iostream>
using namespace std;

void multiplyByThree(int arr[], int size){
    for(int i = 0; i < size; i++){
        arr[i] = arr[i] * 3;
    }
}

/*

Diziler, bir fonksiyona argüman olarak gönderildiğinde, 
dizinin ilk elemanının adresi 
fonksiyona gönderilir. Yani aslında bir pointer gibi çalışır. 
Dizinin kendisi fonksiyona kopyalanmaz, 
onun yerine dizinin bellekteki adresi fonksiyona iletilir.



void multiplyByThree(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        *(arr + i) = *(arr + i) * 3;
    }
}


*/

int main(){
    int numbers[5] = {32,53,61,73,12};

    multiplyByThree(numbers, 5);

    for(int i = 0; i < 5; i++){
        cout << numbers[i] << endl;
    }

    return 0;
}