#include <iostream>
using namespace std;

namespace extra{
    int i;
};

void i(){
    using namespace extra;
    int i;
    i = 9;
    cout << i;
}

int main(){
    enum letter {i, j};
    class i {letter j;};

    ::i();
    

    return 0;
}