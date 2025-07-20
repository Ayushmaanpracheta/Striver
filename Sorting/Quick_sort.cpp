// Quick Sort:  divide-and-conquer sorting algorithm that works by recursively partitioning an array around a pivot element,
//  placing smaller elements to its left and larger elements to its right, and then sorting the partition : better than merge sort

// In this sorting we do same as merge sort but it much better than merge sort as we don't need to take extra space.
// we sort an array but following just simple steps:
//   a.1st element in the array.
//   b.last element in array.
//   c.median element in array.
//   d.random element in array.

// 1. Pick a pivot and place it on its correct postion in sorted array.
// 2. Smaller on the left and larger at the right.
// 3.Repeat Above steps again and again until get sorted fully.

// Time Complexity : O(n)
// Space Complexity : O(1)

// Pseudocode :
/*
quicksort(arr,low,high){
    if(low<high){
        pIndex = partition(arr,low,high);
        quicksort(arr,low,pIndex-1);
        quicksort(arr,pIndex+1,high);
    }
}
int partition(arr,low,high){
    pivot = arr[low];
    i= low;
    j=high;
    while(i<j){
        while(arr[i]<=pivot && i<= high-1){
            i++;
        }
        while(arr[j]> pivot && j>=low+1){
            j--;
        }
        if(i<j)
            swap(arr[i],arr[j]);
        swap(arr[low],arr[j]);
        return j;
    }
}
*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int partition(vector<int>& arr, int low, int high);

void quicksort(vector<int> &arr,int low,int high){
    if(low<high){
        int pIndex = partition(arr,low ,high);
        quicksort(arr,low,pIndex-1);
        quicksort(arr,pIndex+1,high);
    }
}
int partition(vector<int>&arr,int low, int high){
    int pivot = arr[low];
    int i = low;
    int j = high;
    while(i<j){
        while(arr[i] <= pivot && i<=high-1){
            i++;
        }
        while(arr[j] > pivot && j >= low+1){
            j--;
        }
        if(i<j) 
            swap(arr[i],arr[j]);
    }
    swap(arr[low],arr[j]);
    return j;
}
int main(){
    int n;
    cin >> n;
    vector<int>arr(n);
    for(int i =0;i<n;i++) cin >> arr[i];
    quicksort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout << arr[i] << endl;
    }
    return 0;
}