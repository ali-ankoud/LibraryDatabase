// Product Factory Header File

// This class takes in the file io stream and creates the book and patron
// database for the library to store within the hash table. 

#ifndef PRODUCTFACTORY_H
#define PRODUCTFACTORY_H

#include "Product.h"

#include <iostream>

class ProductFactory {
    public:
        // class functions
        void initializeBooks(istream); // create book database
        void initializePatrons(istream); // create patron database
};

#endif