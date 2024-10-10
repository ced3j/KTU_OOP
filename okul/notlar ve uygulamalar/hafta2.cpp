/*
ﷲ 

inputstream:   istream cin;
outputstream:  ostream cout;

cin>>a; ---> a karakter türünden bir değişken ---> 25 sayısını girersek sadece 2 değerini okur çünkü karakter 1 byte tutar
                                              ---> Eğer a int olsaydı 25'i tutabilirdi
                                              ---> Double olsaydı 25.0 gibi tutabilirdi


★★★★★★★★★★★★★★★★★★★


char ch1, ch2;
int num;

input:
    A 25

cin >> ch1 >> ch2 >> num;
ch1 = A
ch2 = 2
num = 5




★★★★★★★★★★★★★★★★★★★






★★★★★★★★

char str[100];
std::cin.get(str, 100, '\n'); // '\n' ile karşılaşana kadar 100 karaktere kadar oku
std::cout << "Girilen string: " << str << std::endl;

★★★★★★★★





★★★★★★★★★★★★★★★★★

A = Kaç karakter ihmal edilecek
B = Nerede bu ihmal işlemi son bulacak 
cin.ignore(A, B);



int a, b;

25 67 89 43 72
12 78 34

cin >> a; -----> a = 25'i tutacak
cin.ignore(100, '\n'); ----> \n'i görene kadar yani alt satıra geçene kadar 100 satırı görme
cin >> b; -----> b = 12 ----> alt satıra geçtikten sonraki ilk değeri tut




char ch1, ch2;

input:
    Hello there. My name is Mickey.


cin >> ch1; -------> ch1 = "H"
cin.ignore(100, '.'); ---------> nokta görene kadar 100 karakteri ihmal et
cin >> ch2 --------> yukarıdaki satırdan sonraki ilk karakteri ch2'ye at   yani My'ın M harfini tut

★★★★★★★★★★★★★★★★★





☢️☢️☢️☢️☢️☢️☢️☢️☢️☢️☢️☢️☢️☢️☢️☢️☢️


istreamVar.putback(ch);

ch = istreamVar.peek();



char ch;
cout << "Line 1: Enter a string: ";
cin.get(ch); ---------> ch = a harfini tutar
cout << endl;
cout << "Line 4: After first cin.get(ch); " << "ch = " << ch << endl;





☢️☢️☢️☢️☢️☢️☢️☢️☢️☢️☢️☢️☢️☢️☢️☢️☢️






int a, b;
std::cin >> a >> b;
    Kullanıcı bir satıra iki değer (örn. "10 20") girerse, a 10, b ise 20 olur.


SETW:
    std::cout << std::setw(10) << 123 << std::endl;
    std::setw (set width): Çıktı genişliğini belirler.
    Yukarıdaki örnek, sayıyı 10 karakter genişliğinde yazdırır.


*/


#include <iostream> 
using namespace std;

int main(){


    return 0;
}