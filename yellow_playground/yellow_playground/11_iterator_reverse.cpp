//
//  11_iterator_reverse.cpp
//  yellow_playground
//
//  Created by Artsiom Kaliaha on 2/16/20.
//  Copyright © 2020 Artsiom Kaliaha. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <set>

using namespace std;

template<typename Iterator>
void printRange(Iterator start, Iterator end) {
    bool printDelimiter = false;
    
    cout << "[ ";
    for (Iterator it = start; it != end; it++) {
        if (printDelimiter) {
            cout << ", ";
        }
        printDelimiter = true;
        
        cout << *it;
    }
    cout << " ]" << endl;
}

int main11() {
//    vector<string> v { "python", "c", "c++", "java", "c#" };
//    printRange(begin(v), end(v));
//    cout << endl;
    
    //find last occurence of an element
//    auto it = find_if(rbegin(v), rend(v), [](const string& lang) { return lang[0] == 'c'; });
//    cout << "first element starting from with 'c' from end" << endl;
//    cout << *it << endl;
    
    
    //reversed sorting
//    cout << "reversed sorting" << endl;
//    sort(rbegin(v), rend(v));
//    printRange(begin(v), end(v));
//    cout << endl << "normal sorting" << endl;
//    sort(begin(v), end(v));
//    printRange(begin(v), end(v));
    
    
    //move all elements that satisfy a condition to the beginning of the vector
//    partition(begin(v), end(v), [](const string& lang) { return lang[0] == 'c'; });
//    printRange(begin(v), end(v));
    
    
    //copy elements that satisfy a confition to the beginning of the array
//    long occurences = count_if(begin(v), end(v), [](const string& lang) { return lang[0] == 'c'; });
//    vector<string> v_copy(occurences);
//    copy_if(begin(v), end(v), begin(v_copy), [](const string& lang) { return lang[0] == 'c'; });
//    cout << "elements starting from 'c' copied to another array" << endl;
//    printRange(begin(v_copy), end(v_copy));
    
    
    //set operations
    set<int> a { 1, 8, 3 };
    set<int> b { 6, 3, 8 };
    vector<int> intersection (a.size());
    set_intersection(begin(a), end(a), begin(b), end(b), begin(intersection));
    cout << "elements, which are in both sets" << endl;
    printRange(begin(intersection), end(intersection));
    
    
    return 0;
}
