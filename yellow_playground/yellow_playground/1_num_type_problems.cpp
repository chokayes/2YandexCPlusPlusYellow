//
//  1_num_type_problems.cpp
//  yellow_playground
//
//  Created by Artsiom Kaliaha on 2/11/20.
//  Copyright © 2020 Artsiom Kaliaha. All rights reserved.
//

#include <iostream>
#include <vector>
//#include <cstdint>
#include <limits>

using namespace std;

void problemOne() {
    //v.size() has a positive type -> no negative values
    
    vector<int> v = { -8, -7, 3 };
    
    int sum = 0;
    for (const auto& item : v) {
        sum += item;
    }
    
    cout << "average value is " << sum / v.size() << endl;
}

void problemTwo() {
    //type overflow
    
    int x = 2'000'000'000;
    cout << "before multiplication " << x << endl;
    x *= 2;
    cout << "after multiplication " << x << endl;
}


void problemOneSolved() {
    //v.size() has a positive type -> no negative values
    
    vector<int> v = { -8, -7, 3 };
    
    int sum = 0;
    for (const auto& item : v) {
        sum += item;
    }
    
    cout << "average value is " << sum / static_cast<int>(v.size()) << endl;
}

void iteration() {
    vector<int> v { 1, 2, 3 };
    
    for (size_t i = 0; i < v.size(); i++) {
        cout << v[i] << ", ";
    }
    cout << endl;
}

void iterationWithoutLast() {
    vector<int> v { 1, 2, 3 };
    
    //OK, because size of array > 0
    for (size_t i = 0; i < v.size() - 1; i++) {
        cout << v[i] << ", ";
    }
    cout << endl;
    
    v.clear();
    //NOT OK, because size of array > 0
    //this code will iterate wrong regions of memory, shich don't belong to our app
    //=> it will be a very long loop
//    for (size_t i = 0; i < v.size() - 1; i++) {
//        cout << v[i] << ", ";
//    }
    cout << endl;
}

void smartIteration() {
    vector<int> v;
    
    //OK even for empty arrays
    for (size_t i = 0; i + 1 < v.size(); i++) {
        cout << v[i] << ", " << endl;
    }
    cout << endl;
}

void reverseIteration() {
    vector<int> v { 1, 2, 3 };
    
    //on the forth iteration "i" will be equal to "18446744073709551615"
    //because of overflow. -1 is equal to max value of unsigned data type
    //it will be a very long loop with an error at the end
//    for (size_t i = v.size() - 1; i >= 0; i--) {
//        cout << i << " - " << v[i] << endl;
//    }
    cout << endl;
}

void smartReverseIteration() {
    vector<int> v { 1, 2, 3 };
    
    for (size_t k = v.size(); k > 0; k--) {
        size_t i = k - 1;
        cout << i << " - " << v[i] << endl;
    }
    cout << endl;
}

int main1() {
//    problemOne();
//    problemTwo();
    
    
    //print sizes of types
//    cout << "types size" << endl;
//    cout << sizeof(int16_t) << endl;
//    cout << sizeof(int64_t) << endl;
//    cout << sizeof(size_t) << endl;
//
//    cout << sizeof(int) << endl;
//    cout << sizeof(long) << endl;
//    cout << sizeof(long int) << endl;
//    cout << sizeof(long long) << endl;
//    cout << sizeof(float) << endl;
//    cout << sizeof(double) << endl;
//    cout << sizeof(long double) << endl;
//    cout << sizeof(unsigned long) << endl;
//
//    cout << endl << "max min size of int16_t" << endl;
//    cout
//    << "min valvue: " << numeric_limits<int16_t>::min()
//    << ", max value: " << numeric_limits<int16_t>::max() << endl;
    
    
    //example of overflow
//    cout
//    << "example of overflow" << endl
//    << "min - 1: " << numeric_limits<int>::min() - 1 << endl
//    << "max + 1: " << numeric_limits<int>::max() + 1 << endl;
    
    
    //rules for dealing with types
    //1 cast to common type
    //2 a bigger type is selected
    //3 if size is equal (in bytes) an unsigned type is selected
    
    
    //unsigned int
    //result is that -1 > 1, because -1 is casted to a big positive number
//    int a = -1;
//    unsigned int b = 1;
//    cout << (a < b) << endl;
//    //unsigned number - short form of writing down
//    cout << (-1 < 1u) << endl;
    
    
    //solution for problems with "int + unsigned int = int" is static_cast<int>()
    //should be used ONLY if we know, that the actual value of "unsigned int" fits into "int" type
//    problemOneSolved();
    
    
    //itearations
    iteration();
    iterationWithoutLast();
    smartIteration();

    reverseIteration();
    smartReverseIteration();
    
    
    //rule of thumb - use static_cast() to cast "unsigned int OR size_t" to "int"
    
    return 0;
}
