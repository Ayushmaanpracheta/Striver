// Left Rotate Array by D places
// in this question we have an array and number of rotations , that how many times i need to rotate an array.

// Approach 1 : Brute Force :
// Time Complexity: O(N + D)
// Space Complexity: O(d)

    // temp = arr[0];
    // for(int i=0;i<d;i++){
    //     temp.push_back(arr[i]);
    // }
    // for(int i =d;i<n;i++){
    // arr[i-d]=arr[i];
    // }
    // for(int i = n-d;i<n;i++){
    //     arr[i]= temp[i-(n-d)];
    // }

// Approach 2: optimised : reverse an array 
// Time Complexity: O(2n)
// Space Complexity: O(1)

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void leftrotate(int arr[],int n, int d){
    reverse(arr,arr+d);
    reverse(arr+d,arr+n);
    reverse(arr,arr+n);
}

int main(){
    int n;
    cin >>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int d;
    cin >>d;
    leftrotate(arr,n,d);
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    return 0;
}