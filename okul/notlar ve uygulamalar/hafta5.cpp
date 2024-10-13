#include <iostream>
#include <fstream>


using namespace std;

int main(){

    char name[100];
    char age[10];

    ofstream outfile;
    outfile.open("Dosya.txt");

    cout << "Enter your name: ";
    cin.getline(name, 100); 

    outfile << name; // girilen veriyi dosyaya yazdır

    cout << "Enter your age: ";
    cin >> age; 

    outfile << " " << age << endl;

    outfile.close(); // Dosyayı kapatır

    ifstream infile;   // Dosya okuma modunda açılır
    infile.open("Dosya.txt");

    cout << "Dosyadan okuma yapabiliyor..." << endl;

    // ismi ve yaşı oku
    infile.getline(name, 100);
    
    infile.getline(age, 10);

    cout << "Veriler: " << name << endl;

    infile.close();


    return 0;
}