// Reverse an Array using recursion :

// Approach 1 : Two pointer using recursion

// Time Complexity - O(N)
// Stack Complexity - O(N)

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void Rev(int l, int r,int arr[]){
    if(l>=r)
        return;
    swap(arr[l],arr[r]);
    Rev(l+1,r-1,arr);
}


int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    Rev(0,n-1,arr);
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    return 0;
}


// Approach 2 : Using single pointer :
// Time Complexity - O(N)
// Stack Complexity -O(N)

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void Rev(int i , int n,int arr[]){
    if(i>=n/2)
        return;
    swap(arr[i],arr[n-i-1]);
    Rev(i+1,n,arr);
}


int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    Rev(0,n,arr);
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    return 0;
}