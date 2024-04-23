//
//  main.cpp
//  s24Project2
//
//  Created by Cameron Maiden on 4/18/24.
//

#include <iostream>
#include <cassert>
#include "Set.h"

using namespace std;

int main()
{
    // Test 1: To see if the default constructor and destructor allocate and deallocate as intended
    Set s;
    ItemType x = "xxx";
    assert(s.empty() == true);
    assert(s.size() == 0);
    assert(s.contains(x) == false);
    
    cout << "Passed all tests!" << endl;
}

///////////////////////////////////////////////////////////////////////////
/// Test case to see if all the functions are implemented and compile
///////////////////////////////////////////////////////////////////////////

//#include "Set.h"
//#include <type_traits>
//
//#define CHECKTYPE(c, f, r, a)  \
//{  \
//static_assert(std::is_same<decltype(&c::f), r (c::*)a>::value, \
//"You did not declare " #c "::" #f " as the Project 2 spec does");  \
//auto p = static_cast<r (c::*)a>(&c::f);  \
//(void) p;  \
//}
//#define CHECKTYPENONMEMBER(f, t)  \
//{  \
//static_assert(std::is_same<decltype(f), t>::value, \
//"You did not declare " #f " as the Project 2 spec does");  \
//auto p = static_cast<std::add_pointer<t>::type>(f);  \
//(void) p;  \
//}
//
//static_assert(std::is_default_constructible<Set>::value,
//              "Set must be default-constructible.");
//static_assert(std::is_copy_constructible<Set>::value,
//              "Set must be copy-constructible.");
//static_assert(std::is_copy_assignable<Set>::value,
//              "Set must be assignable.");
//static_assert(std::is_same<decltype(*(Set*)(0) = Set()), Set&>::value,
//              "Set::operator= return type should be Set&");
//
//void thisFunctionWillNeverBeCalled()
//{
//    CHECKTYPE(Set, empty,    bool, () const);
//    CHECKTYPE(Set, size,     int,  () const);
//    CHECKTYPE(Set, insert,   bool, (const ItemType&));
//    CHECKTYPE(Set, erase,    bool, (const ItemType&));
//    CHECKTYPE(Set, contains, bool, (const ItemType&) const);
//    CHECKTYPE(Set, get,      bool, (int, ItemType&) const);
//    CHECKTYPE(Set, swap,     void, (Set&));
//    CHECKTYPENONMEMBER(unite,     void(const Set&, const Set&, Set&));
//    CHECKTYPENONMEMBER(inOnlyOne, void(const Set&, const Set&, Set&));
//}
//
//int main()
//{}
