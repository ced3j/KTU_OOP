/*
Matrisin Transpozunu Alma (2x2)
Matrisin transpozunu almak, satır ve sütunları yer değiştirmek anlamına gelir
*/

#include <iostream>
using namespace std;

/*
[1,2]
[3,4]

*/

int main(){

    int matris[2][2] = {{1, 2},{3, 4}};
    int transpoz[2][2];

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            transpoz[j][i] = matris[i][j];
        }
    }

        cout << "Matrix Transpose = " << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << transpoz[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}