//
//  2_pairs.cpp
//  yellow_playground
//
//  Created by Artsiom Kaliaha on 2/12/20.
//  Copyright © 2020 Artsiom Kaliaha. All rights reserved.
//

#include <iostream>
#include <vector>
#include <tuple>
#include <utility>

using namespace std;

struct Date {
    int day;
    int month;
    int year;
};

bool operator<(const Date& lhs, const Date& rhs) {
    return vector<int> { lhs.year, lhs.month, lhs.day } < vector<int> { rhs.year, rhs.month, rhs.day };
}

bool operator>(const Date& lhs, const Date& rhs) {
    //complete type definition of a tuple
    tuple<const int&, const int&, const int&> lhsKey = tie(lhs.year, lhs.month, lhs.day);
    auto rhsKey = tie(rhs.year, rhs.month, rhs.day);
    return lhsKey > rhsKey;
}

pair<bool, string> getExampleTupleReturn() {
    return { true, "test" };
}

int main2() {
    //tuple based comparison
//    bool isSmaller = Date { 10, 11, 1995 } < Date { 24, 3, 1972 };
//    bool isBigger = Date { 10, 11, 1995 } > Date { 24, 3, 1972 };
//    cout << "isSmaller " << isSmaller << ", isBigger " << isBigger << endl;
    
    
    //ways to create a tuple
    //tuple with values
    tuple<int, string, bool> tup(10, "hi", true);
    cout << get<0>(tup) << " - " << get<1>(tup) << " - " << get<2>(tup) << endl;
    
    //tuple with refs
    int i = 10;
    string str = "hi";
    bool boolean = true;
    tuple<const int&, const string&, const bool&> tup1(i, str, boolean);
    
    //not preferred way of defining a tuple
    auto tup2 = make_tuple(10, "hi", true);
    cout << get<0>(tup2) << endl;
    
    //c++ 17 definition of a tuple
//    tuple tup3(10, "hi", true);
    
    
    //pair as a case of tuple
    pair<int, string> pair1(15, "hello");
    auto pair2 = make_pair(15, "hello");
    cout << pair2.first << " - " << pair2.second << endl;
    
    
    //pair as a return type
    pair<bool, string> retValues = getExampleTupleReturn();
    cout << retValues.first << retValues.second << endl;
    
    
    //return with python style
    bool resBool;
    string resStr;
    tie(resBool, resStr) = getExampleTupleReturn();
    auto [resBoolNew, resStrNew] = getExampleTupleReturn();
    
    return 0;
}
