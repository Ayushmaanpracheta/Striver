// Bubble Sort : push the maximum to the last with adjacent swaps
// In this in given array we just first two element and swap it and move to next ,similarly again repeat this process untill it sort
// and every time it iterate from n-1 , n-2, ..... to 1

// Time Complexity - Worst/Average Case -O(n*(n+1)/2) = O(n^2) , Best Case - O(n)
// Ṣpace Complexity- O(1)

// Main function how it can be done :

// for(int i= n-1;i>=1;i++){
//     for(int j=0;j<=i-1;j++){
//         if(arr[j]>arr[j+1])
//             swap(arr[j+1],arr[i]);
//     }
// }

// Best Case - When we don't need to swap an array :

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void bubble_sort(vector<int>&arr,int n){
    for(int i=n-1;i>=1;i--){
        int didswap =0;
        for(int j=0;j<i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                didswap=1;
            }
        }
        if(didswap == 0)
            break;
        cout << "runs\n";
    }
}
int main(){
    int n;
    cin >> n;
    vector<int>arr(n);
    for(int i=0;i<n;i++) cin >> arr[i];
    bubble_sort(arr,n);
    for(int i=0;i<n;i++){
        cout << arr[i] << endl; 
    }
    return 0;
}


// Worst Case:
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// void bubble_sort(vector<int>&arr,int n){
//     for(int i=n-1;i>=1;i--){
//         for(int j=0;j<i;j++){
//             if(arr[j]>arr[j+1])
//                 swap(arr[j],arr[j+1]);
//         }
//     }
// }
// int main(){
//     int n;
//     cin >> n;
//     vector<int>arr(n);
//     for(int i=0;i<n;i++) cin >> arr[i];
//     bubble_sort(arr,n);
//     for(int i=0;i<n;i++){
//         cout << arr[i] << endl; 
//     }
//     return 0;
// }