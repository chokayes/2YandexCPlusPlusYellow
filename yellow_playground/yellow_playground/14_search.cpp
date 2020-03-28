//
//  14_search.cpp
//  yellow_playground
//
//  Created by Artsiom Kaliaha on 2/27/20.
//  Copyright © 2020 Artsiom Kaliaha. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <tuple>

using namespace std;

void findPositionsOfCharInString() {
    string text = "text txt some text";
    bool shouldPrintDelimiter = false;
    for (auto it = find(begin(text), end(text), ' '); it != end(text); it = find(next(it), end(text), ' ')) {
        if (shouldPrintDelimiter) {
            cout << ", ";
        }
        shouldPrintDelimiter = true;
        cout << it - begin(text);
    }
    cout << " - positions of spaces" << endl;
}

void binarySearch() {
    vector<int> v { 0, 0, 1, 2, 3, 4, 5, 5, 6, 8, 8, 9, 9, 9, 9 };
    
    //know that element exists in vector
    int searchedElement = 4;
//    bool exists = binary_search(begin(v), end(v), searchedElement);
//    if (exists) {
//        cout << "element exists" << endl;
//    } else {
//        cout << "element doesn't exist" << endl;
//    }
    
    //first element eqaul or greater than searched
    auto it = lower_bound(begin(v), end(v), searchedElement);
    cout << "lower bound for " << searchedElement << " is " << *it << endl;
    int nonExistingElement = 7;
    it = lower_bound(begin(v), end(v), nonExistingElement);
    cout << "lower bound for a non-existing element " << nonExistingElement << " is " << *it << endl << endl;
    
    int repeatedElement = 8;
//    pair<vector<int>::iterator, vector<int>::iterator> its = equal_range(begin(v), end(v), repeatedElement);
    auto its = equal_range(begin(v), end(v), repeatedElement);
    cout << "lower bound for " << repeatedElement << " is " << *its.first << endl;
    cout << "upper bound for " << repeatedElement << " is " << *its.second << endl;
    cout << "number of " << repeatedElement << " in array = " << its.second - its.first << endl << endl;

    its = equal_range(begin(v), end(v), nonExistingElement);
    cout << "lower bound for " << nonExistingElement << " is " << *its.first << endl;
    cout << "upper bound for " << nonExistingElement << " is " << *its.second << endl;
}

int main14() {
//    findPositionsOfCharInString();
    binarySearch();
    
    return 0;
}
