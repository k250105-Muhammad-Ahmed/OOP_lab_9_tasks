#include "Library.h"
#include <iostream>
using namespace std;

Library::Library() : bookCount(0)
{
}

Library::~Library()
{
    for (int i = 0; i < bookCount; i++)
    {
        delete books[i];
    }
}

void Library::addBook(string title, string author, string isbn)
{
    if (bookCount < MAX_BOOKS)
    {
        books[bookCount] = new Book(title, author, isbn);
        bookCount++;
    }
    else
    {
        cout << "Library is full!" << endl;
        ;
    }
}

void Library::searchBook(string title) const
{
    bool found = false;
    for (int i = 0; i < bookCount; i++)
    {
        if (books[i]->getTitle() == title)
        {
            cout << "Found: " << books[i]->getTitle() << " by " << books[i]->getAuthor() << endl;
            found = true;
        }
    }
    if (!found)
    {
        cout << "Book not found" << endl;
    }
}

void Library::displayAll() const
{
    if (bookCount == 0)
    {
        cout << "The book library is empty add book" << endl;
    }

    for (int i = 0; i < bookCount; i++)
    {
        cout << endl;
        cout << i + 1;
        cout << ".Title:" << books[i]->getTitle() << endl;
        cout << " Author:" << books[i]->getAuthor() << endl;
        cout << " ISBN:" << books[i]->getISBN() << endl;
    }
}
