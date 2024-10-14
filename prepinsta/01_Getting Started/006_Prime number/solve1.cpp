#include <iostream>
using namespace std;


int main(){

    int a = 0, count = 0, n = 21;

    for(size_t i = 1; i < n+1; i++){
        if(n % i == 0) count += i;
    }

    if(n == 0 || n == 1){
        cout << "The number is not prime: " << n << endl;
    }else if( count > 2){
        cout << "The number is not prime: " << n << endl; 
    }else{
        cout << "The number is prime: " <<  n << endl;
    }

    return 0;
}
