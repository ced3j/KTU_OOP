#include <iostream>
#include <iomanip>
using namespace std;


int main(){


    /*
    stream:   bir kaynaktan hedefe doğru giden karakter dizisi
    istream:  giriş cihazından bilgisayara doğru akan karakter dizisi
    ostream:  bilgisayardan dış cihaza (ekran, dosya vs..) doğru akan karakter dizisi


    <iostream>  : istream ve ostream türünden sınıfları içeren header



    cin.get(varChar);  sıradaki karakteri okur
    char ch1, ch2;
    int num;
    cin.get(ch1);
    cin.get(ch2);
    cin >> num;

    giris: A 25
    ch1 = A
    ch2 = ' ' 
    num = 25
    cout << int(ch1) << int(ch2) << num;




      // cin.ignore(intExp,chExp);    intExp sayıda karakter ya da chExp karakteri görene kadar girilen karakterleri görmezden gelir, hangi şart ilk önce sağlanırsa
        int a,b;
        //Suppose the input is:
        // 25 67 89 43 72
        // 12 78 34


      // getline(cin,str);
    /****
     string ad;
    cin>>ad; // whitespace görene kadar alır
    cout<<"Merhaba "<<ad<<endl;
    ***/

    
    /*
    
    *  setw(n);    
    bir sonra gelen ifadeyi n sütunda yazacak şekilde ayarlar, 
    default olarak sağa dayalıdır, 
    cout<<left ile sola cout<<right ile sağa ayarlanabilir
    taşma olursa gerektiği kadar genişletilir






    fill() - setfill()
    left - right manipulator
    




    /*** flush
     * 
    cout fonksiyonu ekrana bir şey yazarken buffer kullanır,
    buffer dolmadan genelde ekrana bir şey yazmaz,
    buffer dolduğunda ya da endl gördüğünde ekrana yazma işlemi gerçekleştirir
    bazen öyle durumlar olur ki buffer dolmadan bufferda bulunan karakterlerin ekrana yazılması gerekir
    bu durumda
        cout<<flush;  kullanılır
        int num;
        cout<<"Enter an integer: " <<flush;		//Line 1
        cin>>num;					//Line 2
        cout<<endl;					//Line 3
    ******/






    return 0;
}