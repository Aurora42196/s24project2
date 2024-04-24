//
//  testSetMemoryLeak.cpp
//  s24project2
//
//  Created by Cameron Maiden on 4/23/24.
//

#include "Set.h"
#include <iostream>
#include <cassert>

using namespace std;

void test()
{
      cerr << "test A" << endl;
    Set s;
      cerr << "test B" << endl;
    s.insert(IntWrapper(10));
      cerr << "test C" << endl;
    s.insert(IntWrapper(20));
      cerr << "test D" << endl;
    Set s2;
      cerr << "test E" << endl;
    s2.insert(IntWrapper(30));
      cerr << "test F" << endl;
    s2 = s;
      cerr << "test G" << endl;
    s2.insert(IntWrapper(40));
      cerr << "test H" << endl;
}

int main()
{
    test();
    cerr << "DONE" << endl;
}
