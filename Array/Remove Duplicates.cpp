// Remove Duplicates from an array: In this question we have an array of n integers and we need to remove all the duplicates values from that array.

// Apprroach 1: Brute Force : Using set
/*
Time Complexity-O(NlogN + N)
Space Complexity -O(N)
*/
 
#include <iostream>
#include <set>
using namespace std;

int duplicate(int arr[],int n){
    set<int>st;
    for(int i= 0;i<n;i++){
        st.insert(arr[i]);
    }
    int index =0;
    for(auto it:st){
        arr[index] =it;
        index++;
    }
    return index;
}

int main(){
    int  n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>> arr[i];
    }
    cout << duplicate(arr,n)<<endl;
    return 0;
}


// Approach 2: two Pointer approach 
/*
Time Complexity-O(N)
Space Complexity -O(1)
*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int duplicate (int arr[],int n){
    int i =0;
    for(int j=0;j<n;j++){
        if(arr[i]!=arr[j]){
            arr[i+1] =arr[j];
            i++;
        }
    }
    return i+1;
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout<< duplicate(arr, n) << endl;
    return 0;
}