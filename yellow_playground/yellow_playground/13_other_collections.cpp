//
//  13_other_collections.cpp
//  yellow_playground
//
//  Created by Artsiom Kaliaha on 2/27/20.
//  Copyright © 2020 Artsiom Kaliaha. All rights reserved.
//

#include <iostream>

#include <deque>
#include <queue>
#include <stack>

using namespace std;

int main13() {
    //deque
//    deque<int> dq;
//    dq.push_back(1);
//    dq.push_front(2);
//
//    int& i = dq.back();
//    i = 100500;
//
//    cout << dq.back() << " - " << dq.front() << endl;
//    dq.pop_back();
//    dq.pop_front();
    
    
    //queue
//    queue<int> q;
//    q.push(1);
//    q.push(2);
//    cout << q.back() << " - " << q.front() << endl;
//    q.pop();
//    q.pop();
    
    
    //stack
    stack<int> st;
    st.push(1);
    st.push(2);
    cout << st.top();
    st.pop();
    cout << " - " << st.top() << endl;
    st.pop();
    
    return 0;
}
