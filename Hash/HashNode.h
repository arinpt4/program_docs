/*
    HashNode.h

    Unit 3: Hash Table Algorithms

    Name: Sai Lin Aung

    Description:
    Defines the HashNode structure used by the Hash Table.
    Each node stores a Song object and status information
    required for insertion, searching, deletion, and
    collision resolution.
*/

#ifndef HASHNODE_H
#define HASHNODE_H

template <class T>
class HashNode {
private:
    T item;
    int occupied; 
    // 0 = empty
    // 1 = occupied
    // -1 = deleted/tombstone

public:
    HashNode() {
        occupied = 0;
    }

    void setItem(const T& newItem) {
        item = newItem;
        occupied = 1;
    }

    T getItem() const {
        return item;
    }

    T& getItemRef() {
        return item;
    }

    int getOccupied() const {
        return occupied;
    }

    void setOccupied(int status) {
        occupied = status;
    }
};

#endif
