#include <iostream>
using namespace std;

int main(){
    int num = 353823;
    int numCopy = num;
    
    int length = 0;

    while(numCopy != 0){
        length++;
        numCopy /= 10;
    }

    cout << "Length: " << length << endl;
    return 0;
}