// substr


#include <iostream>
#include <string>

int main(){

    /*
    
    Given a string s, write a function to reverse the order of the characters in the string. For example, if the input string is "hello", the output should be "olleh".

    Constraints:

    You can only use the functions of strings that we've discussed (e.g. length(), at(), etc.).
    You cannot use any external libraries or built-in functions that reverse strings.
    */


   std::string x = "hello";
   int len = x.size();
   char test[20];

   for(int i = len-1; i >= 0; i--){
    test[len-1-i] = x.at(i);
   }

   test[len] = '\0'; // null-terminate the array
    std::cout << test << std::endl;


    /*
    
    std::string x = "hello";
    std::string reversed;

    for(int i = x.size()-1; i >= 0; i--){
        reversed.push_back(x.at(i));
    }

    std::cout << reversed << std::endl;

    */



    return 0;
}