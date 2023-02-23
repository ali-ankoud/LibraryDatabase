// class that holds patron data

#ifndef PATRON_H
#define PATRON_H

#include <vector>

class Patron {
    int idNumber;
    string firstName;
    string lastName;
    vector<> checkOutHistory;
    vector<> booksCheckedOut;
};

void Patron::Patron(){
    // generate ID number, first, last, and initialize vectors
    // for checkout history and books checked out
}

void Patron::~Patron(){
    // destructor for patron
}

void Patron::checkOut(/*product*/){
    // code to check out book to patron
}

void Patron::returnItem(/*product to return*/){
    // code to return item to database
}

#endif