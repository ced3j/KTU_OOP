#include <iostream>
using namespace std;


class Book {
public:
    std::string title;
    std::string author;
    std::string isbn;

    // Kitap bilgilerini ekrana yazdırmak için fonksiyon
    void displayBookInfo() {
        std::cout << "Title: " << title << ", Author: " << author << ", ISBN: " << isbn << std::endl;
    }
};



class Library {
private:
    Book books[100];  // 100 kitaplık bir dizi
    int bookCount;    // Kütüphanedeki kitap sayısı

public:
    Library() : bookCount(0) {}  // Başlangıçta kitap sayısı 0

    // Kitap ekleme fonksiyonu
    void addBook(const Book& newBook) {
        if (bookCount < 100) {
            books[bookCount] = newBook;
            bookCount++;
        } else {
            std::cout << "Kütüphane kapasitesi doldu!" << std::endl;
        }
    }

    // Kitapları listeleme fonksiyonu
    void listBooks() {
        for (int i = 0; i < bookCount; ++i) {
            books[i].displayBookInfo();
        }
    }
};




int main(){
    Library library;
    
    Book book1;
    book1.title = "C++ Programming";
    book1.author = "My Father";
    book1.isbn = "12345";

    library.addBook(book1);


    Book book2;
    book2.title = "Rust Programming";
    book2.author = "My aunt";
    book2.isbn = "53251";

    library.addBook(book2);
    library.listBooks();

    return 0;
}