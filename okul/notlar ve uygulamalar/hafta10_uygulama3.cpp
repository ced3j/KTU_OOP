#include <iostream>
using namespace std;

class Number{
    public:
        int num;

        Number(int n): num(n){}
        
        Number operator - (Number newNum){
            return Number(num - newNum.num);
        }
};

int main(){
    Number n1(100);
    Number n2(20);
    Number n3 = n1 - n2;

    printf("%d", n3.num);
    
    return 0;
}