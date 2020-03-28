//
//  10_iterator_and_containers.cpp
//  yellow_playground
//
//  Created by Artsiom Kaliaha on 2/16/20.
//  Copyright © 2020 Artsiom Kaliaha. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

template<typename Iterator>
void printRange(Iterator start, Iterator end) {
    for (Iterator it = start; it != end; ++it) {
        cout << *it << " ";
    }
}

int main10() {
//    vector<string> v { "pyhton", "c", "c", "c#", "c++", "c++", "java" };
//    printRange(begin(v), end(v));
    
    
    //erase
//    cout << endl << endl << "erase" << endl;
//    auto it = find(begin(v), end(v), "c#");
//    v.erase(it, end(v));
//    printRange(begin(v), end(v));
    
    
    //insert
//    cout << endl << endl << "insert at head" << endl;
//    v.insert(begin(v), "newc#");
//    printRange(begin(v), end(v));
//    cout << endl << "insert at tail" << endl;
//    v.insert(end(v), "newc++");
//    printRange(begin(v), end(v));
    
    
    //remove if
//    auto newEndOfVector = remove_if(begin(v), end(v), [](const string& lang) { return lang[0] == 'c'; });
//    v.erase(newEndOfVector, end(v));
//    cout << endl << endl << "remove langs starting with 'c'" << endl;
//    printRange(begin(v), end(v));
//    cout << endl;
    
    
    //remove equal elements, which go one after another
//    auto it = unique(begin(v), end(v));
//    v.erase(it);
//    cout << endl << endl << "remove equal elements, which go one after another" << endl;
//    printRange(begin(v), end(v));
//    cout << endl;
    
    
    //min max element
//    auto it = minmax_element(begin(v), end(v));
//    cout << endl << endl << "min=" << *it.first << " " << "max=" << *it.second << endl;
    
    
    //set. elements are sorted by default
    set<string> s { "c", "pyhton", "c++", "java" };
//    cout << "min=" << *s.begin() << ", max=" << *s.rbegin() << endl;
    
    
    //sort all_of
    bool allLowerCase = all_of(begin(s), end(s),
                               [](const string& lang) { return 'c' <= lang[0] && lang[0] <= 'z'; });
    cout << "all lower case elements " << allLowerCase << endl;
    
    return 0;
}
