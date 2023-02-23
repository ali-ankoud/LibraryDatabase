// class for a children's book

// constructs the childrens book object and sets the number of copies

#ifndef CHILDRENBOOK_H
#define CHILDRENBOOK_H

class ChildrenBook {
    public:
    ChildrenBook(){
        // call parent no-arg constr
        // set numOfCopies to 5
    }
    
    ChildrenBook(string name, string author, int day, int month, int year){
        // call parent constr
        // set numOfCopies to 5
    }
    
    private:
        int numOfCopies;
};

#endif
