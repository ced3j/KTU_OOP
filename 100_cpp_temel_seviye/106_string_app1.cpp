#include <iostream>
#include <cstring>      // strcpy, strcat için
#include <string>       // std::string için

int main(){

    // Bir stringi kopyala, ardından başka bir string ile birleşitr
    // yeni bir string oluştur. Bu işlemi hem char dizileri hem de std::string kullanarak yap

    //std::string n = "Testing";
    char n[] = "Testing";
    char hedef[20];
    strcpy(hedef, n);
    std::cout << n << std::endl;


    std::string x1 = "Testing";
    std::string x2;
    x2 = x1;
    std::cout << x2 << std::endl;


    return 0;
}





/*


    // karakter dizisi kopyalama (c tarzı)
    char source[] = "Hello";
    char dest[20];
    strcpy(dest, source);       // source --> dest'e kopyalar
    std::cout << "Kopyalanan string (c) :" << dest << std::endl;


    // C++ string ile kopyalama
    std::string s1 = "Nesne";
    std::string s2;
    s2 = s1; // s1'i s2'ye kopyala
    std::cout << "Kopyalanan string (C): " << s2 << std::endl;


    // Karakter dizisi birleştirme (C tarzı)
    char dest2[30] = "Merhaba ";
    char source2[20] = "Dunya!";
    strcat(dest2, source2);      // source --> dest2 sonuna ekler
    std::cout << "Birlestirilmis string (C): " << dest2 << std::endl;


    // C++ ile string birlestirme
    std::string str3 = "C++ ";
    std::string str4 = "Programlama";
    std::string result = str3 + str4;
    std::cout << "Birlestirilmis string (C++): " << result << std::endl;


*/