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

int main(int argc, const char * argv[]) {
    // Test 1: To see if the default constructor and destructor allocate and dealllocate as intended
    Set s;
    assert(s.empty() == true);
    assert(s.size() == 0);
    
    cout << "Passed all tests!" << endl;
    
}
