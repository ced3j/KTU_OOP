#include <iostream>
using namespace std;


class Author{
    private:
        string name;
    public:
        Author(string authorName) : name(authorName){}
        void display(){
            cout << "Author: " << name << endl;
        }
};

class Book{
    private:
        string title;
        Author author;
    public:
        Book(string bookTitle, string authorName) : title(bookTitle), author(authorName){}
        void display(){
            cout << "Book title: " << title << endl;
            author.display();
        }
};

int main(){

    Book myBook("C++ programming", "Bjarne Stroustrup");
    myBook.display();


    return 0;
}