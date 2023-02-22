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

#endif