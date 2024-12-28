#include <iostream>
using namespace std;


int main(){
    int result = 1;
    int num = 5;

    for(int i = 1; i <= num; ++i){
        result *= i;
    }

    cout << result << endl;
    return 0;

}