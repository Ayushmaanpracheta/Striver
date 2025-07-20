// Vectors : Vectors are the containers which dynamically increase there size and elements can be deleted or added into them.
          
          // Syantax : Vector<object_type>variable_name;
/*Most funtions in Vector :
    1. begin()
    2.end()
    3.push_back()
    4.insert()
    5.erase()
    6.pop_back()
    7.front()
    8.back()
    9.clear()
    10.empty()
    11.size()
    */ 

// Declaration_of_Vector:

#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void explainVector(){
    vector<int>v; // it creates a empty container -> {}
    v.push_back(1); // it means we push 1 into empty container -> {1}
    v.emplace_back(2); // it increase the size dynamically and place 2 next to previous one -> {1,2}

    vector<pair<int,int>>vec_pair; // it means vectors contains pairs inside  -> {_,_}
    v.push_back({1,2}); // it push{1,2} into vector -> {1,2}
    v.emplace_back(1,2); // it analyse automatically and put into vector{}

    vector<int>v(5,100); // In this 5 -> size of vector  and 100 -> it would be placed at all empty places -> {100,100,100,100,100}
    vector<int>v(5); // it denotes the size of empty vector and it can be store any value can be garbage value. You can even it after this also just use push_back().

    vector<int>v1(1,3); // 1 -> size of vector and 3 -> {3}
    vector<int>v2(v1); // it just copy the v1 vector and paste it into the v2 vector

}

