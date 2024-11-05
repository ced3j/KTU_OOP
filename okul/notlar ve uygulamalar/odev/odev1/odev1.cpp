#include <iostream>
#include <fstream>

class CodeChecker {
private:
    int orjinalKod[250]; 
    int kopyaKod[250];   
    int length;          

public:

    bool readCode(const std::string& filename) {
        std::ifstream inFile(filename);
        if (!inFile.is_open()) {
            std::cerr << "Girdi dosyasi acilamadi." << std::endl;
            return false;
        }
        
        inFile >> length; 
        if (length > 250) {
            std::cerr << "Kod uzunlugu siniri asildi." << std::endl;
            return false;
        }


        for (int i = 0; i < length; ++i) {
            inFile >> orjinalKod[i];
        }


        for (int i = 0; i < length; ++i) {
            inFile >> kopyaKod[i];
        }

        inFile.close();
        return true;
    }


    bool compareCode(const std::string& outputFilename) {
        std::ofstream outFile(outputFilename);
        if (!outFile.is_open()) {
            std::cerr << "Cikti dosyasi acilamadi." << std::endl;
            return false;
        }

        bool isCorrect = true;
        for (int i = 0; i < length; ++i) {
            outFile << orjinalKod[i] << " -- " << kopyaKod[i] << "\n";
            if (orjinalKod[i] != kopyaKod[i]) {
                isCorrect = false;
            }
        }

        if (isCorrect) {
            outFile << "Mesaj hatasiz iletildi." << std::endl;
        } else {
            outFile << "Mesaj hatali iletildi." << std::endl;
        }

        outFile.close();
        return isCorrect;
    }
};

int main() {
    CodeChecker checker;
    if (checker.readCode("girdi.txt")) {
        checker.compareCode("cikti.txt");
    }
    return 0;
}
