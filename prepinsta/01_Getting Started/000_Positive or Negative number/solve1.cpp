#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int arr[] = {1,-2,3,-4,5,6,-7,8,9,10,5,-1};
    int *p = arr;

    for(size_t i : arr){
        if(*p > 0){
            cout << *p << right << std::setw(30) << " is positive num\n"; 
        }else{
            cout << *p << right << std::setw(30) << " is negative num\n";
        }
        p++;
    }

    delete p;
    
    return 0;
}