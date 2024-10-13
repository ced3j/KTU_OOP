#include <iostream>
using namespace std;

class LeapYear{
    public:
        int year;
    
        int calculateLeapYear(int*);
};

int LeapYear::calculateLeapYear(int* year){
    if((*year % 400) == 0){
        return 1;   // Leap year
    }else if((*year % 4 == 0) && (*year % 100 != 0)){
        return 1;
    }else{
        return 0;   // Not leap year
    }
}

int main(){
    int arr[] = {2000,2001,2002,2003,2004,2005,2006};
    int size = sizeof(arr)/sizeof(arr[0]);
    LeapYear obj;

    for(size_t i = 0; i < size; i++){
        cout << arr[i] << " is leap year? = " << obj.calculateLeapYear(&arr[i]) << endl; 
    }

    return 0;
}