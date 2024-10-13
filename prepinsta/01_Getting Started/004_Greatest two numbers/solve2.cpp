// USING CLASSES

#include <iostream>
using namespace std;

class PrepQuestions{
    public:
        int calcLargest(int*, int*);

    PrepQuestions(){}

};

int PrepQuestions::calcLargest(int* ptr1, int* ptr2){
    if(*ptr1 > *ptr2){
        return *ptr1;
    }else{
        return *ptr2;
    }
}

int main(){
    PrepQuestions obj;
    int num1, num2, largest;
    num1 = 36, num2 = 24;
    largest = obj.calcLargest(&num1, &num2);
    cout << "Largest: " << largest;
    return 0;
}