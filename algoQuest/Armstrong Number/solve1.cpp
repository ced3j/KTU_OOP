/*

Örn: 153 sayısı 3 basamaklı
     Her bir basamağın küpünü alırsak toplamda yine 153 eder bu armstrong sayısıdır 

*/


#include <iostream>
using namespace std;

int main(){

    int num = 153; 
    int copyNum = num;
    int len = 0;
    int result = 0;

    while(copyNum != 0){
        copyNum /= 10;
        len++;    
    }

    copyNum = num;

    while(copyNum != 0){
        int toplam = 1;
        int digit = copyNum % 10;
        copyNum /= 10;
        for(int i = 0; i < len; ++i){
            toplam *= digit;
        }

        result += toplam;
    }


    if(result == num){
        cout << "This number is an armstrong" << endl;
    }
    else{
        cout << "This number is not an armstrong : " << result << endl; 
    }

    return 0;
}