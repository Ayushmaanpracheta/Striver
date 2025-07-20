// A container is similar to stack container but difference is that it follows FIFO(first in first out)
// Time Complexity -> O(1) 
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void explainQueue(){
    queue<int>q;
    q.push(1); // output -> {1}
    q.push(2); // output -> {1,2}
    q.emplace(3); // output -> {1,2,3}

    q.back() += 5; //  it will add 5 at the end(th) element in queue
    cout << q.back(); // output -> 8(3+5)

    cout << q.front(); // it will show the first value of the queue, output -> 1 , it only prints it not delete it

    q.pop(); // it pop's put the first element from the queue ,  output -> {2,8}
    cout << q.front(); // output -> 2 , it will only prints not delete it from queue
}
// and the other operation such as swap , size ,empty are same as stack