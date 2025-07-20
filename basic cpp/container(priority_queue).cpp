// IN the priorityQueue the maximum element will remain at the top it can be string, integer etc. 
// in the tree data structure is maintained
// push operation - O(log n)
// pop operation -  O(log n)
// top operation - O(1)
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void priority_Queue(){
    prority_Queue<int> pq;
    pq.push(5); //{5}
    pq.push(1); //{5,1}
    pq.push(4); //{5,4,1}
    pq.emplace(10); //{10,5,4,1}

    cout << pq.top(); // it will the top most element not delete it , 10

    pq.pop(); // delete the top most element ,  {5,4,1}
    cout << pq.top(); // 5
    //  and the other functions are similar as queue such as size, empty, swap etc.

    // Minimum Heap 
    priority_Queue<int, vector<int>, greater<int>> pq;
    pq.push(5); //{5}
    pq.push(2); //{2,5}
    pq.emplace(1); //{1,2,5}

    cout << pq.top(); // prints top element, 5
}