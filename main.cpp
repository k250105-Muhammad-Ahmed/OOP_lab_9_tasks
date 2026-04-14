#include "Book.h"
#include "Book.cpp"
#include <string>
#include "Library.h"
#include "Library.cpp"
#include <iostream>
using namespace std;

int main()
{
    Library lib;

    lib.addBook("RR", "RY", "12R");
    lib.addBook("EE", "EY", "12E");

    lib.displayAll();

    lib.searchBook("EE");

    return 0;
}
