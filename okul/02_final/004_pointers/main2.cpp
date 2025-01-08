#include <iostream>
using namespace std;



int main(){


    int arr[3] = {10,20,30};
    int* ptr = arr;

    cout << *(ptr + 2) << endl; // 30;
    ptr += 2;
    cout << "ptr: " << *ptr << endl;
    cout << *(ptr - 1) << endl;
    cout << *(ptr - 1) << endl;
    cout << *ptr << endl;


    cout << "\n\nPart 2: \n" << endl;
    // -----------------------------


    int arr2[5] = {10,20,30,40,50};
    int* ptr2 = arr + 2;

    ptr2--; // ptr arr[1]'e gider;
    cout << *ptr2 << endl;
    cout << *(ptr2 + 1) << endl;
    cout << *ptr2 << endl;


    return 0;
}