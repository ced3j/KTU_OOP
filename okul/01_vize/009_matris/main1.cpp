#include <iostream>
using namespace std;

int main(){

    int matrix1[2][2] = {{8, 7}, {6, 5}};
    int matrix2[2][2] = {{3, 2},{1, 0}};
    int result[2][2];

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            result[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }

    cout << "Matrix1 - Matrix2 = " << endl;

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}