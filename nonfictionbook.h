// class for a non-fiction book
// An object representing a non-fiction book. Has up
// to five copies that can be checked out.

#ifndef NONFICTIONBOOK_H
#define NONFICTIONBOOK_H

class NonFictionBook {
    private:
    int copiesAvailable;   // 5 max
    
    public:
    NonFictionBook(){
        // sets copiesAvailable to 5
        // calls parent no-arg constr
    }
    
    NonFictionBook(string name, string author, int day, int month, int year){
        // sets copiesAvailable to 5
        // sets name, author, day, month, and year by calling parent constr
    }
};

#endif
