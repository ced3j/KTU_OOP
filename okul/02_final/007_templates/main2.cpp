#include <iostream>
using namespace std;

template<typename T>
T add(T a, T b){
    return a + b;
}

int main(){
    cout << "Sum of 5 and 3: " << add(5, 3) << endl;

    cout << "Sum of 2.4 and 3.6: " << add(2.4, 3.6) << endl;

    cout << "Concatenation of 'Hello' and ' World': " << add(string("Hello"), string(" World")) << endl;

    return 0;
}