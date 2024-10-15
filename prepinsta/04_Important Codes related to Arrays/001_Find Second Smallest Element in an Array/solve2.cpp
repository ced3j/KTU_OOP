// Second smallest

#include <iostream>
using namespace std;

#define SIZEOF(arr) sizeof(arr) / sizeof(*arr)


int findSecondLargest(int* arr, int size){
    int largest = *arr;
    int secondLargest = -1;

    for(size_t i = 1; i < size; i++){
        if(*(arr +i) > largest){
            secondLargest = largest;
            largest = *(arr + i);
        }else if(*(arr + i) > secondLargest && *(arr + i) != largest){
            secondLargest = *(arr + i);
        }
    }

    return secondLargest;
}


int main(){
    int arr[] = {5, 2, 9, 3, 7, 11, 4, 92};
    int size = SIZEOF(arr);

    int secondLargest = findSecondLargest(arr, size);
    cout << "The second largest number is: " << secondLargest << endl;

    return 0;
}

