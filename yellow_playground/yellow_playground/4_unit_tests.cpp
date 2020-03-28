//
//  4_unit_tests.cpp
//  yellow_playground
//
//  Created by Artsiom Kaliaha on 2/13/20.
//  Copyright © 2020 Artsiom Kaliaha. All rights reserved.
//

#include <iostream>
#include <cassert>

using namespace std;

int sum(int x, int y) {
    return x + y;
}

void testSum() {
    assert(sum(2, 3) == 5);
    assert(sum(-2, -3) == -5);
    assert(sum(-2, -3) == 0);
    
    cout << "Test sum OK" << endl;
}

int main4() {
    testSum();
    return 0;
}
