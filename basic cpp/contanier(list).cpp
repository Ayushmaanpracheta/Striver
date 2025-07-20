#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void explain_list(){
    list<int>ls;
    ls.push_back(2); // {2}
    ls.emplace_back(5); //{2,5}
    
    ls.push_front(4); //{4,2,5}
    ls.emplace_front(); //{2,5}

    //rest of the function are same as vector
    // begin,end, rbegin, rend, clear,insert, size,swap
}

void explain_Deque(){
    deque<int> dq;
    dq.push_back(1); //{1}
    dq.emplace_back(2); //{1,2}
    dq.push_front(4); //{4,1,2}
    dq.emplace_front(3); //{3,4,1,2}

    dq.pop_back(); // {3,4,1}
    dq.pop_front(); // {4,1}

    dq.back();
    dq.front();
}