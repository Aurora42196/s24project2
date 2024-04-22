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
    ~Set();
    Set(const Set& other);
    Set& operator=(const Set& rhs);
    
private:
    
};

#endif /* Set_h */
