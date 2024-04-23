//
//  Set.cpp
//  s24project2
//
//  Created by Cameron Maiden on 4/18/24.
//

#include <iostream>
#include "Set.h"

using namespace std;

// Default constructor => create an empty Set
/// The constructor creates an empty linked list starting with a dummy node
Set::Set()
 :m_size(0)
{
    cerr << "Set() default constructor called!" << endl;
    head = new Node;
    head->next = head;
    head->prev = head;
}

bool Set::empty() const // Checking to verify if the list is empty
{
    return (m_size == 0);
}

int Set::size() const // Simply returns the size of the list
{
    return m_size;
}

bool Set::insert(const ItemType &value) // inserts a new value in the list in sorted order
{
    return false;
}

bool Set::erase(const ItemType &value) // deletes the passed in value assuming it exists within the list
{
    return false;
}

bool Set::contains(const ItemType &value) const // simply checks if a value already exists within the list
{
    Node* p = head->next;
    while (p != head && empty())
    {
        if (p->data == value)
            return true;
        else
            p = p->next;
    }
    return false; // either the value passed in wasn't found or the list is empty
}

bool Set::get(int pos, ItemType &value) const // retrieves the value in the list that's exactly pos items less than the one in the list
{
    return false;
}

void Set::swap(Set &other) // swaps the contents of two lists
{
    
}

///////////////////////////////////////////////////////////////////////////
/// Housekeeping Functions
///////////////////////////////////////////////////////////////////////////

Set::~Set() // Destructor
{
    cerr << "~Set() destructor called!" << endl;
    while(head->next != head && head->prev != head)
    {
        Node* p = head->next;
        head->next = p->next;
        p->next->prev = p->prev;
        delete p;
    }
    
    delete head;
}

Set::Set(const Set& other) // Copy Constructor
{
    
}

Set& Set::operator=(const Set& rhs) // Assignment operator
{
    return *this;
}

void Set::dump() const
{
    
}

///////////////////////////////////////////////////////////////////////////
/// Non-member Functions
///////////////////////////////////////////////////////////////////////////

void unite(const Set& s1, const Set& s2, Set& result)
{
    
}

void inOnlyOne(const Set& s1, const Set& s2, Set& result)
{
    
}
