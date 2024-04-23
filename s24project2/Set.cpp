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

bool Set::insert(const ItemType& value) // inserts a new value in the list in sorted order
{
    // first check the list to see if the value already exists in the list
    if(contains(value) == true)
        return false;
    
    Node* p;
    // loop through the nodes in the list until we find a value just greater than the item we want to insert
    for(p = head->next; p != head && p->data < value; p = p->next)
        ;
    
    // dynamically allocate the new node and initialize its data members
    Node* newGuy = new Node;
    newGuy->data = value;
    newGuy->next = p;
    newGuy->prev = p->prev;
    
    // adjust the newGuy's predecessor and successor to point to it
    newGuy->prev->next = newGuy;
    newGuy->next->prev = newGuy;
    
    // Increment the size of the list
    m_size++;
    
    return true;
}

bool Set::erase(const ItemType &value) // deletes the passed in value assuming it exists within the list
{
    // Checks to see if the list is empty or if the item exists in the list
    if (empty() == true || contains(value) == false)
        return false;
    
    // Iterate through the list and delete the node that matches the value
    Node* p = head->next;
    while (p != head)
    {
        if (p->data == value)
        {
            // reassign the pointers of the nodes on either sides of the target node
            p->prev->next = p->next;
            p->next->prev = p->prev;
            
            // delete the target node and decrement the size of the list
            delete p;
            m_size--;
            return true;
        }
        
        else
            p = p->next;
    }
    return false;
}

bool Set::contains(const ItemType &value) const // simply checks if a value already exists within the list
{
    Node* p = head->next;
    while (p != head)
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
    if (empty() == true || pos >= size() || pos < 0)
        return false;

    // Begin at the end of the list
    Node* p;
    int count = 0;
    for(p = head->prev; p != head && count < pos; count++)
    {
        p = p->prev;
    }

    value = p->data;
    return true;
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
    // Displays the data in the linked list
    Node* p;
    for (p = head->next; p != head; p = p->next)
    {
        cout << p->data << endl;
    }
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
