// GFG - Largest Element in the Array: IN this question i need to return maximum element from the array 
// Approach - 1 : Brute Force : Sorting the array : Time Complexity -O(nlogn) , Space Complexity - O(1) 
// Approach -2 : Using Pointer method by compare each element : Time Complexity -O(n) , Space Complexity - O(1) [Optimised]

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int largest(int arr[],int n){
    int max = arr[0];
    for(int i =1;i<n;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    return max;
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout<< largest(arr, n) << endl;
    return 0;
}