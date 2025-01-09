#include <iostream>
using namespace std;

template <typename T>
class Matrix {
private:
    T* matris;    // Matris elemanlarını tutmak için dinamik dizi
    int rows;     // Satır sayısı
    int cols;     // Sütun sayısı

public:
    // Constructor
    Matrix(int r, int c) : rows(r), cols(c) {
        matris = new T[rows * cols];  // Tek boyutlu dizi oluştur
    }

    // Elemanları kullanıcıdan al
    void inputElements() {
        cout << "Matris elemanlarını girin (" << rows << "x" << cols << "):\n";
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cout << "Eleman [" << i << "][" << j << "]: ";
                cin >> matris[i * cols + j];  // Tek boyutlu dizi indeks hesabı
            }
        }
    }

    // Matris elemanlarını yazdır
    void printMatrix() const {
        cout << "Matris:\n";
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cout << matris[i * cols + j] << " ";  // Tek boyutlu diziden erişim
            }
            cout << endl;
        }
    }

    // Matris elemanlarının toplamını hesapla
    T sumElements() const {
        T toplam = 0;
        for (int i = 0; i < rows * cols; i++) {
            toplam += matris[i];
        }
        return toplam;
    }

    // Köşegen elemanlarının toplamını hesapla
    T sumDiagonal() const {
        if (rows != cols) {
            cout << "Kare matris olmadığından köşegen hesaplanamaz.\n";
            return 0;
        }

        T toplam = 0;
        for (int i = 0; i < rows; i++) {
            toplam += matris[i * cols + i];  // Köşegen elemanları: [i][i]
        }
        return toplam;
    }

    // Destructor (Dinamik belleği serbest bırak)
    ~Matrix() {
        delete[] matris;
    }
};

int main() {
    int rows, cols;

    // Matris boyutlarını al
    cout << "Matrisin satır sayısını girin: ";
    cin >> rows;
    cout << "Matrisin sütun sayısını girin: ";
    cin >> cols;

    // Matris nesnesi oluştur
    Matrix<int> matris(rows, cols);

    // Elemanları al ve işlemleri yap
    matris.inputElements();
    matris.printMatrix();
    cout << "Matris elemanlarının toplamı: " << matris.sumElements() << endl;
    cout << "Köşegen elemanlarının toplamı: " << matris.sumDiagonal() << endl;

    return 0;
}
