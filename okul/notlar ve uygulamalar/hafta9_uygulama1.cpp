// Matrisler 




/*

    3x2 Matris
    (3) = satır 
    (2) = sütun

    int matris[3][2] = {
        {1,2},
        {5,3},
        {7,5}
    };


*/





/*



#include <iostream>
using namespace std;

int main(){
    int matris[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << matris[i][j] << " ";
        }
        cout << endl;
    }


    return 0;
}



*/






// Matrisin tersini almak (transpoze)


#include <iostream>
using namespace std;


void matrisTersi(int matris[3][3], int tersi[3][3]){
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            tersi[j][i] = matris[i][j];
        }
    }
}

int main(){


    int matris[3][3] = {
        {1,2,8},
        {5,3,6},
        {7,4,9}
    };

    int tersi[3][3];

    matrisTersi(matris, tersi);


    cout << "Orijinal Matris: " << endl;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << matris[i][j] << " ";
        }

        cout << endl;
    }


    cout << "Ters Matris: " << endl;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << tersi[i][j] << " ";
        }

        cout << endl;
    }

    return 0;
}

