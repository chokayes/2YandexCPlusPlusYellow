//
//  3_template.cpp
//  yellow_playground
//
//  Created by Artsiom Kaliaha on 2/13/20.
//  Copyright © 2020 Artsiom Kaliaha. All rights reserved.
//

#include <iostream>
#include <utility>
#include <algorithm>

using namespace std;

template<typename F, typename S>
pair<F,S> multiplyPairs(const pair<F, S>& one, const pair<F, S>& two) {
    F resF = one.first * two.first;
    S resS = one.second * two.second;
    
    return make_pair(resF, resS);
}

template<typename F, typename S>
pair<F, S> operator*(const pair<F, S>& a, const pair<F, S>& b) {
    return multiplyPairs(a, b);
}

//function to automatically print result of multiplication into console
template<typename F, typename S>
ostream& operator<<(ostream& os, const pair<F, S>& p) {
    os << "[" << p.first << ", " << p.second << "]";
    return os;
}

template<typename T>
T sqrt(T x) {
    return x * x;
}

int main3() {
    //template with tuples and fancy return
    auto [resF, resS] = multiplyPairs(make_pair(2, 2.5), make_pair(3, 3.5));
    cout << "2 * 3 = " << resF <<endl;
    cout << "2.5 * 3.5 = " << resS <<endl;
    //normal return with pair
    pair<int, double> resPair = multiplyPairs(make_pair(2, 2.5), make_pair(3, 3.5));
    cout << endl << "result from pair" << endl;
    cout << "2 * 3 = " << resPair.first <<endl;
    cout << "2.5 * 3.5 = " << resPair.second <<endl;
    
    
    //template sqrt
    cout << endl << sqrt(5) << endl;
    //pair sqrt
    auto p = make_pair(5, 6);
    cout << sqrt(p) << endl;
    
    
    //template from algorithm lib
    cout << endl << "int cast " << max<int>(2, 3) << endl;
    cout << "double cast " << max<double>(2, 3.5) << endl;
//    cout << "compilcation error " << max(2, 3.5) << endl;
    
    return 0;
}
