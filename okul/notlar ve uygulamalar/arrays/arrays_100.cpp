#include <iostream>
using namespace std;


int main(){
    int arr1[] = {14,232,35};
    int arr2[] = {46,51,69};
    int combinedArr[6];

    for(size_t i = 0; i < 3; i++){
        combinedArr[i] = arr1[i];
    }

    for(size_t i = 0; i < 3; i++){
        combinedArr[i+3] = arr2[i];
    }

    for(size_t i = 0; i < 6; i++){
        cout << combinedArr[i] << endl;
    }

    return 0;
}