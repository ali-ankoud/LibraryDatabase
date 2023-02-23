// Patron Header File

// The Patron class represents a library patron who can check out and return items from the library.
// It has a constructor and destructor to initialize and release resources used by the object.

// The class has two public methods: checkOut and returnItem, which are used to check out and return
// products to the library, respectively. The checkOut method takes a product as its parameter, which
// represents the item that the patron wishes to check out. This method performs the necessary checks
// to ensure that the patron is eligible to check out the product and adds the product to the patron's 
//list of checked out items.

// The returnItem method takes a product as its parameter, which represents the item that the patron
// wishes to return. This method removes the product from the patron's list of checked out items and 
// returns it to the library database.

#ifndef PATRON_H
#define PATRON_H

#include <vector>

class Patron {
    public:
        Patron();  // cpmstrictpr
        ~Patron(); // destructor

        void checkOut(/*product*/); // code to check out book to patron
        void returnItem(/*product to return*/); // code to return item to database

    private:
        int idNumber;     // patron id number
        string firstName; // patron first name
        string lastName;  // patron last name
        vector<Product> checkOutHistory;   // vector of previously checked out items
        vector<Product> booksCheckedOut;   // vector of checked out books
};

#endif