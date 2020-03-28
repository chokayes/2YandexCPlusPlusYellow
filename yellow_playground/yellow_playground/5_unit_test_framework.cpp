//
//  5_unit_test_framework.cpp
//  yellow_playground
//
//  Created by Artsiom Kaliaha on 2/13/20.
//  Copyright © 2020 Artsiom Kaliaha. All rights reserved.
//

#include <iostream>
#include <sstream>
#include <exception>

using namespace std;

template<typename F, typename S>
void assertEqual(const F& a, const S& b) {
    if (a != b) {
        ostringstream ss;
        ss << "Assertion failed. " << a << " != " << b;
        throw runtime_error(ss.str());
    }
}

void testSimpleAssert() {
    assertEqual(1, 1);
}

void testZero() {
    assertEqual(0, 1);
}

////////////////////////////////////////////////////////

class TestRunner {
public:
    template<typename TestFun>
    void runTest(TestFun fun, const string& funName) {
        try {
            fun();
            cerr << "Test " << funName << " succeded" << endl;
        } catch(runtime_error& e) {
            cerr << "Test " << funName << " failed: " << e.what() << endl;
            failCount++;
        }
    }
    
    ~TestRunner() {
        cout << failCount << " tests failed. Terminate." << endl;
        exit(1);
    }

private:
    int failCount = 0;
};

////////////////////////////////////////////////////////

void testAll() {
    TestRunner tr;
    tr.runTest(testSimpleAssert, "testSimpleAssert");
    tr.runTest(testZero, "testZero");
}

int main5() {
    testAll();
    return 0;
}
