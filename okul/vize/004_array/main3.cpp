// İki diziyi birleştirme

#include <iostream>
using namespace std;


void mergeArrays(int dizi1[], int size1, int dizi2[], int size2, int merged[]){
    for(int i = 0; i < size1; i++){
        merged[i] = dizi1[i];
    }

    for(int i = 0; i < size2; i++){
        merged[size2 + i] = dizi2[i];
    }
}


int main(){
    int dizi1[] = {1, 3, 5};
    int dizi2[] = {2, 4, 6};
    const int size1 = sizeof(dizi1) / sizeof(dizi1[0]);
    const int size2 = sizeof(dizi2) / sizeof(dizi2[0]);

    int merged[size1 + size2];
    mergeArrays(dizi1, size1, dizi2, size2, merged);

    for(int i = 0; i < size1+size2; i++){
        cout << merged[i] << endl;
    }



    return 0;
}