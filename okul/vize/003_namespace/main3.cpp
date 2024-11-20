#include <iostream>
using namespace std;

int counter = 0;

void incrementCounter(){
    int counter = 10;
    counter++;
    cout << "Func. counter: " << counter << endl;
}

int main(){

    cout << "Counter output1: " << counter << endl;

    incrementCounter();

    counter++;
    cout << "Main counter: " << counter << endl;

    return 0;
}