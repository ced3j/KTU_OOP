#include <iostream>
using namespace std;

class Book{
    private:
        string title;
        string author;
        
    public:
        Book(string title = "deaultT", string author = "acm") : title(title), author(author){}

        virtual void displayInfo(){
            cout << "Title: " << this->title << endl;
            cout << " Author: " << this->author << endl;
        }
};

class FictionBook : public Book{
    private:
        string genre;

    public:
        FictionBook(string title, string author, string genre) : Book(title, author), genre(genre){}
        
        void displayInfo() override{
            Book::displayInfo();
            cout << "Genre: " << this->genre << endl;
        }
};

class NonFictionBook : public Book{
    private:
        string subject;

    public:
        NonFictionBook(string t, string a, string s) : Book(t, a), subject(s){}

        void displayInfo() override{
            Book::displayInfo();
            cout << "Subject: " << this->subject << endl;
        }
};


int main(){
    Book* books[2];
    books[0] = new FictionBook("Peygamberligin ispati", "ACM", "Religion");
    books[1] = new NonFictionBook("Fakirler", "Tolstoy", "Money");

    for(int i = 0; i < 2; i++){
        books[i]->displayInfo();
        cout << endl;
    }

    return 0;
}