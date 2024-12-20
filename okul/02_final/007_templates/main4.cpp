#include <iostream>
using namespace std;

template<typename T>
class Stack{
    private:
        T arr[100];
        int top;
    public:
        Stack() : top(-1) {}

        void push(T value){
            if(top < 99){
                arr[++top] = value;
            }else{
                cout << "Stack overflow!" << endl;
            }
        }

        T pop(){
            if(top >= 0){
                return arr[top--];
            }else{
                cout << "Stack underflow!" << endl;
                return T();
            }
        }

        bool isEmpty(){
            return top == -1;
        }
};

int main(){
    Stack<int> intStack; // int türü için bir yığın
    intStack.push(10);
    intStack.push(20);

    cout << "Popped: " << intStack.pop() << endl;

    Stack<string> strStack;
    strStack.push("Hello");
    strStack.push("World");
    strStack.push("How");

    cout << "Popped(str) : " << strStack.pop() << endl;

    return 0;
}