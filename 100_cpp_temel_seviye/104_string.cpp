#include <iostream>
#include <cstring>
#include <string>

int main(){
    
     // Karakter dizisi şeklinde string
     char isim1[6] = {'D', 'e', 'r', 'i', 'n', '\0'};
     // ya da
     char isim2[] = "Derin";
    
     std::cout << "Merhaba " << isim1 << std::endl;
    
     /*
     <cstring> kütüphanesi:
    
     strcat(s1, s2);             // s2 stringini s1'in sonuna ekler s1 de tüm sonuç olur
     strlen(s1);                 // s1 stringindeki karakter sayısı
     strcmp(s1, s2);             // s1 ile s2 stringini karşılaştırır eşitse 0, s1<s2 ise negatif, tersiyse pozitif
     strchr(s1,ch);		        // s1 stringinde ch karakteri kaçıncı karakterden başlıyor
    strstr(s1,s2);		        // s1 stringinde s2 stringi kaçıncı karakterden başlar
     */ 
    
    
    char str1[10] = "Merhaba";
    char str2[20] = "Dunya";
    char str3[20];
    int uz;

    
    //kopyalama
    strcpy(str3, str1);
    std::cout << "strcpy : " << str3 << std::endl;
    
    // birleştirme
    strcat(str1, str2);
    std::cout << "strcat : " << str1 << std::endl;

    // uzunluk bulma
    uz = strlen(str1);
    std::cout << "strlen : " << uz << std::endl; 


    std::string s = "computer";
    int n = s.length();

    
    // karakter dizisi tanımlama, sonundaki null karakterinden dolayı n+1 boyutlu
    // char char_dizisi[n+1];

    // s.c_str() ile s stringi karakter dizisine dönüştürüyor
    
    /*
    strcpy(char_dizisi, s.c_str());  
      
    for (int i=0; i<n; i++) 
      cout << char_dizisi[i]; 

    // sondaki NULL dan dolayı dizinin adı ile tüm elemanlarına erişiliyor  
    cout<<endl<<char_dizisi<<endl;
    */

   
    return 0;
}

