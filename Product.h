// Product Header File

// The Product class represents a generic library item that can be checked out by patrons. It has a
// default constructor and a destructor to initialize and release resources used by the object.

// The class has a constructor that takes several parameters, including the product's name, author,
// and date of publication. These parameters are used to set the corresponding private data members
// of the object. The constructor also initializes the copiesAvailable data member to a value of 0,
// but this value is intended to be set by child classes.

// The class has two public methods: checkOut and checkIn, which are used to check out and return
// products to the library, respectively. The checkOut method checks if there are available copies
// of the product and decrements the copiesAvailable data member if there are, returning true to
// indicate success. If there are no copies left, the method returns false. The checkIn method checks
// if the maximum number of copies have been checked in, increments the copiesAvailable data member
// if they haven't, and returns true to indicate success. If the maximum number of copies have already
// been checked in, the method returns false.

// The class also has two private data members: a string variable name that represents the product's
// name, and three integer variables day, month, and year that represent the date of publication.

// The Product class is intended to be used as a base class for other product types, such as books
// or movies. Child classes should set the copiesAvailable data member in their constructors to the
// appropriate value for the specific product type.

#ifndef PRODUCT_H
#define PRODUCT_H

using namespace std;

class Product {
    public:
        Product(); // defailt constructor
        
        Product(string name, string author, int day, int month, int year){
            // set name, author, day, month, year
            // do not set copiesAvailable: handled in child classes
        }

        ~Product(); // destructor
        
        bool checkOut(){
            // if(no copies left) return false
            // decrement copiesAvailable
            // return true
        }
        
        bool checkIn(){
            // if(max copies) return false
            // increment copiesAvailable
            // return true
        }

    protected:
        int copiesAvailable; // number of copies that are available
        // for checkout
        // Must be set by child classes in constructor

    private:
        string name; // the title
        int day, month, year; // date of publication
};

#endif
