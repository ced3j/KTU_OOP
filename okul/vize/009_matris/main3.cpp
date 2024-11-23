/*


Başlangıç Matrisini Yazdır:

Matris printMatrix fonksiyonu ile ekrana yazdırılır.
Swap İşlemleri:

swap(mat[0][0], mat[1][1]) → İlk eleman ile son eleman yer değiştirir.
swap(mat[0][1], mat[1][0]) → Üst sağdaki eleman ile alt soldaki eleman yer değiştirir.
Sonuç Matrisi:

Swap işlemleri tamamlandıktan sonra matris yeniden yazdırılır.






*/



#include <iostream>
using namespace std;

void printMatrix(int mat[2][2]) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    // 2x2 Matris
    int mat[2][2] = {
        {1, 2},
        {3, 4}
    };

    cout << "Original Matrix:" << endl;
    printMatrix(mat);

    // Swap işlemleri
    swap(mat[0][0], mat[1][1]); // (0,0) <-> (1,1)
    swap(mat[0][1], mat[1][0]); // (0,1) <-> (1,0)

    cout << "\nMatrix After Swap:" << endl;
    printMatrix(mat);

    return 0;
}
