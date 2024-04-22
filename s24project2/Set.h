//
//  Set.h
//  s24project2
//
//  Created by Cameron Maiden on 4/18/24.
//

#ifndef Set_h
#define Set_h

#include <iostream>

using ItemType = std::string;

class Set
{
public:
    Set();
    bool empty() const;
    int size() const;
    bool insert(const ItemType& value);
    bool erase(const ItemType& value);
    bool contains(const ItemType& value) const;
    bool get(int pos, ItemType& value) const;
    void swap(Set& other);
    
    // Housekeeping Functions
    ~Set(); //When a Set is destroyed, the nodes in the linked list must be deallocated.
    
    Set(const Set& other); // When a brand new Set is created as a copy of an existing Set, enough new nodes must be allocated to hold a duplicate of the original list.

    Set& operator=(const Set& rhs); // When an existing Set (the left-hand side) is assigned the value of another Set (the right-hand side), the result must be that the left-hand side object is a duplicate of the right-hand side object, with no memory leak of list nodes (i.e. no list node from the old value of the left-hand side should be still allocated yet inaccessible).
    
private:
    int m_size; // holds the number of how many items are in the linked list
};

#endif /* Set_h */
