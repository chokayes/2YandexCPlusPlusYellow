//
//  12_iterator_inserter.cpp
//  yellow_playground
//
//  Created by Artsiom Kaliaha on 2/27/20.
//  Copyright © 2020 Artsiom Kaliaha. All rights reserved.
//

#include <iostream>

#include <vector>
#include <set>

#include <string>

#include <algorithm>
#include <iterator>

using namespace std;

template<typename Iterator>
void printRange(Iterator start, Iterator end) {
    bool shouldPrintDelimiter = false;
    
    for (auto it = start; it != end; it++) {
        if (shouldPrintDelimiter) {
            cout << ", ";
        }
        shouldPrintDelimiter = true;
        cout << *it;
    }
    cout << endl;
}

int main12() {
    vector<string> v { "python", "go", "haskel", "c++", "c", "java", "c#" };
    
    
    //push found results to a new vector w/o setting fixed size
//    vector<string> copies;
//    copy_if(begin(v), end(v), back_inserter(copies), [](const string& lang) { return lang[0] == 'c'; });
//    printRange(begin(copies), end(copies));
    
    
    //inserter for sets
//    set<int> a { 1, 3, 8 };
//    set<int> b { 7, 3, 8 };
//    set<int> res;
//    set_intersection(begin(a), end(a), begin(b), end(b), inserter(res, begin(res)));
//    printRange(begin(res), end(res));
    
    
    //get element by iterator and its position
//    auto it = find_if(begin(v), end(v), [](const string& lang) { return lang[0] == 'c'; });
//    cout << "position of '" << *it << "' is " << it - begin(v) << endl;

    
    //increment iterator
    set<int> s { 1, 6, 8, 9 };
    auto it = s.find(6);
    printRange(next(it), end(s));
    
    return 0;
}
