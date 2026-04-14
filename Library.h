#ifndef LIBRARY_H
#define LIBRARY_H

#include "Book.h"
#include <string>
using namespace std;

class Library
{
private:
    static const int MAX_BOOKS = 100;
    Book *books[MAX_BOOKS];
    int bookCount;

public:
    Library();
    ~Library();

    void addBook(string title, string author, string isbn);
    void searchBook(string title) const;
    void displayAll() const;
};

#endif