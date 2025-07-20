// Insertion SOrt : Take an element and place it at correct position

// In this sorting we traverse an array from first element to last and arrange all the in ascending order, means we check first and second element 
// that is second element is smaller than first ? if yes swap else move to next and compare them. Suppose in between we that element it should be
// at first then in this situation we just swap that element to previous till first element , similarly sort full array .

// Time Complexity - Worst/Average Case -O(n*(n+1)/2) = O(n^2) , Best Case - O(n)
// Ṣpace Complexity- O(1)

// Main function how it can be done :

// for(int i=0;i<=n-1;i++){
//     int j=i;
//     while (j>0 && arr[j-1]>arr[j])
//     {
//         swap(arr[j-1],arr[j]);
//         j--;
//     }
    
// }

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void insertion_sort(vector<int>&arr,int n){
    for(int i=0;i<=n-1;i++){
        int j=i;
        while(j>0 && arr[j-1]>arr[j]){
            swap(arr[j-1],arr[j]);
            j--;
        }
    }
}

int main(){
    int n;
    cin >>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++) cin >> arr[i];
    insertion_sort(arr,n);
    for(int i=0;i<n;i++){
        cout << arr[i] << endl;
    }
    return 0;
}