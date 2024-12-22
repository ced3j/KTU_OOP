#include <iostream>
using namespace std;


int main(){
    int num = 12345;
    int length = 0;

    int num2 = num;

    while(num2 > 0){
        num2 /= 10;
        length++;
    }

    num2 = num;
    int sum = 0;
    while(num2 > 0){
        int digit = num2 % 10;
        sum += digit;
        num2 /= 10;
    }

    cout << sum << endl;

    return 0;
}