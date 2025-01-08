/*

*(ptr++): eski değeri alır daha sonra ilerler
*(--ptr): Pointer önce geri gider, sonra yeni konumundaki değeri alır.
*++ptr: Pointer önce ileri gider, sonra yeni konumundaki değeri alır.
*ptr++: Pointer önce eski konumundaki değeri alır, sonra ilerler.
*ptr--: Pointer önce eski konumundaki değeri alır, sonra geri gider.


*/


#include <iostream>
using namespace std;



int main(){
    
    int arr[5] = {10,20,30,40,50};


    int* ptr = arr;
    

    for(int i = 0; i < 5; i++){
        cout << *(ptr + i) << " ";
    }



    cout << "\n" << *ptr << endl; // Baştaki değer
    ptr++;
    
    cout << *ptr << endl; // 1. indexteki değer
    ++ptr;

    cout << *ptr << endl; // 2. indexteki değer



    cout << *(ptr++) << endl;
    cout << *ptr << endl;



    return 0;

}