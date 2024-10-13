#include <iostream>
using namespace std;

/*

    Example
    Input : 2 5
    Output : 2 + 3 + 4 + 5 + 6 = 20

*/



int main(){
    int sum = 0;
    int num;
    int count;

    cout << "Enter num - count ------> ";
    cin >> num >> count;

    for(size_t i = num; i <= count+1; i++){
        sum += i;
    }

    cout << "Sum: " << sum << endl;

    return 0;
}