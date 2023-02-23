// class for a fiction book

// constructs the fiction book object and sets the number of copies

#ifndef FICTIONBOOK_H
#define FICTIONBOOK_H

class FictionBook {
    public:
        FictionBook(){
            // call parent no-arg constr
            // set numOfCopies to 5
        }
        
        FictionBook(string name, string author, int day, int month, int year){
            // call parent constr
            // set numOfCopies to 5
        }

    private:
        int numOfCopies;
    
};

#endif
