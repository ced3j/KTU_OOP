#include <iostream>
#include <iomanip>

using namespace std;



class Book{
    private:
        string author;
        string title;

    public:
        Book(string, string);
        ~Book();
        void display() const;

        string getAuthor(){
            return author;
        }

        string getTitle(){
            return title;
        }

};

class Library{
    public:
        int bookCount;
        Book* books[10];

        Library();
        void addBook(string, string);
        void displayBooks();

};



int main(){
    Library kutuphane;
    
    kutuphane.addBook("Gazzali", "Ihya-u Ulumiddin");
    kutuphane.addBook("ACM", "Peygamberligin Ispati");
    kutuphane.addBook("Simyaci", "Paulo Coelho");


    kutuphane.displayBooks();


    return 0;
}





Book::Book(string bookTitle, string bookAuthor){
    title = bookTitle;
    author = bookAuthor;
}

Book::~Book(){
    cout << "Kitap silindi: " << title << endl;
}

void Book::display() const{
    cout << left << setw(15) << "Kitap adi: " << title << left << setw(15) << ", Yazari: " << left << setw(25) <<  author << endl;
}



Library::Library(){
    bookCount = 0;
}


void Library::addBook(string title, string author){
    if(bookCount < 10){
        books[bookCount] = new Book(title, author);
        bookCount++;
    }
}

void Library::displayBooks(){
    for(int i = 0; i < bookCount; i++){
        books[i]->display();
    }
}