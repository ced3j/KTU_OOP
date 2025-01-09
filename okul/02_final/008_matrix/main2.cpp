#include <iostream>
using namespace std;



int main(){
    int matris1[2][2] = {{1,2}, {3,4}};
    int matris2[2][2] = {{5,6}, {7,8}};

    int toplam[2][2];


    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            toplam[i][j] = matris1[i][j] + matris2[i][j];
        }
    }


    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            cout << toplam[i][j] << " ";
        }

        cout << endl;
    }


    return 0;
}