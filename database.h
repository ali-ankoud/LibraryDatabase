// hash table of book objects

#ifndef DATABASE_H
#define DATABASE_H

#include "Book.h"

class Database {
    int key;
    Book value;
};

Database::Database(){
    // constructor
}

Database::~Database(){
    // destructor
}

Database::initializeBooks(istream){
    // create book database
}

Database::initializePatrons(istream){
    // create patron database
}

Database::runCommands(istream) {
    // create list of commands, runs them to generate database
}