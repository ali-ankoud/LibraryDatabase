// class that holds patron data

#ifndef PATRON_H
#define PATRON_H

#include <vector>

class Patron {
    int idNumber;
    string firstName;
    string lastName;
    vector<Product> checkOutHistory;
    vector<pair<Product, string>> booksCheckedOut;
};

void Patron::Patron(){
    // generate ID number, first, last, and initialize vectors
    // for checkout history and books checked out
}

void Patron::Patron(string firstName, string listName, int idNumber){
    // generate ID number, first, last, and initialize vectors
    // for checkout history and books checked out
}

void Patron::~Patron(){
    // destructor for patron
}

bool Patron::checkOut(/*product*/){
    // code to check out book to patron
    // if(product does not exist or has no copies) return false
    // add product to booksCheckedOut
    // add to checkOutHistory along with checked out status
    // decrement product's available copies
    // return true
}

bool Patron::returnItem(/*product to return*/){
    // code to return item to database
    // if(product not in booksCheckedOut) return false
    // remove product from booksCheckedOut
    // add to checkOutHistory with checked in status
    // increment product's available copies
    // return true
}

#endif
