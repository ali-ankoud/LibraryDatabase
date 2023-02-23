// Library Header File

// The Library class represents a library that maintains collections of patrons and products.
// It has a HashTable data structure for each collection, which allows efficient retrieval of items using their keys.
// The class has a constructor and destructor to initialize and release resources used by the collections.
// The constructor is responsible for initializing the HashTable objects for patron and product collections.

// The Library class also has a method called runCommands, which takes an input stream as its parameter.
// This method reads a list of commands from the input stream and executes them to generate a database for the library.

// The input stream may contain various commands, such as adding or removing patrons and products from the collections,
// checking out or returning products by patrons, or updating product information. Each command is executed by calling
// the appropriate method from the Patron, Product, or ProductFactory classes.

// Once all commands have been executed, the library database will be populated with the appropriate patrons and
// products, and the library can use its HashTable objects to efficiently retrieve information about them.


#ifndef LIBRARY_H
#define LIBRARY_H

#include "HashTable.h"
#include "Patron.h"
#include "Product.h"
#include "ProductFactory.h"

#include <iostream>

class Library {
    public:
        // constructor and destructor
        Library();
        ~Library();

        // create list of commands, runs them to generate database
        void runCommands(istream);

    private:
        HashTable<Patron> patronCollection;  // collection of all patrons at the library
        HashTable<Product> productCollection;  // collection of all products at the library
};

#endif