// Second smallest

#include <iostream>
using namespace std;

#define SIZEOF(arr) sizeof(arr) / sizeof(*arr)


int main(){
    int arr[] = {1,2,3,4,5,6,7,8};
    int size = SIZEOF(arr);

    for(int i = size-1; i >= 0; i--){
        cout << arr[i] << endl;
    }
    return 0;
}

