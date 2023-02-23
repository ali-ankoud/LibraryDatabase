// book base class

#ifndef BOOK_H
#define BOOK_H

using namespace std;

class Book {
    public:
    Book(){
        // set default values
    }
    
    Book(string name, string author, int day, int month, int year){
        // set name, author, day, month, year
        // do not set copiesAvailable: handled in child classes
    }
    
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

    private:
        string name;
        string author;
        int day, month, year;
        int copiesAvailable;
};

#endif
