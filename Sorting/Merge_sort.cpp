// Merge Sort : Divide and Conqer

// In this sorting we divide the whole array form between into two sub array's  hypothically and then both sub array's again divided into again two sub array's
// of one sub array, simillary continue divide whole array until we got single element , after doing this we merge them one by one in ascending order.
// hence, array is sorted now.

// Time Complexity:O(nlogn)
// Space Complexity : O(n)

// Pseudocode:

/*
mergeSort(vector<int>&arr, int low,int high){
    // Base Case
    if(low>=high) return;
    int mid =( low+high)/2 ;
    // Left Half
    mergeSort(arr, low, mid);
    // Right Half
    mergeSort(arr, mid+1, high);
    merge(arr, Iow, mid, high);
}
merge(vector<int>&arr, int low,int mid,int high){
    vector<int>temp;
    int left = low;
    int right = mid+1;
    while(left<=mid && right<=high){
        if(arr[left]<= arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }
    }
    while(left <= mid){
        temp.push_back(arr[left]);
        left++;
    }
    while(right<=high){
        temp.push_back(arr[right]);
        right++;
    }
    for(int i=low -> high){
        arr[i]= temp[i-low];
    }
}
*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void merge(vector<int>&arr, int low,int mid,int high){
    vector<int>temp;
    int left = low;
    int right = mid+1;
    while(left<=mid && right<=high){
        if(arr[left]<= arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }
    }
    while(left <= mid){
        temp.push_back(arr[left]);
        left++;
    }
    while(right<=high){
        temp.push_back(arr[right]);
        right++;
    }
    for(int i=low;i<= high;i++){
        arr[i]= temp[i-low];
    }

}
void merge_sort(vector<int> &arr,int low,int high){
    if(low>=high) return;
    int mid = (low+high)/2;

    merge_sort(arr,low,mid);
    merge_sort(arr,mid+1,high);
    merge(arr,low,mid,high);
}
int main(){
    int n;
    cin >>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++) cin >> arr[i];
    merge_sort(arr,0,n-1);
    for(int i =0;i<n;i++){
        cout << arr[i] << endl;
    }
    return 0;
}