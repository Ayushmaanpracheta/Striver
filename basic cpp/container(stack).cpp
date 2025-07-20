//  The main operation in stacks is "pop operation","push operation", "top operation"
// stack is that in which we place a element in it one by one using push operation and take out using pop operation.
// it follows the LIFO(last in first out)
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void explainStack(){
    stack<int> st;
    st.push(1); //{1}
    st.push(2); //{2,1}
    st.push(3); // {3,2,1}
    st.emplace(4); // {4,3,2,1}

    cout << st.top(); // output -> 4 , but not pop out it will remain in stack
    st.pop(); // {3,2,1}

    cout << st.top(); // 3
    cout << st.size(); //3
    cout << st.empty (); // output -> false

    stack<int> st1,st2;
    st1.swap(st2); // swaps both the stacks
}