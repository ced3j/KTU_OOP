#include <iostream>
#include <cstring> 
// aşağıda kullanacağımız string özellikleri C stilindeki özelliklerdir
// bu yüzden cstring kütüphanesini ekleriz

using namespace std;


int main(){

    char greeting[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
    // char greeting[] = "Hello";

    cout << greeting << endl;

    char str1[] = "Hello";
    char str2[] = "World";
    char str3[10];

    int len;

    cout << "Normalde str3(bos) : " << str3 << endl;
    strcpy(str3, str1); // s1'i s3'e kopyalar
    cout << "strcpy(str3, str1) : " << str3 << endl;


    cout << "Normalde str1: " << str1 << endl;
    strcat(str1, str2); // str2'yi str1 sonuna birleştir
    cout << "strcat(str1, str2) : " << str1 << endl;

    len = strlen(str1);
    cout << "strlen(str1) : " << len << endl; 



    return 0;
}



/*

Yukarıdaki işlemleri <cstring> kullanmadan C++ ile şöyle yapardık:

    string str1 = "Hello";
    string str2 = "World";
    string str3;
    int len;

    // kopyala: 
    str3 = str1;
    cout << str3 << endl;

    // birleştir
    str3 = str1 + str2;
    cout << str3 << endl;

    // toplam uzunluk
    int len = str3.ize();
    cout << len << endl;


*/