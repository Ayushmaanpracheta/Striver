// Map container in which it stores the data in the form of key and value , keys are different
// allowing for efficient retrieval, insertion, and deletion of elements based on the key.
//  A key can be any datatype it can be integer, character, double , pair ,anything.
// and similarly a value can be a anything
// it is defined as < key , value >
// map stores unique keys in stored order

#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void explainMap(){
    // declartion
    map<int,int> mp; // means -> map<key,value>
    map<int, pair<int,int>> mp;  // < key , pair<key, value>>
    map<pair<int,int>,int> mp;  // <pair<key,value>,value>

    mp[1]=2; // {1,2}
    mp.emplace({3,1}); // {{3,1},{1,2}}
    mp.insert({2,4}); // {{3,1},{2,4},{1,2}}

    mp({2,3}) =10; //{{2,3},10}

    for(auto it : mp){
        cout << it.first << " " << it.second << endl;
    }

    cout << mp[1];
    cout << mp[5];

    auto it = mp.find(3);
    cout << *(it).second;

    auto it = mp.find(5);

    // this is the syntax
    auto it = mp.lower_bound(2);
    auto it = mp.upper_bound(3);

    // erase , swap , size, empty, are same as above.
}

// Multimap:
void explainMultimap(){
    // everything stored same as map but difference is that it stores duplicate keys.
    // only map[key] is cannot be used here
}

// unoderedmap
void explainUnorderedmap(){
    // In this it have unique keys but are sorted.
}

