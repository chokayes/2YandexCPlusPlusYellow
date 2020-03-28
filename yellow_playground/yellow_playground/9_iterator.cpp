//
//  9_iterator.cpp
//  yellow_playground
//
//  Created by Artsiom Kaliaha on 2/16/20.
//  Copyright © 2020 Artsiom Kaliaha. All rights reserved.
//

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <set>
#include <map>

using namespace std;
using stringIt = vector<string>::iterator;

struct Lang {
    string name;
    int age;
};

template<typename K, typename V>
ostream& operator<<(ostream& os, pair<K, V>& item) {
    return os << "[" << item.first << ", " << item.second << "]";
}

template<typename Iterator>
void printRange(Iterator rangeBegin, Iterator rangeEnd) {
    bool printDelimiter = false;
    
    for (Iterator it = rangeBegin; it != rangeEnd; ++it) {
        if (printDelimiter) {
            cout << " ";
        }
        printDelimiter = true;
        
        cout << *it;
    }
    cout << endl;
}

int main9() {
    //container iterator
//    vector<Lang> langs {
//        { "c", 26 },
//        { "c++", 35 },
//        { "c#", 45 },
//        { "python", 78 },
//        { "java", 17 }
//    };
//    cout << "first element: " << begin(langs)->name << " " << begin(langs)->age << endl;
//    cout << endl;
//
//    auto result = find_if(begin(langs), end(langs), [] (const Lang& lang) { return lang.name[0] == 'p'; });
//    if (result == end(langs)) {
//        cout << "not found!!!" << endl;
//    } else {
//        cout << "found!!!" << endl;
//        cout << result->name << endl;
//        result->name = "smth else";
//        cout << result->name << endl;
//    }
    
    
    //iterator for-loop
//    string str = "hello world!";
//    for (auto it = begin(str); it != end(str); ++it) {
//        cout << *it;
//    }
//    cout << endl;
    
    
    //method to print all elements with iterators
//    vector<string> strs { "hello", "world", "!!!" };
//    printRange(begin(strs), end(strs));
    
    
    //set. print all elements after found element
    //array gets autimatically sorted
//    set<string> langs { "python", "c++", "c", "java", "c#" };
//
//    cout << "sorted set" << endl;
//    printRange(begin(langs), end(langs));
//
//    set<string>::iterator it = langs.find("c++");
//    cout << endl << "values from start till 'c++' excluding" << endl;
//    printRange(begin(langs), it);
//
//    cout << endl << "values from 'c++' including till the end" << endl;
//    printRange(it, end(langs));
    
    
    //map
//    map<string, int> langs {
//        { "python", 10 },
//        { "c++", 12 },
//        { "c", 9 },
//        { "a++", 1 },
//        { "d", 30 },
//    };
//
//    map<string, int>::iterator it = langs.find("c++");
//    printRange(begin(langs), it);
//    printRange(it, end(langs));

    
    //reversed print
    vector<string> v { "c", "c++", "c#", "python", "java" };
    vector<string>::iterator it = end(v);
    while (it != begin(v)) {
        it--;
        cout << *it << endl;
    }
    
    return 0;
}
