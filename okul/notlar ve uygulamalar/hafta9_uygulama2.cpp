// Swap işlemi

#include <iostream>
using namespace std;


void swap(int& a, int& b){
    int temp = a;
    a = b;
    b = temp;
}

int main(){

    int matris[2][2] = {
        {1,2},
        {3,4}
    };

    swap(matris[0][0], matris[1][0]);

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            cout << matris[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}