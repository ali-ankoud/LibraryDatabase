// Book Header File

// This class stores the book author and creates the base book object,
// and is the parent of the book type objects.

#ifndef BOOK_H
#define BOOK_H

#include "ChildrenBook.h"
#include "FictionBook.h"
#include "PeriodicalBook.h"

#include <iostream>
#include <string>

using namespace std;

class Book {
    public:
        Book(); // constructor
        ~Book(); // destructor
    private:
        string authorFirst;
        string authorLast;
};

#endif