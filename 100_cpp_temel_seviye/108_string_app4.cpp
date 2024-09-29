#include <iostream>
#include <string>

using namespace std;


int main(){

    string str = "Hello, world";
    size_t found = str.find("world");

    if(found != string::npos){
        cout << "'world' found at position: " << found << endl;
    }
    return 0;
}



/*

push_back() sona ekleme yapar

string str = "Hello";
str.push_back("!");
cout << str << endl;        // output: Hello! 

*/



/*

pop_back() sondan bir karakter çıkarır

string str = "Hello!";
str.pop_back();
cout << str << endl;        // Output: Hello

*/



/*

string str = "Hello, world!";
str.replace(7, 5, "C++");       // 7. indisten itibaren 5 karakteri C++ ile değiştirir
cout << str << endl;        // Output: Hello, C++ 

*/



/*

string str = "Hello, world!";
string sub = str.substr(7, 5);      // 7 indisten itibaren 5 indis boyunu alır
cout << sub << endl;        // Output: "world"

*/


/*
string str1 = "abc";
string str2 = "xyz";

int result = str1.compare(str2);

if(result == 0){
    cout << "Strings are equal." << endl; 
}else if(result < 0){
    cout << "str1 is less than str2" << endl;
}else{
    cout << "str1 is greater than str2" << endl;
}

*/