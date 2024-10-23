#include <iostream>
using namespace std;


int main(){
    int numbers[5] = {15, 42, 53, 12, 66};

    for(int i = 0; i < 5; i++){
        numbers[i] = numbers[i] * 2;
    }

    for(int i = 0; i < 5; i++){
        cout << numbers[i] << endl;
    }
    
    return 0;
}