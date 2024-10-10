#include <iostream>
using namespace std;

int main() 
{
  
  
    cout << "Hello, World!";
    return 0;
    
}




/*

Veri türleri:
  integral veri türü:
    char, short, int, long, bool
    
    int 4 byte 32 bit 
    bool 1 byte 8 bit
    char 1 byte 8 bit
    
    float 4 byte
    double 8 byte
    
    
    
    + - * / % işlem öncelikleri çıktı soruları 
    
    8 + 7 = 15
    '8' + '7' = 56 + 56 = 112   ( ASCII toplama yaptı normalde char olan şeyleri)
    
    
    *** Syntax cast operator ***   ( tür dönüşümleri )
    
    static_cast<dataTypeName>(expression)
    
    static_cast<int>(7.9) = 7                               (float'ı int'e çevirdi)
    static_cast<double>(25) = 25.0                          (int'ten double'a)
    static_cast<double>(5+3) = static_cast<double>(8) = 8 
    
    static_cast<double>(15)/2 = 15.0/2          // önce 15'i double'a çevirir çünkü parantez
                              = 15.0/2.0        // sonra 15.0'ı 2'ye böler
                              = 7.5             // sonuç
                              
                            
    static_cast<int>(7.8 + static_cast<double>(15)/2)  == static_cast<int>(7.8 + 7.5) 
                                                       == static_cast<int>(15.3) = 15
                                                       
    
    char ch = 'D';
    static_cast<int>(ch);                        // ch'nin ascii değerini int'e çevirir
    
                                                       
                                                    
    *** increment and decrement operators ***
      
      ++variable
      --variable
      variable++
      variable--
      
    
    
    

*/



