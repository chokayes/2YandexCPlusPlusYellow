//
//  main.cpp
//  yellow_playground
//
//  Created by Artsiom Kaliaha on 2/11/20.
//  Copyright © 2020 Artsiom Kaliaha. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

template<typename T>
void printArray(vector<T>& v) {
    cout << "# of elements " << v.size() << endl;
    
    for (auto& item : v) {
        cout << item << ", ";
    }
    
    cout << endl;
}

int main1(int argc, const char * argv[]) {
    //how does erase work?
    vector<int> v { 1, 2, 3, 4, 5 };
    printArray(v);
    auto iterator = remove(begin(v), end(v), 1); //what values are contained in iterator???
    printArray(v);
    v.erase(iterator);
    printArray(v);
    
    return 0;
}
