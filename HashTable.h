// HashTable Header File

// The HashTable class is a template class that provides an implementation of a
// hash table data structure. It takes a type T as a template argument and supports
// operations such as inserting, removing, and searching for items in the table.

// The class has a default constructor and a destructor to initialize and release
// resources used by the object. It also has three public methods: insert, remove, 
// and search.

// The insert method takes a key and an item of type T and inserts the item into
// the hash table with the given key. The remove method takes a key and removes the
// item with that key from the hash table. The search method takes a key and returns
// the item associated with that key, or a default-constructed instance of type T
// if the key is not found in the table.

// The HashTable class has a private data member, a vector of pointers to Node structs,
// which represents the hash table. Each Node struct contains a key, an item of type T,
// and a pointer to the next node in the linked list of nodes with the same hash value.

// The size of the hash table is stored in the size data member.

// The class also has two private helper methods: hash and findNode. The hash method takes
// a key and returns the hash value for that key, which is used to index into the hash
// table. The findNode method takes a key and returns a pointer to the Node struct with
// that key in the linked list of nodes with the same hash value.

#ifndef HASHTABLE_H
#define HASHTABLE_H

#include <iostream>
#include <vector>

template <typename T>
class HashTable {
public:
    // Constructor and Destructor
    HashTable();
    ~HashTable();

    // Insert, Remove, and Search methods
    void insert(int key, T item);
    void remove(int key);
    T search(int key);

private:
    struct Node {
        int key;
        T item;
        Node* next;
    };

    std::vector<Node*> table;
    int size;

    // Private helper methods
    int hash(int key);
    Node* findNode(int key);
};

#endif