// Set container are the those container which stores the element in sorted form and have uniqueness .
// it will maintain a tree like structure in it
// O(log n)
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void explainSet(){
    set<int> st;
    st.insert(1); //{1}
    st.insert(2); // {1,2}
    st.emplace(2); // it will not insert 2 again because set have uniqueness, {1,2}
    st.insert(3); // {1,2,3}
    st.insert(4); //{1,2,3,4}
    st.insert(5); // {1,2,3,4,5}

    // functionality of insert in vector can be used also. which increase the efficiency

    // begin() , end(), rbegin(), rend() ,size()
    // empty() and swap() are similar like above

    // {1,2,3,4,5}
    auto.it = st.find(3); // it works as iterator which gives memory address of that element .

    // {1,2,3,4,5}
    auto it = st.find(6) ; // as this element is not present in set then it will give output as -> st.end()

    st.erase(4); // it will erase the 4 from the set output -> {1,2,3,5}

    int.cnt =  st.count(1); // it will give output in 0 and 1, if exist give output as 1 and if not exist it will give 0 as output

    auto it1 = st.find(2);
    auto it2 = st.find(4);
    st.erase(it1,it2); // output -> {1,4,5} , deletes {first , end)

    // lower_bound() and upper_bound() will works same as in vector

    auto it = st.lower_bound(2);
    auto it = st.upper_bound(3);
}

void explainMultiSet(){
    // In multiset it is similar as set , it stores the element in sorted form but not have uniqueness( contains duplicates)

    multiset<int>mst;
    mst.insert(1); //{1}
    mst.insert(1); //{1,1}
    mst.emplace(1); //{1,1,1}

    mst.erase(1); // it will delete all the 1's in the set 

    mst.erase(mst.find(1)); // it will delete only one element
    mst.erase(mst.find(1), mst.find(1)+2);  // it will delete both elements in set

    // rest of all the operations are similar as set
}

void explainUset(){
    unorderedSet<int>u_set;
    // it will not stores in sorted form it will only stores in unique form
    // time complexity  - O(1)
    // upper bound and lower bound function
}
