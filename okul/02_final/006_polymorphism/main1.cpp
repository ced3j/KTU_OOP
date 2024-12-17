#include <iostream>
#include <string>
using namespace std;

class Book {
public:
    string title, author, bookID;

    Book() {}

    void inputDetails() {
        cout << "Enter the title: ";
        cin.ignore(); 
        getline(cin, title);

        cout << "Enter the author: ";
        getline(cin, author);

        cout << "Enter the bookID: ";
        cin >> bookID;
    }

    void displayDetails() {
        cout << "-------- Book Details ---------" << endl;
        cout << "Author    : " << author << endl;
        cout << "Title     : " << title << endl;
        cout << "BookID    : " << bookID << endl;
    }
};

class LibraryBook : public Book {
public:
    int shelfNumber;
    bool isAvailable;

    void inputLibraryDetails() {
        cout << "Enter the shelf number: ";
        cin >> shelfNumber;

        int availability;
        cout << "Is the book available? (1 for Yes, 0 for No): ";
        cin >> availability;

        if (availability == 1) {
            isAvailable = true;
        } else {
            isAvailable = false;
        }
    }

    void displayLibraryDetails() {
        cout << "Shelf Number : " << shelfNumber << endl;
        cout << "Availability : " << (isAvailable ? "Yes" : "No") << endl;
    }
};

int main() {
    LibraryBook lib;

    // Girdi al
    lib.inputDetails();
    lib.inputLibraryDetails();

    // Çıktı ver
    lib.displayDetails();
    lib.displayLibraryDetails();

    return 0;
}
