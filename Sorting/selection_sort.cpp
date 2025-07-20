// Selection Sort : Select minimum and swap to first index to n-1 : In this sorting we have a given array and we have to sort them using selection sort,
// means we have to find the minimum element in an array and swap it with first element of an array and move pointer to next till n-1 , similarly sort them.

// Time Complexity - O(n*(n+1)/2) = O(n^2)
// Space Complexity - O(1)

// Main function how it can be done :

// for(int i = 0;i<n-2;i++){
//     int minimum = i;
//     for(int j=i;j<n-1;j++){
//         if(arr[j]<arr[minimum])
//             minimum =j;
//     }
//     swap(arr[minimum],arr[i]);
//     /*
//     how swap works:
//     temp = arr[minimum];
//     arr[mimimum]= arr[i];
//     arr[i]= temp;
//     */
// }

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void selection_sort(vector<int>&arr, int n){
    for(int i=0;i<n-2;i++){
        int minimum = i;
        for(int j=i;j<n-1;j++){
            if(arr[j]<arr[minimum])
                minimum =j;
        }
        swap(arr[minimum],arr[i]);
    }
}
int main(){
    int n;
    printf( "Enter the number elements : ");
    cin >> n ;
    cout <<endl;
    printf( "Enter the elements : ");
    vector<int>arr(n);
    for(int i =0;i<n;i++) cin >>arr[i];
    selection_sort(arr,n);
    for(int i=0;i<n;i++){
        cout << arr[i] << endl;
    }
    return 0;
}

