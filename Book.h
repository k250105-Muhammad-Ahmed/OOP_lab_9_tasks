#ifndef BOOK_H
#define BOOK_H
#include <string>
using namespace std;

class Book
{
private:
    string title;
    string author;
    string ISBN;

public:
    Book(string i_title, string i_author, string i_ISBN);

    string getTitle() const { return title; }
    string getAuthor() const { return author; }
    string getISBN() const { return ISBN; }
};

#endif